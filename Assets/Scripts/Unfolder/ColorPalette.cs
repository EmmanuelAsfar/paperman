using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ColorPalette
{


    private readonly List<List<Color>> swatches;
    private readonly int swatchSize;

    public int currentSwatchIndex;

    public void InitNicePalette()
    {
        var hexSwatches = new List<String[]>();
        hexSwatches.Add(new String[] { "003049","d62828","f77f00","fcbf49","eae2b7" });
        hexSwatches.Add(new String[] { "264653", "2a9d8f", "e9c46a", "f4a261", "e76f51" });
        hexSwatches.Add(new String[] { "cb997e","ddbea9","ffe8d6","b7b7a4","a5a58d","6b705c" });
        hexSwatches.Add(new String[] { "e63946","f1faee","a8dadc","457b9d","1d3557" });
        hexSwatches.Add(new String[] { "8ecae6", "219ebc", "023047", "ffb703", "fb8500" });
        hexSwatches.Add(new String[] { "ede0d4", "e6ccb2", "ddb892", "b08968", "7f5539", "9c6644" });
        hexSwatches.Add(new String[] { "006d77", "83c5be", "edf6f9", "ffddd2", "e29578" });
        hexSwatches.Add(new String[] { "000000", "14213d", "fca311", "e5e5e5", "ffffff" });
        hexSwatches.Add(new String[] { "606c38", "283618", "fefae0", "dda15e", "bc6c25" });
        hexSwatches.Add(new String[] { "003049", "d62828", "f77f00", "fcbf49", "eae2b7" });
        hexSwatches.Add(new String[] { "d8e2dc", "ffe5d9", "ffcad4", "f4acb7", "9d8189" });
        hexSwatches.Add(new String[] { "f4f1de", "e07a5f", "3d405b", "81b29a", "f2cc8f" });
        hexSwatches.Add(new String[] { "335c67", "fff3b0", "e09f3e", "9e2a2b", "540b0e" });
        hexSwatches.Add(new String[] { "edc4b3", "e6b8a2", "deab90", "d69f7e", "cd9777", "c38e70", "b07d62", "9d6b53", "8a5a44", "774936" });
        hexSwatches.Add(new String[] { "f8f9fa", "e9ecef", "dee2e6", "ced4da", "adb5bd", "6c757d", "495057", "343a40", "212529" });
        hexSwatches.Add(new String[] { "2b2d42", "8d99ae", "edf2f4", "ef233c", "d90429" });
        hexSwatches.Add(new String[] { "f6bd60", "f7ede2", "f5cac3", "84a59d", "f28482" });
        hexSwatches.Add(new String[] { "012a4a", "013a63", "01497c", "014f86", "2a6f97", "2c7da0", "468faf", "61a5c2", "89c2d9", "a9d6e5"  });
        hexSwatches.Add(new String[] { "0081a7", "00afb9", "fdfcdc", "fed9b7", "f07167" });
        hexSwatches.Add(new String[] { "000814", "001d3d", "003566", "ffc300", "ffd60a" });
        hexSwatches.Add(new String[] { "cad2c5", "84a98c", "52796f", "354f52", "2f3e46" });
        hexSwatches.Add(new String[] { "c9cba3", "ffe1a8", "e26d5c", "723d46", "472d30" });
        hexSwatches.Add(new String[] { "463f3a", "8a817c", "bcb8b1", "f4f3ee", "e0afa0" });
        hexSwatches.Add(new String[] { "353535", "3c6e71", "ffffff", "d9d9d9", "284b63" });
        hexSwatches.Add(new String[] { "001524", "15616d", "ffecd1", "ff7d00", "78290f" });
        hexSwatches.Add(new String[] { "386641", "6a994e", "a7c957", "f2e8cf", "bc4749" });
        hexSwatches.Add(new String[] { "e7ecef", "274c77", "6096ba", "a3cef1", "8b8c89" });
        hexSwatches.Add(new String[] { "252323", "70798c", "f5f1ed", "dad2bc", "a99985" });
        hexSwatches.Add(new String[] { "545e75", "63adf2", "a7cced", "304d6d", "82a0bc" });
        hexSwatches.Add(new String[] { "e8d6cb", "d0ada7", "ad6a6c", "5d2e46", "b58db6" });
        hexSwatches.Add(new String[] { "022b3a", "1f7a8c", "bfdbf7", "e1e5f2", "ffffff" });
        hexSwatches.Add(new String[] { "e1ca96", "aca885", "918b76", "626c66", "434a42" });
        hexSwatches.Add(new String[] { "2f6690", "3a7ca5", "d9dcd6", "16425b", "81c3d7" });
        hexSwatches.Add(new String[] { "000000", "1f2a2d", "0080aa", "dce6e8", "ffffff", "ffd027" });
        hexSwatches.Add(new String[] { "002642", "840032", "e59500", "e5dada", "02040f" });
        hexSwatches.Add(new String[] { "f1f7ee", "b0bea9", "92aa83", "e0edc5", "e7f59e" });
        hexSwatches.Add(new String[] { "19535f", "0b7a75", "d7c9aa", "7b2d26", "f0f3f5" });

        foreach (var hexSwatch in hexSwatches)
        {
            var swatch = new List<Color>();
            foreach (var hexColor in hexSwatch)
            {
                ColorUtility.TryParseHtmlString("#"+hexColor, out Color color);
                swatch.Add(color);
            }
            AddSwatch(swatch, false);
        }
    }

    public ColorPalette(int swatchSize)
    {
        this.swatchSize = swatchSize;
        swatches = new List<List<Color>>();
    }

    public void AddSwatch(List<Color> colors, bool moveIndexToSwatch)
    {
        int swatchIndex = 0;
        while (colors.Count > swatchIndex * swatchSize)
        {
            swatches.Add(colors.GetRange(swatchIndex * swatchSize, Math.Min(swatchSize, colors.Count - swatchIndex * swatchSize)));
            swatchIndex++;
        }
        if (moveIndexToSwatch) currentSwatchIndex = Math.Min(swatches.Count, swatches.Count - swatchIndex);
    }

    public void NextSwatch()
    {
        currentSwatchIndex++;
        if (currentSwatchIndex == swatches.Count) currentSwatchIndex = 0;
    }

    public void PreviousSwatch()
    {
        currentSwatchIndex--;
        if (currentSwatchIndex == -1) currentSwatchIndex = swatches.Count - 1;
    }

    public void ShuffleSwatch()
    {
        var swatch = swatches[currentSwatchIndex];
        for (int t = 0; t < swatch.Count; t++)
        {
            Color tmp = swatch[t];
            int r = UnityEngine.Random.Range(t, swatch.Count);
            swatch[t] = swatch[r];
            swatch[r] = tmp;
        }
    }

    public Color[] GetSwatch(int swatchIndex)
    {
        var result = new Color[swatchSize];
        for (int i = 0; i < swatchSize; i++)
            result[i] = new Color(1,1,1);
        swatches[swatchIndex].CopyTo(result);
        return result;
    }

    public Color[] GetSwatch()
    {
        return GetSwatch(currentSwatchIndex);
    }

    public void FillRandomSwatches(int swatchToCreate)
    {
        var cf = new BeautifulColors.ColorFactory();
        for (int i = 0; i < swatchToCreate; i++)
        {
            var swatch = new List<Color>();
            for (int j = 0; j < swatchSize; j++)
            {
                BeautifulColors.Color c = cf.RandomBeautiful().First();
                swatch.Add(new UnityEngine.Color(c.R / 255f, c.G / 255f, c.B / 255f, c.A / 255f));
            }
            AddSwatch(swatch, false);
        }
    }
}
