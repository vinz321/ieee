using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightRefPattern
{
    // Start is called before the first frame update
    List<Facet> tris;
    List<Facet> sides;

    void lightRefPattern(string reference, string faceType, List<Facet> facets)
    {
        string o = reference.Replace("stpth_", "").Replace("endpth", "");
        string[] singlePatterns = extractSinglePatterns(o); // singoli pattern colore + faccette
        string[] splitPattern;
        Color patternCol;
        foreach(string p in singlePatterns)
        {
            splitPattern = p.Split(faceType);
            patternCol = readColor(splitPattern[0].Split("_"), 0);

            for(int i = 1; i < splitPattern.Length; i++)
            {
                string[] id = splitPattern[i].Split("_");
                Facet f=facets.Find(x => (x.BigF.ToString() == id[0] && x.SmallF.ToString() == id[1]));
                f.TurnOn(patternCol / 2);
            }
        }
    }
    private string[] extractSinglePatterns(string pattern)
    {
        string[] output = pattern.Split("endpthstpth_");
        return output;
    }

    private Color readColor(string[] pattern_fsplit, int offset)
    {
        string[] components = pattern_fsplit[offset].Split("_");
        Debug.Log(components);

        return new Color(float.Parse(components[0]), float.Parse(components[1]), float.Parse(components[2]));
    }

}
