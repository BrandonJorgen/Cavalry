//Maya ASCII 2022 scene
//Name: SideNetting.ma
//Last modified: Sun, Feb 06, 2022 02:25:14 PM
//Codeset: 1252
requires maya "2022";
requires -nodeType "gameFbxExporter" "gameFbxExporter" "1.0";
requires "mtoa" "4.2.1";
currentUnit -l meter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2022";
fileInfo "version" "2022";
fileInfo "cutIdentifier" "202102181415-29bfc1879c";
fileInfo "osv" "Windows 10 Home v2009 (Build: 19043)";
fileInfo "UUID" "C97449AA-4402-1BC4-CD54-10822F460BA5";
createNode transform -s -n "persp";
	rename -uid "D45E5855-483C-D017-0197-C884577BB068";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -0.56143186780572718 0.30616615176459194 6.6561737457505608 ;
	setAttr ".r" -type "double3" -1.5383527314495886 2515.7999999980666 0 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "771AF226-4E87-901B-6D5F-62A647E21E6B";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 7.1039918297406448;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "95CF4149-44AE-9AD1-A555-77A6AF0048F0";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -0.39913067861534274 10.009058308195355 -0.010009085729953996 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "1F3CEFB3-4C26-C6E9-904A-64B51D6CBF27";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 9.8947826810591248;
	setAttr ".ow" 11.550872009096352;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".tp" -type "double3" -39.913067861534273 11.427562713623047 -1.0009085729953995 ;
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "1EC427E2-4258-F154-69A5-EFBF2D5997FD";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 10.001000000000001 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "858C2B4D-4C38-A8BB-6E6F-95AA785D1C6D";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.000999914339197;
	setAttr ".ow" 8.0217150353096756;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".tp" -type "double3" 0 0 8.5660805240195259e-06 ;
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "side";
	rename -uid "FB931B3A-4A5F-2298-C496-50BCD1626D7B";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.001000000000001 0 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "1602D0E3-4349-D3C2-A075-A6939BA4AE96";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 0.3;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -n "SideNet_BSP";
	rename -uid "C0BCDD6F-4249-A0C2-88CA-648B7087985A";
	setAttr ".t" -type "double3" 0.39820305869132666 0 0.018127611388791803 ;
	setAttr ".r" -type "double3" -90 59.999999999999993 0 ;
	setAttr ".rp" -type "double3" -0.18340255737304687 0.35391777038574218 0.11427562713623048 ;
	setAttr ".rpt" -type "double3" -0.2148005013182798 -0.23964214324951172 -0.13240323852502228 ;
	setAttr ".sp" -type "double3" -0.18340255737304687 0.35391777038574218 0.11427562713623048 ;
createNode mesh -n "SideNet_BSPShape" -p "SideNet_BSP";
	rename -uid "4747EED9-461E-F840-AB49-24B1BD3D6BF2";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:11]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 1.400390625 1.990264892578125 ;
	setAttr -s 2 ".uvst";
	setAttr ".uvst[0].uvsn" -type "string" "LightMapUV";
	setAttr -s 24 ".uvst[0].uvsp[0:23]" -type "float2" 1.98535156 1.26782227
		 -0.014587402 1.26782227 -0.014587402 1.16796875 1.98535156 1.16796875 3.69921875
		 1.14831543 -0.8984375 1.26782227 -0.8984375 1.16796875 3.69921875 1.048431396 2.00390625
		 1.14831543 0.0042037964 1.14831543 0.0042037964 1.048431396 2.00390625 1.048431396
		 2.8984375 1.26782227 -1.70019531 1.14831543 -1.70019531 1.048431396 2.8984375 1.16796875
		 3.69921875 3.00390625 -0.89892578 3.013671875 -0.89892578 1.014465332 3.69921875
		 1.0040817261 3.69921875 2.99511719 -0.8984375 2.98535156 -0.8984375 0.9854126 3.69921875
		 0.9957962;
	setAttr ".uvst[1].uvsn" -type "string" "UVmap_1";
	setAttr -s 24 ".uvst[1].uvsp[0:23]" -type "float2" 0.95947266 0.55664063
		 0.95947266 0.15185547 0.97949219 0.15185547 0.97949219 0.55664063 0.93896484 0.097167969
		 0.00806427 0.12109375 0.00806427 0.10107422 0.93896484 0.076660156 0.95947266 0.99193573
		 0.95947266 0.5871582 0.97949219 0.5871582 0.97949219 0.99193573 0.93896484 0.056640625
		 0.00806427 0.032714844 0.00806427 0.012207031 0.93896484 0.036621094 0.93945313 0.98983765
		 0.00806427 0.99193573 0.00806427 0.5871582 0.93945313 0.58496094 0.93945313 0.55664063
		 0.00806427 0.55444336 0.00806427 0.14941406 0.93945313 0.15185547;
	setAttr ".cuvs" -type "string" "LightMapUV";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 6 ".pt";
	setAttr ".pt[0]" -type "float3" 0.014989319 0.008654099 0 ;
	setAttr ".pt[3]" -type "float3" 0.014989319 0.008654099 0 ;
	setAttr ".pt[4]" -type "float3" 0.011278665 0.006511841 0 ;
	setAttr ".pt[5]" -type "float3" 0.011278665 0.006511841 0 ;
	setAttr ".pt[6]" -type "float3" -3.2186509e-08 -6.8545343e-09 0 ;
	setAttr ".pt[7]" -type "float3" -3.2186509e-08 -6.8545343e-09 0 ;
	setAttr -s 8 ".vt[0:7]"  1.82126009 -1.14300668 0.015405445 0.11666553 -2.13018703 0.36157358
		 0.10091916 -2.13753033 0.26309451 1.80551362 -1.15034997 -0.083073609 -0.48271379 2.83885407 -0.034543246
		 -0.49846017 2.83151102 -0.13302231 -2.18730831 1.85167372 0.31162488 -2.20305443 1.84433043 0.21314582;
	setAttr -s 18 ".ed[0:17]"  0 1 0 1 2 0 2 0 0 3 0 0 2 3 0 4 0 0 3 4 0
		 5 4 0 3 5 0 6 4 0 5 6 0 7 6 0 5 7 0 1 6 0 7 1 0 7 2 0 0 6 0 2 5 0;
	setAttr -s 36 ".n[0:35]" -type "float3"  0.4969264 -0.86764926 -0.015775442
		 0.4969264 -0.86764926 -0.015775442 0.4969264 -0.86764926 -0.015775442 0.4969264 -0.86764926
		 -0.015775442 0.4969264 -0.86764926 -0.015775442 0.4969264 -0.86764926 -0.015775442
		 0.85402852 0.49027562 -0.17396878 0.85402852 0.49027562 -0.17396878 0.85402852 0.49027562
		 -0.17396878 0.85402852 0.49027562 -0.17396878 0.85402852 0.49027562 -0.17396878 0.85402852
		 0.49027562 -0.17396878 -0.4969264 0.86764926 0.015775442 -0.4969264 0.86764926 0.015775442
		 -0.4969264 0.86764926 0.015775442 -0.4969264 0.86764926 0.015775442 -0.4969264 0.86764926
		 0.015775442 -0.4969264 0.86764926 0.015775442 -0.85402852 -0.49027562 0.17396878
		 -0.85402852 -0.49027562 0.17396878 -0.85402852 -0.49027562 0.17396878 -0.85402852
		 -0.49027562 0.17396878 -0.85402852 -0.49027562 0.17396878 -0.85402852 -0.49027562
		 0.17396878 0.14189072 0.094593816 0.98535222 0.14189072 0.094593816 0.98535222 0.14189072
		 0.094593816 0.98535222 0.14189072 0.094593816 0.98535222 0.14189072 0.094593816 0.98535222
		 0.14189072 0.094593816 0.98535222 -0.14189072 -0.094593816 -0.98535222 -0.14189072
		 -0.094593816 -0.98535222 -0.14189072 -0.094593816 -0.98535222 -0.14189072 -0.094593816
		 -0.98535222 -0.14189072 -0.094593816 -0.98535222 -0.14189072 -0.094593816 -0.98535222;
	setAttr -s 12 -ch 36 ".fc[0:11]" -type "polyFaces" 
		f 3 0 1 2
		mu 0 3 0 1 2
		mu 1 3 0 1 2
		f 3 3 -3 4
		mu 0 3 3 0 2
		mu 1 3 3 0 2
		f 3 5 -4 6
		mu 0 3 4 5 6
		mu 1 3 4 5 6
		f 3 7 -7 8
		mu 0 3 7 4 6
		mu 1 3 7 4 6
		f 3 9 -8 10
		mu 0 3 8 9 10
		mu 1 3 8 9 10
		f 3 11 -11 12
		mu 0 3 11 8 10
		mu 1 3 11 8 10
		f 3 13 -12 14
		mu 0 3 12 13 14
		mu 1 3 12 13 14
		f 3 -2 -15 15
		mu 0 3 15 12 14
		mu 1 3 15 12 14
		f 3 -14 -1 16
		mu 0 3 16 17 18
		mu 1 3 16 17 18
		f 3 -10 -17 -6
		mu 0 3 19 16 18
		mu 1 3 19 16 18
		f 3 -9 -5 17
		mu 0 3 20 21 22
		mu 1 3 20 21 22
		f 3 -13 -18 -16
		mu 0 3 23 20 22
		mu 1 3 23 20 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr -s 2 ".pd";
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".pd[1]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SideNetting";
	rename -uid "B17748AC-430A-1FBE-8F23-9993D3A5BECD";
createNode transform -n "Netting_Geo" -p "SideNetting";
	rename -uid "4D4C82A9-45A3-54D9-4F60-B4986A61A710";
	setAttr ".rp" -type "double3" 0 0 -1.5643013033622901 ;
	setAttr ".sp" -type "double3" 0 0 -1.5643013033622901 ;
createNode mesh -n "Netting_GeoShape" -p "Netting_Geo";
	rename -uid "A13C5EE9-43C7-6A36-88F0-5186A7A58EBF";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 5 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "e[3]";
	setAttr ".gtag[1].gtagnm" -type "string" "front";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "e[0]";
	setAttr ".gtag[2].gtagnm" -type "string" "left";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "e[1]";
	setAttr ".gtag[3].gtagnm" -type "string" "right";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "e[2]";
	setAttr ".gtag[4].gtagnm" -type "string" "rim";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "e[0:3]";
	setAttr ".pv" -type "double2" 0.5 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 25 ".uvst[0].uvsp[0:24]" -type "float2" 0 0 1 0 0 1 1 1 0.5
		 0 0.5 1 0.25 0 0.25 1 0.75 0 0.75 1 0 0.5 0.25 0.5 0.5 0.5 0.75 0.5 1 0.5 0 0.75
		 0.25 0.75 0.5 0.75 0.75 0.75 1 0.75 0 0.25 0.25 0.25 0.5 0.25 0.75 0.25 1 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 25 ".pt[0:24]" -type "float3"  0 0 -0.0065959231 0 0 -0.0065959231 
		0 0 -3.1220064 0 0 -3.1220064 0 0 -0.0065959231 0 0 -3.1220064 0 0 -0.0065959231 
		0 0 -3.1220064 0 0 -0.0065959231 0 0 -3.1220064 0 0 -1.5643011 0 0 -1.5643011 0 0 
		-1.5643011 0 0 -1.5643011 0 0 -1.5643011 0 0 -2.343154 0 0 -2.343154 0 0 -2.343154 
		0 0 -2.343154 0 0 -2.343154 0 0 -0.78544855 0 0 -0.78544855 0 0 -0.78544855 0 0 -0.78544855 
		0 0 -0.78544855;
	setAttr -s 25 ".vt[0:24]"  -2 0 1.000000119209 2 0 1.000000119209 -2 0 -1
		 2 0 -1 0 -0.15166821 1.000000119209 0 -0.15166821 -1 -1.000000119209 -0.10461215 1.000000119209
		 -1.000000119209 -0.10461215 -1 1.000000119209 -0.10461215 1.000000119209 1.000000119209 -0.10461215 -1
		 -2 0 8.5660801e-08 -1.000000119209 -0.10461215 8.5660801e-08 0 -0.15166821 8.5660801e-08
		 1.000000119209 -0.10461215 8.5660801e-08 2 0 8.5660801e-08 -2 0 -0.49999997 -1.000000119209 -0.10461215 -0.49999997
		 0 -0.15166821 -0.49999997 1.000000119209 -0.10461215 -0.49999997 2 0 -0.49999997
		 -2 0 0.50000012 -1.000000119209 -0.10461215 0.50000012 0 -0.15166821 0.50000012 1.000000119209 -0.10461215 0.50000012
		 2 0 0.50000012;
	setAttr -s 40 ".ed[0:39]"  0 6 0 0 20 0 1 24 0 2 7 0 4 8 0 5 9 0 4 22 1
		 6 4 0 7 5 0 6 21 1 8 1 0 9 3 0 8 23 1 10 15 0 11 16 1 12 17 1 13 18 1 14 19 0 10 11 1
		 11 12 1 12 13 1 13 14 1 15 2 0 16 7 1 17 5 1 18 9 1 19 3 0 15 16 1 16 17 1 17 18 1
		 18 19 1 20 10 0 21 11 1 22 12 1 23 13 1 24 14 0 20 21 1 21 22 1 22 23 1 23 24 1;
	setAttr -s 16 -ch 64 ".fc[0:15]" -type "polyFaces" 
		f 4 27 23 -4 -23
		mu 0 4 15 16 7 2
		f 4 -25 29 25 -6
		mu 0 4 5 17 18 9
		f 4 -24 28 24 -9
		mu 0 4 7 16 17 5
		f 4 -26 30 26 -12
		mu 0 4 9 18 19 3
		f 4 36 32 -19 -32
		mu 0 4 20 21 11 10
		f 4 -20 -33 37 33
		mu 0 4 12 11 21 22
		f 4 -21 -34 38 34
		mu 0 4 13 12 22 23
		f 4 -22 -35 39 35
		mu 0 4 14 13 23 24
		f 4 18 14 -28 -14
		mu 0 4 10 11 16 15
		f 4 -29 -15 19 15
		mu 0 4 17 16 11 12
		f 4 -30 -16 20 16
		mu 0 4 18 17 12 13
		f 4 -31 -17 21 17
		mu 0 4 19 18 13 14
		f 4 0 9 -37 -2
		mu 0 4 0 6 21 20
		f 4 -38 -10 7 6
		mu 0 4 22 21 6 4
		f 4 -39 -7 4 12
		mu 0 4 23 22 4 8
		f 4 -40 -13 10 2
		mu 0 4 24 23 8 1;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SupportArm_Geo" -p "SideNetting";
	rename -uid "C41B79D6-46F2-8332-D3E9-EEA8D4BE3422";
	setAttr ".rp" -type "double3" -2 0 -1.8320998392269536 ;
	setAttr ".sp" -type "double3" -2 0 -1.8320998392269536 ;
createNode mesh -n "SupportArm_GeoShape" -p "SupportArm_Geo";
	rename -uid "5A6EF381-4595-A057-E6E1-10A2A8B0621F";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[6:11]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "e[0:5]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 2 "vtx[0:5]" "vtx[12]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "vtx[0:5]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "vtx[0:11]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 2 "vtx[6:11]" "vtx[13]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 1 "vtx[6:11]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 1 "f[0:5]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 1 "f[12:17]";
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 1 "e[6:11]";
	setAttr ".pv" -type "double2" 0.5 0.64578324556350708 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 42 ".uvst[0].uvsp[0:41]" -type "float2" 0.375 0.3125 0.41666666
		 0.3125 0.45833331 0.3125 0.49999997 0.3125 0.54166663 0.3125 0.58333331 0.3125 0.625
		 0.3125 0.375 0.68843985 0.41666666 0.68843985 0.45833331 0.68843985 0.49999997 0.68843985
		 0.54166663 0.68843985 0.58333331 0.68843985 0.625 0.68843985 0.57812506 0.70843351
		 0.42187503 0.70843351 0.34375 0.84375 0.421875 0.97906649 0.578125 0.97906649 0.65625
		 0.84375 0.5 0.83749998 0.41666666 0.50046992 0.45833331 0.50046992 0.49999997 0.50046992
		 0.54166663 0.50046992 0.58333331 0.50046992 0.625 0.50046992 0.375 0.50046992 0.41666666
		 0.59445488 0.625 0.59445488 0.375 0.59445488 0.58333331 0.59445488 0.54166663 0.59445488
		 0.49999997 0.59445488 0.45833331 0.59445488 0.41666666 0.40648496 0.45833331 0.40648496
		 0.49999997 0.40648496 0.54166663 0.40648496 0.58333331 0.40648496 0.625 0.40648496
		 0.375 0.40648496;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 31 ".pt[0:30]" -type "float3"  0 0 -0.26779854 0 0 -0.26779854 
		0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 
		0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 
		-0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 
		0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 
		0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 -0.26779854 0 0 
		-0.26779854 0 0 -0.26779854 0 0 -0.26779854;
	setAttr -s 31 ".vt[0:30]"  -1.95934784 0.070411071 -4.12200642 -2.040651798 0.070411228 -4.12200642
		 -2.081303596 0 -4.12200642 -2.040651798 -0.070411071 -4.12200642 -1.9593482 -0.070411071 -4.12200642
		 -1.91869628 0 -4.12200642 -1.95934784 0.070411071 1.3307904 -2.040651798 0.070411228 1.33079028
		 -2.081303596 0 1.33079028 -2.040651798 -0.070410922 1.33079028 -1.9593482 -0.070410922 1.33079028
		 -1.91869628 0 1.3307904 -2 0 1.3307904 -2.040651798 0.070411108 -1.39560807 -2.081303596 1.4305114e-08 -1.39560807
		 -2.040651798 -0.070411101 -1.39560807 -1.9593482 -0.070411101 -1.39560807 -1.91869628 0 -1.39560807
		 -1.95934784 0.070411094 -1.39560807 -2.040651798 0.070411168 -0.032408983 -1.95934784 0.070411079 -0.032408867
		 -1.91869628 0 -0.032408867 -1.9593482 -0.070411012 -0.032408983 -2.040651798 -0.070411012 -0.032408983
		 -2.081303596 7.1525572e-09 -0.032408983 -2.040651798 0.070411168 -2.75880742 -2.081303596 7.1525572e-09 -2.75880742
		 -2.040651798 -0.070411086 -2.75880742 -1.9593482 -0.070411086 -2.75880718 -1.91869628 0 -2.75880742
		 -1.95934784 0.070411079 -2.75880742;
	setAttr -s 60 ".ed[0:59]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 1 25 1 2 26 1 3 27 1 4 28 1 5 29 1 6 12 1 7 12 1
		 8 12 1 9 12 1 10 12 1 11 12 1 0 30 1 13 19 1 14 24 1 15 23 1 16 22 1 17 21 1 18 20 1
		 13 14 1 14 15 1 15 16 1 16 17 1 17 18 1 18 13 1 19 7 1 20 6 1 21 11 1 22 10 1 23 9 1
		 24 8 1 19 20 1 20 21 1 21 22 1 22 23 1 23 24 1 24 19 1 25 13 1 26 14 1 27 15 1 28 16 1
		 29 17 1 30 18 1 25 26 1 26 27 1 27 28 1 28 29 1 29 30 1 30 25 1;
	setAttr -s 30 -ch 114 ".fc[0:29]" -type "polyFaces" 
		f 4 42 -30 35 24
		mu 0 4 28 30 27 21
		f 4 47 -25 30 25
		mu 0 4 34 28 21 22
		f 4 46 -26 31 26
		mu 0 4 33 34 22 23
		f 4 45 -27 32 27
		mu 0 4 32 33 23 24
		f 4 44 -28 33 28
		mu 0 4 31 32 24 25
		f 4 34 29 43 -29
		mu 0 4 25 26 29 31
		f 3 6 18 -18
		mu 0 3 18 17 20
		f 3 7 19 -19
		mu 0 3 17 16 20
		f 3 8 20 -20
		mu 0 3 16 15 20
		f 3 9 21 -21
		mu 0 3 15 14 20
		f 3 10 22 -22
		mu 0 3 14 19 20
		f 3 11 17 -23
		mu 0 3 19 18 20
		f 4 -31 -49 54 49
		mu 0 4 22 21 35 36
		f 4 -32 -50 55 50
		mu 0 4 23 22 36 37
		f 4 -33 -51 56 51
		mu 0 4 24 23 37 38
		f 4 -34 -52 57 52
		mu 0 4 25 24 38 39
		f 4 58 53 -35 -53
		mu 0 4 39 40 26 25
		f 4 -36 -54 59 48
		mu 0 4 21 27 41 35
		f 4 -7 -38 -43 36
		mu 0 4 8 7 30 28
		f 4 -44 37 -12 -39
		mu 0 4 31 29 13 12
		f 4 -11 -40 -45 38
		mu 0 4 12 11 32 31
		f 4 -10 -41 -46 39
		mu 0 4 11 10 33 32
		f 4 -9 -42 -47 40
		mu 0 4 10 9 34 33
		f 4 -8 -37 -48 41
		mu 0 4 9 8 28 34
		f 4 -55 -13 1 13
		mu 0 4 36 35 1 2
		f 4 -56 -14 2 14
		mu 0 4 37 36 2 3
		f 4 -57 -15 3 15
		mu 0 4 38 37 3 4
		f 4 -58 -16 4 16
		mu 0 4 39 38 4 5
		f 4 23 -59 -17 5
		mu 0 4 6 40 39 5
		f 4 -60 -24 0 12
		mu 0 4 35 41 0 1;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SupportArm_Geo1" -p "SideNetting";
	rename -uid "C62CED7E-420B-5512-E5B9-BD9DF09497A6";
	setAttr ".rp" -type "double3" 2 0 -1.8320998392269536 ;
	setAttr ".sp" -type "double3" 2 0 -1.8320998392269536 ;
createNode mesh -n "SupportArm_Geo1Shape" -p "SupportArm_Geo1";
	rename -uid "97DE5417-489F-E2B1-C4DC-C484112BC5FC";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[6:11]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "e[0:5]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 2 "vtx[0:5]" "vtx[12]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "vtx[0:5]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "vtx[0:11]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 2 "vtx[6:11]" "vtx[13]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 1 "vtx[6:11]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 1 "f[0:5]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 1 "f[12:17]";
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 1 "e[6:11]";
	setAttr ".pv" -type "double2" 0.5 0.64578324556350708 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 42 ".uvst[0].uvsp[0:41]" -type "float2" 0.375 0.3125 0.41666666
		 0.3125 0.45833331 0.3125 0.49999997 0.3125 0.54166663 0.3125 0.58333331 0.3125 0.625
		 0.3125 0.375 0.68843985 0.41666666 0.68843985 0.45833331 0.68843985 0.49999997 0.68843985
		 0.54166663 0.68843985 0.58333331 0.68843985 0.625 0.68843985 0.57812506 0.70843351
		 0.42187503 0.70843351 0.34375 0.84375 0.421875 0.97906649 0.578125 0.97906649 0.65625
		 0.84375 0.5 0.83749998 0.41666666 0.50046992 0.45833331 0.50046992 0.49999997 0.50046992
		 0.54166663 0.50046992 0.58333331 0.50046992 0.625 0.50046992 0.375 0.50046992 0.41666666
		 0.59445488 0.625 0.59445488 0.375 0.59445488 0.58333331 0.59445488 0.54166663 0.59445488
		 0.49999997 0.59445488 0.45833331 0.59445488 0.41666666 0.40648496 0.45833331 0.40648496
		 0.49999997 0.40648496 0.54166663 0.40648496 0.58333331 0.40648496 0.625 0.40648496
		 0.375 0.40648496;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 31 ".pt[0:30]" -type "float3"  4 0 -0.26779854 4 0 -0.26779854 
		4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 
		0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 
		-0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 
		4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 
		0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 -0.26779854 4 0 
		-0.26779854 4 0 -0.26779854 4 0 -0.26779854;
	setAttr -s 31 ".vt[0:30]"  -1.95934784 0.070411071 -4.12200642 -2.040651798 0.070411228 -4.12200642
		 -2.081303596 0 -4.12200642 -2.040651798 -0.070411071 -4.12200642 -1.9593482 -0.070411071 -4.12200642
		 -1.91869628 0 -4.12200642 -1.95934784 0.070411071 1.3307904 -2.040651798 0.070411228 1.33079028
		 -2.081303596 0 1.33079028 -2.040651798 -0.070410922 1.33079028 -1.9593482 -0.070410922 1.33079028
		 -1.91869628 0 1.3307904 -2 0 1.3307904 -2.040651798 0.070411108 -1.39560807 -2.081303596 1.4305114e-08 -1.39560807
		 -2.040651798 -0.070411101 -1.39560807 -1.9593482 -0.070411101 -1.39560807 -1.91869628 0 -1.39560807
		 -1.95934784 0.070411094 -1.39560807 -2.040651798 0.070411168 -0.032408983 -1.95934784 0.070411079 -0.032408867
		 -1.91869628 0 -0.032408867 -1.9593482 -0.070411012 -0.032408983 -2.040651798 -0.070411012 -0.032408983
		 -2.081303596 7.1525572e-09 -0.032408983 -2.040651798 0.070411168 -2.75880742 -2.081303596 7.1525572e-09 -2.75880742
		 -2.040651798 -0.070411086 -2.75880742 -1.9593482 -0.070411086 -2.75880718 -1.91869628 0 -2.75880742
		 -1.95934784 0.070411079 -2.75880742;
	setAttr -s 60 ".ed[0:59]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 1 25 1 2 26 1 3 27 1 4 28 1 5 29 1 6 12 1 7 12 1
		 8 12 1 9 12 1 10 12 1 11 12 1 0 30 1 13 19 1 14 24 1 15 23 1 16 22 1 17 21 1 18 20 1
		 13 14 1 14 15 1 15 16 1 16 17 1 17 18 1 18 13 1 19 7 1 20 6 1 21 11 1 22 10 1 23 9 1
		 24 8 1 19 20 1 20 21 1 21 22 1 22 23 1 23 24 1 24 19 1 25 13 1 26 14 1 27 15 1 28 16 1
		 29 17 1 30 18 1 25 26 1 26 27 1 27 28 1 28 29 1 29 30 1 30 25 1;
	setAttr -s 30 -ch 114 ".fc[0:29]" -type "polyFaces" 
		f 4 42 -30 35 24
		mu 0 4 28 30 27 21
		f 4 47 -25 30 25
		mu 0 4 34 28 21 22
		f 4 46 -26 31 26
		mu 0 4 33 34 22 23
		f 4 45 -27 32 27
		mu 0 4 32 33 23 24
		f 4 44 -28 33 28
		mu 0 4 31 32 24 25
		f 4 34 29 43 -29
		mu 0 4 25 26 29 31
		f 3 6 18 -18
		mu 0 3 18 17 20
		f 3 7 19 -19
		mu 0 3 17 16 20
		f 3 8 20 -20
		mu 0 3 16 15 20
		f 3 9 21 -21
		mu 0 3 15 14 20
		f 3 10 22 -22
		mu 0 3 14 19 20
		f 3 11 17 -23
		mu 0 3 19 18 20
		f 4 -31 -49 54 49
		mu 0 4 22 21 35 36
		f 4 -32 -50 55 50
		mu 0 4 23 22 36 37
		f 4 -33 -51 56 51
		mu 0 4 24 23 37 38
		f 4 -34 -52 57 52
		mu 0 4 25 24 38 39
		f 4 58 53 -35 -53
		mu 0 4 39 40 26 25
		f 4 -36 -54 59 48
		mu 0 4 21 27 41 35
		f 4 -7 -38 -43 36
		mu 0 4 8 7 30 28
		f 4 -44 37 -12 -39
		mu 0 4 31 29 13 12
		f 4 -11 -40 -45 38
		mu 0 4 12 11 32 31
		f 4 -10 -41 -46 39
		mu 0 4 11 10 33 32
		f 4 -9 -42 -47 40
		mu 0 4 10 9 34 33
		f 4 -8 -37 -48 41
		mu 0 4 9 8 28 34
		f 4 -55 -13 1 13
		mu 0 4 36 35 1 2
		f 4 -56 -14 2 14
		mu 0 4 37 36 2 3
		f 4 -57 -15 3 15
		mu 0 4 38 37 3 4
		f 4 -58 -16 4 16
		mu 0 4 39 38 4 5
		f 4 23 -59 -17 5
		mu 0 4 6 40 39 5
		f 4 -60 -24 0 12
		mu 0 4 35 41 0 1;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape1" -p "SupportArm_Geo1";
	rename -uid "E9D8ED05-4EF6-F0E9-E53C-6B91BDB9B508";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[6:11]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "e[0:5]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 2 "vtx[0:5]" "vtx[12]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "vtx[0:5]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "vtx[0:11]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 2 "vtx[6:11]" "vtx[13]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 1 "vtx[6:11]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 1 "f[0:5]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 1 "f[12:17]";
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 1 "e[6:11]";
	setAttr ".pv" -type "double2" 0.5 0.64578324556350708 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 42 ".uvst[0].uvsp[0:41]" -type "float2" 0.375 0.3125 0.41666666
		 0.3125 0.45833331 0.3125 0.49999997 0.3125 0.54166663 0.3125 0.58333331 0.3125 0.625
		 0.3125 0.375 0.68843985 0.41666666 0.68843985 0.45833331 0.68843985 0.49999997 0.68843985
		 0.54166663 0.68843985 0.58333331 0.68843985 0.625 0.68843985 0.57812506 0.70843351
		 0.42187503 0.70843351 0.34375 0.84375 0.421875 0.97906649 0.578125 0.97906649 0.65625
		 0.84375 0.5 0.83749998 0.41666666 0.50046992 0.45833331 0.50046992 0.49999997 0.50046992
		 0.54166663 0.50046992 0.58333331 0.50046992 0.625 0.50046992 0.375 0.50046992 0.41666666
		 0.59445488 0.625 0.59445488 0.375 0.59445488 0.58333331 0.59445488 0.54166663 0.59445488
		 0.49999997 0.59445488 0.45833331 0.59445488 0.41666666 0.40648496 0.45833331 0.40648496
		 0.49999997 0.40648496 0.54166663 0.40648496 0.58333331 0.40648496 0.625 0.40648496
		 0.375 0.40648496;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 31 ".pt[0:30]" -type "float3"  0 0 -3.1220064 0 0 -3.1220064 
		0 0 -3.1220064 0 0 -3.1220064 0 0 -3.1220062 0 0 -3.1220064 0 0 0.19888052 0 0 0.1988804 
		0 0 0.1988804 0 0 0.1988804 0 0 0.1988804 0 0 0.19888052 0 0 0.19888052 0 0 -1.461563 
		0 0 -1.461563 0 0 -1.461563 0 0 -1.461563 0 0 -1.461563 0 0 -1.461563 0 0 -0.63134134 
		0 0 -0.63134122 0 0 -0.63134122 0 0 -0.63134134 0 0 -0.63134134 0 0 -0.63134134 0 
		0 -2.2917848 0 0 -2.2917848 0 0 -2.2917848 0 0 -2.2917848 0 0 -2.2917848 0 0 -2.2917848;
	setAttr -s 31 ".vt[0:30]"  -1.95934784 0.070411071 -1 -2.040651798 0.070411228 -1
		 -2.081303596 0 -1 -2.040651798 -0.070411071 -1 -1.9593482 -0.070411071 -0.99999994
		 -1.91869628 0 -1 -1.95934784 0.070411071 1.13190985 -2.040651798 0.070411228 1.13190985
		 -2.081303596 0 1.13190985 -2.040651798 -0.070410922 1.13190985 -1.9593482 -0.070410922 1.13190985
		 -1.91869628 0 1.13190985 -2 0 1.13190985 -2.040651798 0.070411108 0.065954894 -2.081303596 1.4305114e-08 0.065954894
		 -2.040651798 -0.070411101 0.065954894 -1.9593482 -0.070411101 0.065954894 -1.91869628 0 0.065954894
		 -1.95934784 0.070411094 0.065954894 -2.040651798 0.070411168 0.59893233 -1.95934784 0.070411079 0.59893239
		 -1.91869628 0 0.59893239 -1.9593482 -0.070411012 0.59893233 -2.040651798 -0.070411012 0.59893233
		 -2.081303596 7.1525572e-09 0.59893233 -2.040651798 0.070411168 -0.46702254 -2.081303596 7.1525572e-09 -0.46702254
		 -2.040651798 -0.070411086 -0.46702254 -1.9593482 -0.070411086 -0.46702251 -1.91869628 0 -0.46702254
		 -1.95934784 0.070411079 -0.46702254;
	setAttr -s 60 ".ed[0:59]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 1 25 0 2 26 0 3 27 0 4 28 0 5 29 0 6 12 1 7 12 1
		 8 12 1 9 12 1 10 12 1 11 12 1 0 30 0 13 19 0 14 24 0 15 23 0 16 22 0 17 21 0 18 20 0
		 13 14 1 14 15 1 15 16 1 16 17 1 17 18 1 18 13 1 19 7 0 20 6 0 21 11 0 22 10 0 23 9 0
		 24 8 0 19 20 1 20 21 1 21 22 1 22 23 1 23 24 1 24 19 1 25 13 0 26 14 0 27 15 0 28 16 0
		 29 17 0 30 18 0 25 26 1 26 27 1 27 28 1 28 29 1 29 30 1 30 25 1;
	setAttr -s 30 -ch 114 ".fc[0:29]" -type "polyFaces" 
		f 4 42 -30 35 24
		mu 0 4 28 30 27 21
		f 4 47 -25 30 25
		mu 0 4 34 28 21 22
		f 4 46 -26 31 26
		mu 0 4 33 34 22 23
		f 4 45 -27 32 27
		mu 0 4 32 33 23 24
		f 4 44 -28 33 28
		mu 0 4 31 32 24 25
		f 4 34 29 43 -29
		mu 0 4 25 26 29 31
		f 3 6 18 -18
		mu 0 3 18 17 20
		f 3 7 19 -19
		mu 0 3 17 16 20
		f 3 8 20 -20
		mu 0 3 16 15 20
		f 3 9 21 -21
		mu 0 3 15 14 20
		f 3 10 22 -22
		mu 0 3 14 19 20
		f 3 11 17 -23
		mu 0 3 19 18 20
		f 4 -31 -49 54 49
		mu 0 4 22 21 35 36
		f 4 -32 -50 55 50
		mu 0 4 23 22 36 37
		f 4 -33 -51 56 51
		mu 0 4 24 23 37 38
		f 4 -34 -52 57 52
		mu 0 4 25 24 38 39
		f 4 58 53 -35 -53
		mu 0 4 39 40 26 25
		f 4 -36 -54 59 48
		mu 0 4 21 27 41 35
		f 4 -7 -38 -43 36
		mu 0 4 8 7 30 28
		f 4 -44 37 -12 -39
		mu 0 4 31 29 13 12
		f 4 -11 -40 -45 38
		mu 0 4 12 11 32 31
		f 4 -10 -41 -46 39
		mu 0 4 11 10 33 32
		f 4 -9 -42 -47 40
		mu 0 4 10 9 34 33
		f 4 -8 -37 -48 41
		mu 0 4 9 8 28 34
		f 4 -55 -13 1 13
		mu 0 4 36 35 1 2
		f 4 -56 -14 2 14
		mu 0 4 37 36 2 3
		f 4 -57 -15 3 15
		mu 0 4 38 37 3 4
		f 4 -58 -16 4 16
		mu 0 4 39 38 4 5
		f 4 23 -59 -17 5
		mu 0 4 6 40 39 5
		f 4 -60 -24 0 12
		mu 0 4 35 41 0 1;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Netting_Geo1";
	rename -uid "8B0FF32E-4610-6F8D-89EA-1D98FDA5EAC1";
	setAttr ".rp" -type "double3" 0 -0.075834102630615241 0 ;
	setAttr ".sp" -type "double3" 0 -0.075834102630615241 0 ;
createNode mesh -n "Netting_Geo1Shape" -p "Netting_Geo1";
	rename -uid "7D7F6CE1-4856-CE57-131A-D094E6000095";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 5 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "e[3]";
	setAttr ".gtag[1].gtagnm" -type "string" "front";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "e[0]";
	setAttr ".gtag[2].gtagnm" -type "string" "left";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "e[1]";
	setAttr ".gtag[3].gtagnm" -type "string" "right";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "e[2]";
	setAttr ".gtag[4].gtagnm" -type "string" "rim";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "e[0:3]";
	setAttr ".pv" -type "double2" 0.5 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 25 ".uvst[0].uvsp[0:24]" -type "float2" 0 0 1 0 0 1 1 1 0.5
		 0 0.5 1 0.25 0 0.25 1 0.75 0 0.75 1 0 0.5 0.25 0.5 0.5 0.5 0.75 0.5 1 0.5 0 0.75
		 0.25 0.75 0.5 0.75 0.75 0.75 1 0.75 0 0.25 0.25 0.25 0.5 0.25 0.75 0.25 1 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 25 ".pt[0:24]" -type "float3"  0.97697169 -0.030765114 0.14898346 
		-0.97697169 -0.030765114 0.14898346 0.07747259 -0.030765114 0.14898346 -0.07747259 
		-0.030765114 0.14898346 0 0.030765114 0.14898346 0 0.095926911 0.14898346 0.48848587 
		0.011674957 0.14898346 0.038736332 0.056619883 0.14898346 -0.48848587 0.011674957 
		0.14898346 -0.038736332 0.056619883 0.14898346 0.52722216 -0.030765114 0.14898346 
		0.26361111 0.011674957 0.14898346 0 0.030765114 0.14898346 -0.26361111 0.011674957 
		0.14898346 -0.52722216 -0.030765114 0.14898346 0.30234736 -0.030765114 0.14898346 
		0.15117371 0.011674957 0.14898346 0 0.030765114 0.14898346 -0.15117371 0.011674957 
		0.14898346 -0.30234736 -0.030765114 0.14898346 0.75209695 -0.030765114 0.14898346 
		0.37604851 0.011674957 0.14898346 0 0.030765114 0.14898346 -0.37604851 0.011674957 
		0.14898346 -0.75209695 -0.030765114 0.14898346;
	setAttr -s 25 ".vt[0:24]"  -2 0 0.99340421 2 0 0.99340421 -0.15859741 0 -1.29137111
		 0.15859741 0 -1.29137111 0 -0.15166821 0.99340421 0 -0.15166821 -1.29137111 -1.000000119209 -0.10461215 0.99340421
		 -0.079298779 -0.10461215 -1.29137111 1.000000119209 -0.10461215 0.99340421 0.079298779 -0.10461215 -1.29137111
		 -1.079298735 0 -0.14898346 -0.53964943 -0.10461215 -0.14898346 0 -0.15166821 -0.14898346
		 0.53964943 -0.10461215 -0.14898346 1.079298735 0 -0.14898346 -0.61894804 0 -0.72017729
		 -0.30947411 -0.10461215 -0.72017729 0 -0.15166821 -0.72017729 0.30947411 -0.10461215 -0.72017729
		 0.61894804 0 -0.72017729 -1.53964937 0 0.4222104 -0.76982474 -0.10461215 0.4222104
		 0 -0.15166821 0.4222104 0.76982474 -0.10461215 0.4222104 1.53964937 0 0.4222104;
	setAttr -s 40 ".ed[0:39]"  0 6 0 0 20 0 2 7 0 4 8 0 5 9 0 4 22 1 6 4 0
		 7 5 0 6 21 1 8 1 0 9 3 0 8 23 1 1 24 0 10 15 0 11 16 1 12 17 1 13 18 1 14 19 0 10 11 1
		 11 12 1 12 13 1 13 14 1 15 2 0 16 7 1 17 5 1 18 9 1 19 3 0 15 16 1 16 17 1 17 18 1
		 18 19 1 20 10 0 21 11 1 22 12 1 23 13 1 24 14 0 20 21 1 21 22 1 22 23 1 23 24 1;
	setAttr -s 16 -ch 64 ".fc[0:15]" -type "polyFaces" 
		f 4 -3 -23 27 23
		mu 0 4 7 2 15 16
		f 4 -5 -25 29 25
		mu 0 4 9 5 17 18
		f 4 -8 -24 28 24
		mu 0 4 5 7 16 17
		f 4 30 26 -11 -26
		mu 0 4 18 19 3 9
		f 4 -19 -32 36 32
		mu 0 4 11 10 20 21
		f 4 -20 -33 37 33
		mu 0 4 12 11 21 22
		f 4 -21 -34 38 34
		mu 0 4 13 12 22 23
		f 4 39 35 -22 -35
		mu 0 4 23 24 14 13
		f 4 -28 -14 18 14
		mu 0 4 16 15 10 11
		f 4 -29 -15 19 15
		mu 0 4 17 16 11 12
		f 4 -30 -16 20 16
		mu 0 4 18 17 12 13
		f 4 21 17 -31 -17
		mu 0 4 13 14 19 18
		f 4 -37 -2 0 8
		mu 0 4 21 20 0 6
		f 4 -38 -9 6 5
		mu 0 4 22 21 6 4
		f 4 -39 -6 3 11
		mu 0 4 23 22 4 8
		f 4 12 -40 -12 9
		mu 0 4 1 24 23 8;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "CB503A19-421C-C9B6-4B39-BFBB095FF60A";
	setAttr -s 4 ".lnk";
	setAttr -s 4 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "DC3ADA20-427F-88F3-E36F-18828651398D";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "7FD2EA12-4A9C-B271-95BF-28B81E9FD91A";
createNode displayLayerManager -n "layerManager";
	rename -uid "3286A781-47BC-50C3-9ACD-79B3FA6F3B3F";
	setAttr ".cdl" 1;
	setAttr -s 2 ".dli[1]"  1;
	setAttr -s 2 ".dli";
createNode displayLayer -n "defaultLayer";
	rename -uid "FDEAA6F2-402B-DCFC-9006-0B8F8283E32C";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "44ADFD00-44CD-546E-1B18-16B0D153DEAE";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "D730E05E-4B51-7548-E482-64B3AFE1FF86";
	setAttr ".g" yes;
createNode phong -n "M_LightBlueGrey";
	rename -uid "F123287C-4060-9CFE-38B6-7E933ED978B4";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SideNet_BSPSG";
	rename -uid "DE77E107-4991-F108-5483-A9BFFCDE1B35";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo1";
	rename -uid "FD64F350-4C98-FF35-29E7-F7AF9D270686";
createNode phong -n "M_LightBlueGrey1";
	rename -uid "DEA7950A-48D6-CE1C-63AA-DB8CD85A9846";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SideNet_BSPSG1";
	rename -uid "85EB1C1B-483A-E662-2871-258475C288CA";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo2";
	rename -uid "98574C87-4EFA-1E9B-5CC7-7BA5A11B3BA3";
createNode groupId -n "groupId1";
	rename -uid "08A8ECCA-43C6-34B5-51D8-ED9495FCF41B";
	setAttr ".ihi" 0;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "E00348A3-4629-AF15-ED3D-4B9B541830DF";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $nodeEditorPanelVisible = stringArrayContains(\"nodeEditorPanel1\", `getPanel -vis`);\n\tint    $nodeEditorWorkspaceControlOpen = (`workspaceControl -exists nodeEditorPanel1Window` && `workspaceControl -q -visible nodeEditorPanel1Window`);\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\n\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"top\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n"
		+ "            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n"
		+ "            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 656\n            -height 337\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"side\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n"
		+ "            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n"
		+ "            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 656\n            -height 337\n"
		+ "            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"front\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n"
		+ "            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n"
		+ "            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n"
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 656\n            -height 337\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 1\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1319\n            -height 718\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -showShapes 0\n            -showAssignedMaterials 0\n            -showTimeEditor 1\n            -showReferenceNodes 1\n            -showReferenceMembers 1\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -organizeByClip 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showParentContainers 0\n            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n            -doNotSelectNewObjects 0\n            -dropIsParent 1\n"
		+ "            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -isSet 0\n            -isSetMember 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            -ignoreOutlinerColor 0\n            -renderFilterVisible 0\n            -renderFilterIndex 0\n            -selectionOrder \"chronological\" \n            -expandAttribute 0\n            $editorName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"Outliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"Outliner\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -showShapes 0\n            -showAssignedMaterials 0\n            -showTimeEditor 1\n            -showReferenceNodes 0\n            -showReferenceMembers 0\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -organizeByClip 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showParentContainers 0\n            -showContainerContents 1\n            -ignoreDagHierarchy 0\n"
		+ "            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n"
		+ "            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            -ignoreOutlinerColor 0\n            -renderFilterVisible 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"graphEditor\" (localizedPanelLabel(\"Graph Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Graph Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showAssignedMaterials 0\n                -showTimeEditor 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -organizeByClip 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n"
		+ "                -autoExpand 1\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showParentContainers 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 0\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 1\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 1\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n"
		+ "                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 1\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                -renderFilterVisible 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"GraphEd\");\n            animCurveEditor -e \n                -displayValues 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -showPlayRangeShades \"on\" \n                -lockPlayRangeShades \"off\" \n                -smoothness \"fine\" \n                -resultSamples 1\n                -resultScreenSamples 0\n                -resultUpdate \"delayed\" \n                -showUpstreamCurves 1\n"
		+ "                -keyMinScale 1\n                -stackedCurvesMin -1\n                -stackedCurvesMax 1\n                -stackedCurvesSpace 0.2\n                -preSelectionHighlight 0\n                -constrainDrag 0\n                -valueLinesToggle 1\n                -highlightAffectedCurves 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dopeSheetPanel\" (localizedPanelLabel(\"Dope Sheet\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dope Sheet\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showAssignedMaterials 0\n                -showTimeEditor 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n"
		+ "                -showMuteInfo 0\n                -organizeByLayer 1\n                -organizeByClip 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showParentContainers 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 0\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 1\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n"
		+ "                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                -renderFilterVisible 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"DopeSheetEd\");\n            dopeSheetEditor -e \n                -displayValues 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -outliner \"dopeSheetPanel1OutlineEd\" \n                -showSummary 1\n"
		+ "                -showScene 0\n                -hierarchyBelow 0\n                -showTicks 1\n                -selectionWindow 0 0 0 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"timeEditorPanel\" (localizedPanelLabel(\"Time Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Time Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"clipEditorPanel\" (localizedPanelLabel(\"Trax Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Trax Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = clipEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayValues 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n"
		+ "                -initialized 0\n                -manageSequencer 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"sequenceEditorPanel\" (localizedPanelLabel(\"Camera Sequencer\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Camera Sequencer\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = sequenceEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayValues 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -initialized 0\n                -manageSequencer 1 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperGraphPanel\" (localizedPanelLabel(\"Hypergraph Hierarchy\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypergraph Hierarchy\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\n\t\t\t$editorName = ($panelName+\"HyperGraphEd\");\n            hyperGraph -e \n                -graphLayoutStyle \"hierarchicalLayout\" \n                -orientation \"horiz\" \n                -mergeConnections 0\n                -zoom 1\n                -animateTransition 0\n                -showRelationships 1\n                -showShapes 0\n                -showDeformers 0\n                -showExpressions 0\n                -showConstraints 0\n                -showConnectionFromSelected 0\n                -showConnectionToSelected 0\n                -showConstraintLabels 0\n                -showUnderworld 0\n                -showInvisible 0\n                -transitionFrames 1\n                -opaqueContainers 0\n                -freeform 0\n                -imagePosition 0 0 \n                -imageScale 1\n                -imageEnabled 0\n                -graphType \"DAG\" \n                -heatMapDisplay 0\n                -updateSelection 1\n                -updateNodeAdded 1\n                -useDrawOverrideColor 0\n                -limitGraphTraversal -1\n"
		+ "                -range 0 0 \n                -iconSize \"smallIcons\" \n                -showCachedConnections 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperShadePanel\" (localizedPanelLabel(\"Hypershade\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypershade\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"visorPanel\" (localizedPanelLabel(\"Visor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Visor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"nodeEditorPanel\" (localizedPanelLabel(\"Node Editor\")) `;\n\tif ($nodeEditorPanelVisible || $nodeEditorWorkspaceControlOpen) {\n"
		+ "\t\tif (\"\" == $panelName) {\n\t\t\tif ($useSceneConfig) {\n\t\t\t\t$panelName = `scriptedPanel -unParent  -type \"nodeEditorPanel\" -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -connectNodeOnCreation 0\n                -connectOnDrop 0\n                -copyConnectionsOnPaste 0\n                -connectionStyle \"bezier\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -crosshairOnEdgeDragging 0\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n"
		+ "                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -editorMode \"default\" \n                -hasWatchpoint 0\n                $editorName;\n\t\t\t}\n\t\t} else {\n\t\t\t$label = `panel -q -label $panelName`;\n\t\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -connectNodeOnCreation 0\n                -connectOnDrop 0\n                -copyConnectionsOnPaste 0\n                -connectionStyle \"bezier\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n"
		+ "                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -crosshairOnEdgeDragging 0\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -editorMode \"default\" \n                -hasWatchpoint 0\n                $editorName;\n\t\t\tif (!$useSceneConfig) {\n\t\t\t\tpanel -e -l $label $panelName;\n\t\t\t}\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"createNodePanel\" (localizedPanelLabel(\"Create Node\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Create Node\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"polyTexturePlacementPanel\" (localizedPanelLabel(\"UV Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"UV Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"renderWindowPanel\" (localizedPanelLabel(\"Render View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Render View\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"shapePanel\" (localizedPanelLabel(\"Shape Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tshapePanel -edit -l (localizedPanelLabel(\"Shape Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"posePanel\" (localizedPanelLabel(\"Pose Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tposePanel -edit -l (localizedPanelLabel(\"Pose Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynRelEdPanel\" (localizedPanelLabel(\"Dynamic Relationships\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dynamic Relationships\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"relationshipPanel\" (localizedPanelLabel(\"Relationship Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Relationship Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n"
		+ "\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"referenceEditorPanel\" (localizedPanelLabel(\"Reference Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Reference Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"componentEditorPanel\" (localizedPanelLabel(\"Component Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Component Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynPaintScriptedPanelType\" (localizedPanelLabel(\"Paint Effects\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Paint Effects\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"scriptEditorPanel\" (localizedPanelLabel(\"Script Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Script Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"profilerPanel\" (localizedPanelLabel(\"Profiler Tool\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Profiler Tool\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"contentBrowserPanel\" (localizedPanelLabel(\"Content Browser\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Content Browser\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n\t\t\t\t-userCreated false\n\t\t\t\t-defaultImage \"\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 1\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1319\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 1\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1319\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "07118C9A-4743-2764-6885-2B9C555EF09A";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
createNode displayLayer -n "Ref";
	rename -uid "04A4C44F-409D-B18E-ECC8-0AAD4BEBF7B2";
	setAttr ".dt" 1;
	setAttr ".do" 1;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "C043C2E9-42A3-49B3-0516-FBA2ACC303DB";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".esi" 2;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "I:/Cavalry/Maya Project Files/Env/Exports";
	setAttr ".exf" -type "string" "SideNetting_02_SM_Low";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "2527CF1F-44C1-AE81-7D8E-5BAECA0E2EF8";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "B4143E99-4970-532A-4D32-96B097547DF2";
	setAttr ".pn" -type "string" "TE Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 3;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
select -ne :time1;
	setAttr ".o" 0;
select -ne :hardwareRenderingGlobals;
	setAttr ".otfna" -type "stringArray" 22 "NURBS Curves" "NURBS Surfaces" "Polygons" "Subdiv Surface" "Particles" "Particle Instance" "Fluids" "Strokes" "Image Planes" "UI" "Lights" "Cameras" "Locators" "Joints" "IK Handles" "Deformers" "Motion Trails" "Components" "Hair Systems" "Follicles" "Misc. UI" "Ornaments"  ;
	setAttr ".otfva" -type "Int32Array" 22 0 1 1 1 1 1
		 1 1 1 0 0 0 0 0 0 0 0 0
		 0 0 0 0 ;
	setAttr ".fprt" yes;
select -ne :renderPartition;
	setAttr -s 4 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 7 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderingList1;
select -ne :initialShadingGroup;
	setAttr -s 4 ".dsm";
	setAttr ".ro" yes;
select -ne :initialParticleSE;
	setAttr ".ro" yes;
select -ne :defaultRenderGlobals;
	addAttr -ci true -h true -sn "dss" -ln "defaultSurfaceShader" -dt "string";
	setAttr ".ren" -type "string" "arnold";
	setAttr ".dss" -type "string" "lambert1";
select -ne :defaultResolution;
	setAttr ".pa" 1;
select -ne :defaultColorMgtGlobals;
	setAttr ".cfe" yes;
	setAttr ".cfp" -type "string" "<MAYA_RESOURCES>/OCIO-configs/Maya2022-default/config.ocio";
	setAttr ".wsn" -type "string" "ACEScg";
select -ne :hardwareRenderGlobals;
	setAttr ".ctrs" 256;
	setAttr ".btrs" 512;
select -ne :ikSystem;
	setAttr -s 4 ".sol";
connectAttr "Ref.di" "SideNet_BSP.do";
connectAttr "groupId1.id" "SideNet_BSPShape.iog.og[0].gid";
connectAttr "SideNet_BSPSG1.mwc" "SideNet_BSPShape.iog.og[0].gco";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SideNet_BSPSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SideNet_BSPSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SideNet_BSPSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SideNet_BSPSG1.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "M_LightBlueGrey.oc" "SideNet_BSPSG.ss";
connectAttr "SideNet_BSPSG.msg" "materialInfo1.sg";
connectAttr "M_LightBlueGrey.msg" "materialInfo1.m";
connectAttr "M_LightBlueGrey1.oc" "SideNet_BSPSG1.ss";
connectAttr "groupId1.msg" "SideNet_BSPSG1.gn" -na;
connectAttr "SideNet_BSPShape.iog.og[0]" "SideNet_BSPSG1.dsm" -na;
connectAttr "SideNet_BSPSG1.msg" "materialInfo2.sg";
connectAttr "M_LightBlueGrey1.msg" "materialInfo2.m";
connectAttr "layerManager.dli[1]" "Ref.id";
connectAttr "SideNet_BSPSG.pa" ":renderPartition.st" -na;
connectAttr "SideNet_BSPSG1.pa" ":renderPartition.st" -na;
connectAttr "M_LightBlueGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey1.msg" ":defaultShaderList1.s" -na;
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "Netting_GeoShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "SupportArm_GeoShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "SupportArm_Geo1Shape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Netting_Geo1Shape.iog" ":initialShadingGroup.dsm" -na;
// End of SideNetting.ma
