//Maya ASCII 2022 scene
//Name: MiscServer.ma
//Last modified: Tue, Mar 15, 2022 03:00:23 PM
//Codeset: 1252
requires maya "2022";
requires "stereoCamera" "10.0";
requires -nodeType "gameFbxExporter" "gameFbxExporter" "1.0";
requires "mtoa" "4.2.1";
requires "stereoCamera" "10.0";
currentUnit -l meter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2022";
fileInfo "version" "2022";
fileInfo "cutIdentifier" "202102181415-29bfc1879c";
fileInfo "osv" "Windows 10 Home v2009 (Build: 22000)";
fileInfo "UUID" "E63105B2-4038-F6FF-7796-F496E1B2E695";
fileInfo "license" "education";
createNode transform -s -n "persp";
	rename -uid "09E46BAC-4D6D-F566-D577-F0AA03539BC6";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -2.834241093211689 1.9261556374971383 3.5593504543163808 ;
	setAttr ".r" -type "double3" -21.338352730289838 -395.79999999996386 -1.9607302206042104e-15 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "A1AF942C-4CFA-17E6-53DE-17B4185958E1";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 4.8885190484842109;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "AFA1996B-4B99-E590-0776-BF9DAE9AE9FA";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 10.001000000000001 0 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "D2AA1672-4B67-B79A-2D3E-A79C651C08E2";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 0.3;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "390A1106-4B9E-A883-C8CF-87852D9DC40E";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -0.2330097616611996 1.4018419349144673 10.063299707352455 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "7AE6B859-4291-EB4E-73B9-17AD82B5B98D";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.063299707352455;
	setAttr ".ow" 8.2343721734272481;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".tp" -type "double3" -50 100 0 ;
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "side";
	rename -uid "34DE3073-4D71-E07C-3EFD-539D8F175D16";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.001000000000001 0 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "46A7CC66-4D0C-F5CD-DE77-7EA8174C2B62";
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
createNode transform -n "REF";
	rename -uid "F50880C4-4541-1D77-6D4A-BE98B3457556";
	setAttr ".t" -type "double3" 0 1 -0.50000001549720763 ;
	setAttr ".r" -type "double3" -90 0 0 ;
	setAttr ".rp" -type "double3" -3.4332275390624999e-07 -0.50000001549720763 -1 ;
	setAttr ".rpt" -type "double3" 0 -0.49999998450279237 1.5000000154972077 ;
	setAttr ".sp" -type "double3" -3.4332275390624999e-07 -0.50000001549720763 -1 ;
createNode mesh -n "REFShape" -p "REF";
	rename -uid "AB134448-4BBB-B10E-6452-35A09A6D5050";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:9]";
	setAttr ".iog[0].og[1].gcl" -type "componentList" 1 "f[10:11]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 2 ".uvst";
	setAttr ".uvst[0].uvsn" -type "string" "LightMapUV";
	setAttr -s 27 ".uvst[0].uvsp[0:26]" -type "float2" 2 3.79882813 0 3.79882813
		 0 1 2 1 0.99951172 3.79882813 1 1 1.99902344 3.79882813 5.9604645e-08 3.79882813
		 5.9604645e-08 1 1.99902344 1 1 3.79882813 0.99951172 3 5.9604645e-08 3 0.99951172
		 0.99999994 0.99951172 2.99902344 -5.9604645e-08 3 1 1 0 3.79882813 0 1 0 1 2 3.79882813
		 1 1 2 1 2 3.79882813 1 1 0 1 0 1;
	setAttr ".uvst[1].uvsn" -type "string" "UVmap_1";
	setAttr -s 24 ".uvst[1].uvsp[0:23]" -type "float2" 0.79736328 0.99193573
		 0.41113281 0.99193573 0.41113281 0.45117188 0.79736328 0.45117188 0.00806427 0.42773438
		 0.00806427 0.234375 0.54882813 0.234375 0.54882813 0.42773438 0.39428711 0.99193573
		 0.00806427 0.99193573 0.00806427 0.45117188 0.39428711 0.45117188 0.00806427 0.21777344
		 0.00806427 0.024902344 0.54882813 0.024902344 0.54882813 0.21777344 0.97509766 0.42773438
		 0.78222656 0.42773438 0.78222656 0.041503906 0.97509766 0.041503906 0.765625 0.42773438
		 0.57226563 0.42773438 0.57226563 0.041503906 0.765625 0.041503906;
	setAttr ".cuvs" -type "string" "LightMapUV";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 8 ".vt[0:7]"  0.99999928 -1.000000715256 1.79999995 -1.000000715256 -0.99999928 1.79999995
		 -1.000000715256 -0.99999928 -1 0.99999928 -1.000000715256 -1 1 -7.5565112e-07 1.79999995
		 1 -6.5565109e-07 -1 -1 5.5565107e-07 1.79999995 -1 6.5565109e-07 -1;
	setAttr -s 18 ".ed[0:17]"  0 1 0 1 2 0 2 0 0 3 0 0 2 3 0 4 0 0 3 4 0
		 5 4 0 3 5 0 6 4 0 5 6 0 7 6 0 5 7 0 1 6 0 7 1 0 7 2 0 0 6 0 2 5 0;
	setAttr -s 36 ".n[0:35]" -type "float3"  0 -1 0 0 -1 0 0 -1 0 0 -1 0
		 0 -1 0 0 -1 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1
		 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1;
	setAttr -s 12 -ch 36 ".fc[0:11]" -type "polyFaces" 
		f 3 0 1 2
		mu 0 3 0 1 2
		mu 1 3 0 1 2
		f 3 3 -3 4
		mu 0 3 3 0 2
		mu 1 3 3 0 2
		f 3 5 -4 6
		mu 0 3 4 17 18
		mu 1 3 4 5 6
		f 3 7 -7 8
		mu 0 3 5 4 19
		mu 1 3 7 4 6
		f 3 9 -8 10
		mu 0 3 6 7 8
		mu 1 3 8 9 10
		f 3 11 -11 12
		mu 0 3 9 6 8
		mu 1 3 11 8 10
		f 3 13 -12 14
		mu 0 3 20 10 21
		mu 1 3 12 13 14
		f 3 -2 -15 15
		mu 0 3 22 23 24
		mu 1 3 15 12 14
		f 3 -14 -1 16
		mu 0 3 11 12 25
		mu 1 3 16 17 18
		f 3 -10 -17 -6
		mu 0 3 13 11 26
		mu 1 3 19 16 18
		f 3 -9 -5 17
		mu 0 3 14 15 2
		mu 1 3 20 21 22
		f 3 -13 -18 -16
		mu 0 3 16 14 2
		mu 1 3 23 20 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr -s 2 ".pd";
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".pd[1]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MiscServer1";
	rename -uid "A43868DE-4E94-8448-DD3C-E4A99F6A49DA";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 1.4000000000000001 0 ;
	setAttr ".rp" -type "double3" -1 0 0 ;
	setAttr ".sp" -type "double3" -1 0 0 ;
createNode mesh -n "MiscServer1Shape" -p "MiscServer1";
	rename -uid "E558BE32-465A-19B7-F880-42AA7C02370F";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 6 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[2]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottom";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "f[3]";
	setAttr ".gtag[2].gtagnm" -type "string" "front";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "f[0]";
	setAttr ".gtag[3].gtagnm" -type "string" "left";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "f[5]";
	setAttr ".gtag[4].gtagnm" -type "string" "right";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "f[4]";
	setAttr ".gtag[5].gtagnm" -type "string" "top";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 1 "f[1]";
	setAttr ".pv" -type "double2" 0.5 0.0625 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 55 ".uvst[0].uvsp[0:54]" -type "float2" 0.375 0 0.625 0 0.375
		 0.75 0.625 0.75 0.375 1 0.625 1 0.875 0 0.125 0 0.375 0.125 0.625 0.125 0.625 0.625
		 0.875 0.125 0.125 0.125 0.375 0.625 0.375 0 0.625 0 0.625 0.125 0.375 0.125 0.375
		 0 0.625 0 0.625 0.125 0.375 0.125 0.375 0.0625 0.375 0.0625 0.375 0.0625 0.625 0.0625
		 0.625 0.0625 0.625 0.0625 0.625 0.6875 0.875 0.0625 0.125 0.0625 0.375 0.6875 0.5
		 0 0.5 1 0.5 0.75 0.5 0.6875 0.375 0.375 0.5 0.625 0.5 0.125 0.5 0.125 0.5 0.125 0.5
		 0.0625 0.5 0 0.5 0 0.25 0 0.375 0.875 0.5 0.875 0.625 0.875 0.75 0 0.75 0.0625 0.625
		 0.375 0.75 0.125 0.4375 0.25 0.25 0.125 0.25 0.0625;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 42 ".pt[0:41]" -type "float3"  -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0;
	setAttr -s 42 ".vt[0:41]"  -0.5 -0.5 0.5 0.5 -0.5 0.5 -0.5 -0.5 -0.5
		 0.5 -0.5 -0.5 -0.5 0.89999998 0.5 0.5 0.89999998 0.5 0.5 0.89999998 -0.5 -0.5 0.89999998 -0.5
		 -0.48223159 -0.47512418 0.5 0.48223156 -0.47512418 0.5 0.48223156 0.87512422 0.5
		 -0.48223159 0.87512422 0.5 -0.48223159 -0.47512418 0.46179038 0.48223156 -0.47512418 0.46179038
		 0.48223156 0.87512422 0.46179038 -0.48223159 0.87512422 0.46179038 -0.5 0.2 0.5 -0.48223159 0.20000002 0.5
		 -0.48223159 0.20000002 0.46179038 0.48223156 0.20000002 0.46179038 0.48223156 0.20000002 0.5
		 0.5 0.2 0.5 0.5 0.2 -0.5 -0.5 0.2 -0.5 0 -0.5 0.5 0 -0.5 -0.5 0 0.2 -0.5 0 0.89999998 -0.5
		 0 0.89999998 0.5 -1.9073486e-08 0.87512422 0.5 -1.9073486e-08 0.87512422 0.46179038
		 -1.9073486e-08 0.20000002 0.46179038 -1.9073486e-08 -0.47512418 0.46179038 -1.9073486e-08 -0.47512418 0.5
		 -0.5 -0.5 0 0 -0.5 0 0.5 -0.5 0 0.5 0.2 0 0.5 0.89999998 0 0 0.89999998 0 -0.5 0.89999998 0
		 -0.5 0.2 0;
	setAttr -s 80 ".ed[0:79]"  0 24 0 2 25 0 0 16 0 1 21 0 2 34 0 3 36 0
		 6 22 0 7 23 0 4 28 0 5 38 0 6 27 0 7 40 0 0 8 0 1 9 0 8 33 0 5 10 0 9 20 0 4 11 0
		 11 29 0 8 17 0 8 12 0 9 13 0 12 32 0 10 14 0 13 19 0 11 15 0 15 30 0 12 18 0 16 4 0
		 17 11 0 18 15 0 19 14 0 20 10 0 21 5 0 22 3 0 23 2 0 16 17 1 17 18 1 18 31 1 19 20 1
		 20 21 1 21 37 1 22 26 1 23 41 1 24 1 0 25 3 0 26 23 1 27 7 0 28 5 0 29 10 0 30 14 0
		 31 19 1 32 13 0 33 9 0 24 35 1 25 26 1 26 27 1 27 39 1 28 29 1 29 30 1 30 31 1 31 32 1
		 32 33 1 33 24 1 34 0 0 35 25 1 36 1 0 37 22 1 38 6 0 39 28 1 40 4 0 41 16 1 34 35 1
		 35 36 1 36 37 1 37 38 1 38 39 1 39 40 1 40 41 1 41 34 1;
	setAttr -s 40 -ch 160 ".fc[0:39]" -type "polyFaces" 
		f 4 54 73 66 -45
		mu 0 4 33 46 47 5
		f 4 60 51 31 -51
		mu 0 4 40 41 25 20
		f 4 41 75 -10 -34
		mu 0 4 27 49 51 9
		f 4 56 -11 6 42
		mu 0 4 35 37 10 28
		f 4 78 71 28 -71
		mu 0 4 53 54 22 8
		f 4 9 76 69 48
		mu 0 4 9 50 52 38
		f 4 63 44 13 -54
		mu 0 4 43 32 1 15
		f 4 40 33 15 -33
		mu 0 4 26 27 9 16
		f 4 -49 58 49 -16
		mu 0 4 9 38 39 16
		f 4 -29 36 29 -18
		mu 0 4 8 22 23 17
		f 4 62 53 21 -53
		mu 0 4 42 43 15 19
		f 4 39 32 23 -32
		mu 0 4 25 26 16 20
		f 4 -50 59 50 -24
		mu 0 4 16 39 40 20
		f 4 -30 37 30 -26
		mu 0 4 17 23 24 21
		f 4 -37 -3 12 19
		mu 0 4 23 22 0 14
		f 4 -38 -20 20 27
		mu 0 4 24 23 14 18
		f 4 61 52 24 -52
		mu 0 4 41 42 19 25
		f 4 16 -40 -25 -22
		mu 0 4 15 26 25 19
		f 4 3 -41 -17 -14
		mu 0 4 1 27 26 15
		f 4 -67 74 -42 -4
		mu 0 4 1 48 49 27
		f 4 55 -43 34 -46
		mu 0 4 34 35 28 3
		f 4 79 64 2 -72
		mu 0 4 54 44 0 22
		f 4 72 -55 -1 -65
		mu 0 4 45 46 33 4
		f 4 -47 -56 -2 -36
		mu 0 4 31 35 34 2
		f 4 -48 -57 46 -8
		mu 0 4 13 37 35 31
		f 4 -70 77 70 8
		mu 0 4 38 52 53 8
		f 4 -59 -9 17 18
		mu 0 4 39 38 8 17
		f 4 -60 -19 25 26
		mu 0 4 40 39 17 21
		f 4 38 -61 -27 -31
		mu 0 4 24 41 40 21
		f 4 22 -62 -39 -28
		mu 0 4 18 42 41 24
		f 4 14 -63 -23 -21
		mu 0 4 14 43 42 18
		f 4 0 -64 -15 -13
		mu 0 4 0 32 43 14
		f 4 1 -66 -73 -5
		mu 0 4 2 34 46 45
		f 4 -74 65 45 5
		mu 0 4 47 46 34 3
		f 4 -75 -6 -35 -68
		mu 0 4 49 48 6 29
		f 4 -76 67 -7 -69
		mu 0 4 51 49 29 11
		f 4 -77 68 10 57
		mu 0 4 52 50 10 36
		f 4 -78 -58 47 11
		mu 0 4 53 52 36 12
		f 4 43 -79 -12 7
		mu 0 4 30 54 53 12
		f 4 4 -80 -44 35
		mu 0 4 7 44 54 30;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MiscServer2";
	rename -uid "F64F3EB3-4E23-E9FE-AC15-DD8C2A5E9902";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 1.4000000000000001 0 ;
	setAttr ".rp" -type "double3" -1 0 0 ;
	setAttr ".sp" -type "double3" -1 0 0 ;
createNode mesh -n "MiscServer2Shape" -p "MiscServer2";
	rename -uid "E6698F1B-4F9E-1047-1021-5B9D29F4C163";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 6 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[2]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottom";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "f[3]";
	setAttr ".gtag[2].gtagnm" -type "string" "front";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "f[0]";
	setAttr ".gtag[3].gtagnm" -type "string" "left";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "f[5]";
	setAttr ".gtag[4].gtagnm" -type "string" "right";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "f[4]";
	setAttr ".gtag[5].gtagnm" -type "string" "top";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 1 "f[1]";
	setAttr ".pv" -type "double2" 0.5 0.0625 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 55 ".uvst[0].uvsp[0:54]" -type "float2" 0.375 0 0.625 0 0.375
		 0.75 0.625 0.75 0.375 1 0.625 1 0.875 0 0.125 0 0.375 0.125 0.625 0.125 0.625 0.625
		 0.875 0.125 0.125 0.125 0.375 0.625 0.375 0 0.625 0 0.625 0.125 0.375 0.125 0.375
		 0 0.625 0 0.625 0.125 0.375 0.125 0.375 0.0625 0.375 0.0625 0.375 0.0625 0.625 0.0625
		 0.625 0.0625 0.625 0.0625 0.625 0.6875 0.875 0.0625 0.125 0.0625 0.375 0.6875 0.5
		 0 0.5 1 0.5 0.75 0.5 0.6875 0.375 0.375 0.5 0.625 0.5 0.125 0.5 0.125 0.5 0.125 0.5
		 0.0625 0.5 0 0.5 0 0.25 0 0.375 0.875 0.5 0.875 0.625 0.875 0.75 0 0.75 0.0625 0.625
		 0.375 0.75 0.125 0.4375 0.25 0.25 0.125 0.25 0.0625;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 42 ".pt[0:41]" -type "float3"  -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0;
	setAttr -s 42 ".vt[0:41]"  -0.5 -0.5 0.5 0.5 -0.5 0.5 -0.5 -0.5 -0.5
		 0.5 -0.5 -0.5 -0.5 0.89999998 0.5 0.5 0.89999998 0.5 0.5 0.89999998 -0.5 -0.5 0.89999998 -0.5
		 -0.48223159 -0.47512418 0.5 0.48223156 -0.47512418 0.5 0.48223156 0.87512422 0.5
		 -0.48223159 0.87512422 0.5 -0.48223159 -0.47512418 0.46179038 0.48223156 -0.47512418 0.46179038
		 0.48223156 0.87512422 0.46179038 -0.48223159 0.87512422 0.46179038 -0.5 0.2 0.5 -0.48223159 0.20000002 0.5
		 -0.48223159 0.20000002 0.46179038 0.48223156 0.20000002 0.46179038 0.48223156 0.20000002 0.5
		 0.5 0.2 0.5 0.5 0.2 -0.5 -0.5 0.2 -0.5 0 -0.5 0.5 0 -0.5 -0.5 0 0.2 -0.5 0 0.89999998 -0.5
		 0 0.89999998 0.5 -1.9073486e-08 0.87512422 0.5 -1.9073486e-08 0.87512422 0.46179038
		 -1.9073486e-08 0.20000002 0.46179038 -1.9073486e-08 -0.47512418 0.46179038 -1.9073486e-08 -0.47512418 0.5
		 -0.5 -0.5 0 0 -0.5 0 0.5 -0.5 0 0.5 0.2 0 0.5 0.89999998 0 0 0.89999998 0 -0.5 0.89999998 0
		 -0.5 0.2 0;
	setAttr -s 80 ".ed[0:79]"  0 24 0 2 25 0 0 16 0 1 21 0 2 34 0 3 36 0
		 6 22 0 7 23 0 4 28 0 5 38 0 6 27 0 7 40 0 0 8 0 1 9 0 8 33 0 5 10 0 9 20 0 4 11 0
		 11 29 0 8 17 0 8 12 0 9 13 0 12 32 0 10 14 0 13 19 0 11 15 0 15 30 0 12 18 0 16 4 0
		 17 11 0 18 15 0 19 14 0 20 10 0 21 5 0 22 3 0 23 2 0 16 17 1 17 18 1 18 31 1 19 20 1
		 20 21 1 21 37 1 22 26 1 23 41 1 24 1 0 25 3 0 26 23 1 27 7 0 28 5 0 29 10 0 30 14 0
		 31 19 1 32 13 0 33 9 0 24 35 1 25 26 1 26 27 1 27 39 1 28 29 1 29 30 1 30 31 1 31 32 1
		 32 33 1 33 24 1 34 0 0 35 25 1 36 1 0 37 22 1 38 6 0 39 28 1 40 4 0 41 16 1 34 35 1
		 35 36 1 36 37 1 37 38 1 38 39 1 39 40 1 40 41 1 41 34 1;
	setAttr -s 40 -ch 160 ".fc[0:39]" -type "polyFaces" 
		f 4 54 73 66 -45
		mu 0 4 33 46 47 5
		f 4 60 51 31 -51
		mu 0 4 40 41 25 20
		f 4 41 75 -10 -34
		mu 0 4 27 49 51 9
		f 4 56 -11 6 42
		mu 0 4 35 37 10 28
		f 4 78 71 28 -71
		mu 0 4 53 54 22 8
		f 4 9 76 69 48
		mu 0 4 9 50 52 38
		f 4 63 44 13 -54
		mu 0 4 43 32 1 15
		f 4 40 33 15 -33
		mu 0 4 26 27 9 16
		f 4 -49 58 49 -16
		mu 0 4 9 38 39 16
		f 4 -29 36 29 -18
		mu 0 4 8 22 23 17
		f 4 62 53 21 -53
		mu 0 4 42 43 15 19
		f 4 39 32 23 -32
		mu 0 4 25 26 16 20
		f 4 -50 59 50 -24
		mu 0 4 16 39 40 20
		f 4 -30 37 30 -26
		mu 0 4 17 23 24 21
		f 4 -37 -3 12 19
		mu 0 4 23 22 0 14
		f 4 -38 -20 20 27
		mu 0 4 24 23 14 18
		f 4 61 52 24 -52
		mu 0 4 41 42 19 25
		f 4 16 -40 -25 -22
		mu 0 4 15 26 25 19
		f 4 3 -41 -17 -14
		mu 0 4 1 27 26 15
		f 4 -67 74 -42 -4
		mu 0 4 1 48 49 27
		f 4 55 -43 34 -46
		mu 0 4 34 35 28 3
		f 4 79 64 2 -72
		mu 0 4 54 44 0 22
		f 4 72 -55 -1 -65
		mu 0 4 45 46 33 4
		f 4 -47 -56 -2 -36
		mu 0 4 31 35 34 2
		f 4 -48 -57 46 -8
		mu 0 4 13 37 35 31
		f 4 -70 77 70 8
		mu 0 4 38 52 53 8
		f 4 -59 -9 17 18
		mu 0 4 39 38 8 17
		f 4 -60 -19 25 26
		mu 0 4 40 39 17 21
		f 4 38 -61 -27 -31
		mu 0 4 24 41 40 21
		f 4 22 -62 -39 -28
		mu 0 4 18 42 41 24
		f 4 14 -63 -23 -21
		mu 0 4 14 43 42 18
		f 4 0 -64 -15 -13
		mu 0 4 0 32 43 14
		f 4 1 -66 -73 -5
		mu 0 4 2 34 46 45
		f 4 -74 65 45 5
		mu 0 4 47 46 34 3
		f 4 -75 -6 -35 -68
		mu 0 4 49 48 6 29
		f 4 -76 67 -7 -69
		mu 0 4 51 49 29 11
		f 4 -77 68 10 57
		mu 0 4 52 50 10 36
		f 4 -78 -58 47 11
		mu 0 4 53 52 36 12
		f 4 43 -79 -12 7
		mu 0 4 30 54 53 12
		f 4 4 -80 -44 35
		mu 0 4 7 44 54 30;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MiscServer_TSFinished_01_grp";
	rename -uid "5A8301C9-4EEB-5B5D-F0B8-409622E9A146";
	setAttr ".rp" -type "double3" -1 0 0 ;
	setAttr ".sp" -type "double3" -1 0 0 ;
createNode mesh -n "polySurfaceShape1" -p "MiscServer_TSFinished_01_grp";
	rename -uid "5FDCC4FD-46D5-F071-0696-23BF854DF70C";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 6 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[2]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottom";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "f[3]";
	setAttr ".gtag[2].gtagnm" -type "string" "front";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "f[0]";
	setAttr ".gtag[3].gtagnm" -type "string" "left";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "f[5]";
	setAttr ".gtag[4].gtagnm" -type "string" "right";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "f[4]";
	setAttr ".gtag[5].gtagnm" -type "string" "top";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 1 "f[1]";
	setAttr ".pv" -type "double2" 0.5 0.0625 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 55 ".uvst[0].uvsp[0:54]" -type "float2" 0.375 0 0.625 0 0.375
		 0.75 0.625 0.75 0.375 1 0.625 1 0.875 0 0.125 0 0.375 0.125 0.625 0.125 0.625 0.625
		 0.875 0.125 0.125 0.125 0.375 0.625 0.375 0 0.625 0 0.625 0.125 0.375 0.125 0.375
		 0 0.625 0 0.625 0.125 0.375 0.125 0.375 0.0625 0.375 0.0625 0.375 0.0625 0.625 0.0625
		 0.625 0.0625 0.625 0.0625 0.625 0.6875 0.875 0.0625 0.125 0.0625 0.375 0.6875 0.5
		 0 0.5 1 0.5 0.75 0.5 0.6875 0.375 0.375 0.5 0.625 0.5 0.125 0.5 0.125 0.5 0.125 0.5
		 0.0625 0.5 0 0.5 0 0.25 0 0.375 0.875 0.5 0.875 0.625 0.875 0.75 0 0.75 0.0625 0.625
		 0.375 0.75 0.125 0.4375 0.25 0.25 0.125 0.25 0.0625;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 42 ".pt[0:41]" -type "float3"  -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 
		0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 0 -0.5 0.5 
		0 -0.5 0.5 0 -0.5 0.5 0;
	setAttr -s 42 ".vt[0:41]"  -0.5 -0.5 0.5 0.5 -0.5 0.5 -0.5 -0.5 -0.5
		 0.5 -0.5 -0.5 -0.5 0.89999998 0.5 0.5 0.89999998 0.5 0.5 0.89999998 -0.5 -0.5 0.89999998 -0.5
		 -0.48223159 -0.47512418 0.5 0.48223156 -0.47512418 0.5 0.48223156 0.87512422 0.5
		 -0.48223159 0.87512422 0.5 -0.48223159 -0.47512418 0.46179038 0.48223156 -0.47512418 0.46179038
		 0.48223156 0.87512422 0.46179038 -0.48223159 0.87512422 0.46179038 -0.5 0.2 0.5 -0.48223159 0.20000002 0.5
		 -0.48223159 0.20000002 0.46179038 0.48223156 0.20000002 0.46179038 0.48223156 0.20000002 0.5
		 0.5 0.2 0.5 0.5 0.2 -0.5 -0.5 0.2 -0.5 0 -0.5 0.5 0 -0.5 -0.5 0 0.2 -0.5 0 0.89999998 -0.5
		 0 0.89999998 0.5 -1.9073486e-08 0.87512422 0.5 -1.9073486e-08 0.87512422 0.46179038
		 -1.9073486e-08 0.20000002 0.46179038 -1.9073486e-08 -0.47512418 0.46179038 -1.9073486e-08 -0.47512418 0.5
		 -0.5 -0.5 0 0 -0.5 0 0.5 -0.5 0 0.5 0.2 0 0.5 0.89999998 0 0 0.89999998 0 -0.5 0.89999998 0
		 -0.5 0.2 0;
	setAttr -s 80 ".ed[0:79]"  0 24 0 2 25 0 0 16 0 1 21 0 2 34 0 3 36 0
		 6 22 0 7 23 0 4 28 0 5 38 0 6 27 0 7 40 0 0 8 0 1 9 0 8 33 0 5 10 0 9 20 0 4 11 0
		 11 29 0 8 17 0 8 12 0 9 13 0 12 32 0 10 14 0 13 19 0 11 15 0 15 30 0 12 18 0 16 4 0
		 17 11 0 18 15 0 19 14 0 20 10 0 21 5 0 22 3 0 23 2 0 16 17 1 17 18 1 18 31 1 19 20 1
		 20 21 1 21 37 1 22 26 1 23 41 1 24 1 0 25 3 0 26 23 1 27 7 0 28 5 0 29 10 0 30 14 0
		 31 19 1 32 13 0 33 9 0 24 35 1 25 26 1 26 27 1 27 39 1 28 29 1 29 30 1 30 31 1 31 32 1
		 32 33 1 33 24 1 34 0 0 35 25 1 36 1 0 37 22 1 38 6 0 39 28 1 40 4 0 41 16 1 34 35 1
		 35 36 1 36 37 1 37 38 1 38 39 1 39 40 1 40 41 1 41 34 1;
	setAttr -s 40 -ch 160 ".fc[0:39]" -type "polyFaces" 
		f 4 54 73 66 -45
		mu 0 4 33 46 47 5
		f 4 60 51 31 -51
		mu 0 4 40 41 25 20
		f 4 41 75 -10 -34
		mu 0 4 27 49 51 9
		f 4 56 -11 6 42
		mu 0 4 35 37 10 28
		f 4 78 71 28 -71
		mu 0 4 53 54 22 8
		f 4 9 76 69 48
		mu 0 4 9 50 52 38
		f 4 63 44 13 -54
		mu 0 4 43 32 1 15
		f 4 40 33 15 -33
		mu 0 4 26 27 9 16
		f 4 -49 58 49 -16
		mu 0 4 9 38 39 16
		f 4 -29 36 29 -18
		mu 0 4 8 22 23 17
		f 4 62 53 21 -53
		mu 0 4 42 43 15 19
		f 4 39 32 23 -32
		mu 0 4 25 26 16 20
		f 4 -50 59 50 -24
		mu 0 4 16 39 40 20
		f 4 -30 37 30 -26
		mu 0 4 17 23 24 21
		f 4 -37 -3 12 19
		mu 0 4 23 22 0 14
		f 4 -38 -20 20 27
		mu 0 4 24 23 14 18
		f 4 61 52 24 -52
		mu 0 4 41 42 19 25
		f 4 16 -40 -25 -22
		mu 0 4 15 26 25 19
		f 4 3 -41 -17 -14
		mu 0 4 1 27 26 15
		f 4 -67 74 -42 -4
		mu 0 4 1 48 49 27
		f 4 55 -43 34 -46
		mu 0 4 34 35 28 3
		f 4 79 64 2 -72
		mu 0 4 54 44 0 22
		f 4 72 -55 -1 -65
		mu 0 4 45 46 33 4
		f 4 -47 -56 -2 -36
		mu 0 4 31 35 34 2
		f 4 -48 -57 46 -8
		mu 0 4 13 37 35 31
		f 4 -70 77 70 8
		mu 0 4 38 52 53 8
		f 4 -59 -9 17 18
		mu 0 4 39 38 8 17
		f 4 -60 -19 25 26
		mu 0 4 40 39 17 21
		f 4 38 -61 -27 -31
		mu 0 4 24 41 40 21
		f 4 22 -62 -39 -28
		mu 0 4 18 42 41 24
		f 4 14 -63 -23 -21
		mu 0 4 14 43 42 18
		f 4 0 -64 -15 -13
		mu 0 4 0 32 43 14
		f 4 1 -66 -73 -5
		mu 0 4 2 34 46 45
		f 4 -74 65 45 5
		mu 0 4 47 46 34 3
		f 4 -75 -6 -35 -68
		mu 0 4 49 48 6 29
		f 4 -76 67 -7 -69
		mu 0 4 51 49 29 11
		f 4 -77 68 10 57
		mu 0 4 52 50 10 36
		f 4 -78 -58 47 11
		mu 0 4 53 52 36 12
		f 4 43 -79 -12 7
		mu 0 4 30 54 53 12
		f 4 4 -80 -44 35
		mu 0 4 7 44 54 30;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Misc_Server_Body_geo" -p "MiscServer_TSFinished_01_grp";
	rename -uid "8E9E447B-4503-C684-1BFA-F68EAABFD108";
createNode mesh -n "Misc_Server_Body_geoShape" -p "Misc_Server_Body_geo";
	rename -uid "ABB2D8C1-4E44-4A71-1DE6-088B722E7ED0";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.55076417326927185 0.83999538421630859 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 93 ".uvst[0].uvsp[0:92]" -type "float2" 0.13878125 0.22991198
		 0.13878125 0.1170265 0.25166672 0.1170265 0.25166672 0.22991204 0.40971226 0.22990981
		 0.40971226 0.11702434 0.56775188 0.11702439 0.5677529 0.2299087 0.54419637 0.11589166
		 0.38616318 0.1158917 0.56775284 0.0041377544 0.54419637 0.0030108392 0.79352379 0.11702329
		 0.95156336 0.11702323 0.95156336 0.22990876 0.79352361 0.2299086 0.56775284 0.11702323
		 0.68063807 0.11702329 0.68063813 0.22990867 0.47956264 0.38871276 0.47956264 0.408167
		 0.088517368 0.408167 0.9341923 0.82480466 0.5687207 0.36138213 0.96483845 0.42079753
		 0.55076456 0.82480514 0.5508458 0.8247022 1.096727848 0.32086533 0.55076361 0.85518563
		 0.012236118 0.85518569 0.5508458 0.85518557 0.16733611 0.8551861 0.55076456 0.85518587
		 0.5508458 0.85518563 0.012235284 0.85518563 1.10960305 0.22990865 0.16733605 0.82480502
		 0.16733599 0.8551861 0.25167274 0.11702434 0.13878113 0.0041410387 0.25166661 0.004141076
		 1.10960305 0.11702323 0.025895774 0.11702656 0.025895774 0.22991198 0.54419637 0.22877255
		 0.025895715 0.0041411133 0.38616318 0.22877255 0.25167271 0.0041389898 0.40971226
		 0.0041389763 0.56775188 0.0041389763 0.68063819 0.0041376948 0.79352379 0.0041377246
		 0.95156336 0.0041378736 1.10960305 0.004137814 0.79352385 0.1170232 1.11618364 0.33476162
		 0.21053922 0.42079771 0.9341923 0.85518575 0.79352379 0.004137814 0.87060654 0.408167
		 0.021257937 0.33476162 0.56872022 0.33476162 0.79352379 0.22990882 1.11618531 0.37527746
		 0.012236297 0.8247022 0.93419218 0.85518563 0.25167274 0.22990981 0.58768862 0.44025183
		 0.56775206 0.22990987 0.021256149 0.3752777 0.5687207 0.37527746 0.19664299 0.44025183
		 0.97873437 0.44025195 0.040710509 0.36138195 1.089455605 0.85518557 1.089455605 0.8247022
		 0.5508458 0.8247022 1.096730351 0.36138213 0.16733617 0.82480508 0.58768868 0.42079771
		 0.93419254 0.8248046 0.85671163 0.38871276 0.55076361 0.8248046 0.10241395 0.38871276
		 0.040710926 0.32086533 0.5687201 0.32086533 0.012235284 0.82470226 1.089456439 0.8247022
		 1.089456439 0.85518563 0.70222962 0.0030107796 0.70222962 0.11589161 0.70222956 0.22877249
		 0.38616312 0.003010869;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt";
	setAttr ".pt[20]" -type "float3" 9.5367433e-08 4.7683715e-09 2.1457673e-08 ;
	setAttr -s 41 ".vt[0:40]"  -0.9999997 3.0517577e-07 0.5 -6.1035155e-07 3.0517577e-07 0.5
		 -1 0 -0.5 0 0 -0.5 -0.9999997 1.39999974 0.5 -6.1035155e-07 1.39999974 0.5 0 1.39999998 -0.5
		 -1 1.39999998 -0.5 -0.98223162 0.024875222 0.5 -0.017768137 0.024875222 0.5 -0.017768137 1.37512481 0.5
		 -0.98223162 1.37512481 0.5 -0.98223162 0.024875831 0.46179038 -0.017768441 0.024875831 0.46179038
		 -0.017768441 1.37512422 0.46179038 -0.98223162 1.37512422 0.46179038 -0.9999997 0.69999999 0.5
		 -0.98223162 0.69999999 0.5 -0.98223162 0.69999999 0.46179038 -0.017768441 0.69999999 0.46179038
		 -0.01776804 0.69999999 0.50000006 -6.1035155e-07 0.69999999 0.5 0 0.69999999 -0.5
		 -1 0.69999999 -0.5 -0.5 3.0517577e-07 0.5 -0.5 0 -0.5 -0.5 0.69999999 -0.5 -0.5 1.39999998 -0.5
		 -0.5 1.39999974 0.5 -0.5 1.37512481 0.5 -0.5 1.37512422 0.46179038 -0.5 0.024875831 0.46179038
		 -0.5 0.024875222 0.5 -1 0 0 -0.5 0 0 0 0 0 0 0.69999999 0 0 1.39999998 0 -0.5 1.39999998 0
		 -1 1.39999998 0 -1 0.69999999 0;
	setAttr -s 76 ".ed[0:75]"  0 24 0 2 25 0 0 16 0 1 21 0 2 33 0 3 35 0
		 6 22 0 7 23 0 4 28 0 5 37 0 6 27 0 7 39 0 0 8 0 1 9 0 8 32 0 5 10 0 9 20 0 4 11 0
		 11 29 0 8 17 0 8 12 0 9 13 0 12 31 0 10 14 0 13 19 0 11 15 0 15 30 0 12 18 0 16 4 0
		 17 11 0 18 15 0 19 14 0 20 10 0 21 5 0 22 3 0 23 2 0 16 17 1 17 18 1 19 20 1 20 21 1
		 21 36 1 22 26 1 23 40 1 24 1 0 25 3 0 26 23 1 27 7 0 28 5 0 29 10 0 30 14 0 31 13 0
		 32 9 0 24 34 1 25 26 1 26 27 1 27 38 1 28 29 1 29 30 1 31 32 1 32 24 1 33 0 0 34 25 1
		 35 1 0 36 22 1 37 6 0 38 28 1 39 4 0 40 16 1 33 34 1 34 35 1 35 36 1 36 37 1 37 38 1
		 38 39 1 39 40 1 40 33 1;
	setAttr -s 36 -ch 144 ".fc[0:35]" -type "polyFaces" 
		f 4 52 69 62 -44
		mu 0 4 0 1 2 3
		f 4 40 71 -10 -34
		mu 0 4 4 5 6 68
		f 4 54 -11 6 41
		mu 0 4 8 9 92 11
		f 4 74 67 28 -67
		mu 0 4 12 13 14 62
		f 4 9 72 65 47
		mu 0 4 7 16 17 18
		f 4 59 43 13 -52
		mu 0 4 19 20 21 83
		f 4 39 33 15 -33
		mu 0 4 23 70 69 73
		f 4 -48 56 48 -16
		mu 0 4 72 67 79 24
		f 4 -29 36 29 -18
		mu 0 4 55 61 85 27
		f 4 58 51 21 -51
		mu 0 4 28 82 22 65
		f 4 38 32 23 -32
		mu 0 4 30 76 75 74
		f 4 -49 57 49 -24
		mu 0 4 78 25 32 31
		f 4 -30 37 30 -26
		mu 0 4 86 26 33 34
		f 4 -37 -3 12 19
		mu 0 4 85 61 60 84
		f 4 -38 -20 20 27
		mu 0 4 33 26 87 88
		f 4 16 -39 -25 -22
		mu 0 4 64 76 30 29
		f 4 3 -40 -17 -14
		mu 0 4 63 70 23 77
		f 4 -63 70 -41 -4
		mu 0 4 66 38 5 4
		f 4 53 -42 34 -45
		mu 0 4 90 8 11 89
		f 4 75 60 2 -68
		mu 0 4 13 41 35 14
		f 4 68 -53 -1 -61
		mu 0 4 42 1 0 43
		f 4 -46 -54 -2 -36
		mu 0 4 44 8 90 91
		f 4 -47 -55 45 -8
		mu 0 4 46 9 8 44
		f 4 -66 73 66 8
		mu 0 4 18 17 54 15
		f 4 -57 -9 17 18
		mu 0 4 79 67 71 56
		f 4 -58 -19 25 26
		mu 0 4 32 25 80 57
		f 4 14 -59 -23 -21
		mu 0 4 36 82 28 37
		f 4 0 -60 -15 -13
		mu 0 4 59 20 19 81
		f 4 1 -62 -69 -5
		mu 0 4 45 39 1 42
		f 4 -70 61 44 5
		mu 0 4 2 1 39 40
		f 4 -71 -6 -35 -64
		mu 0 4 5 38 47 48
		f 4 -72 63 -7 -65
		mu 0 4 6 5 48 49
		f 4 -73 64 10 55
		mu 0 4 17 16 10 50
		f 4 -74 -56 46 11
		mu 0 4 54 17 50 51
		f 4 42 -75 -12 7
		mu 0 4 52 13 12 58
		f 4 4 -76 -43 35
		mu 0 4 53 41 13 52;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".dmb" yes;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Misc_Server_Face_geo" -p "MiscServer_TSFinished_01_grp";
	rename -uid "3A7AF3E9-46C2-603D-74A0-6798BD7467BB";
createNode transform -n "UpperLeft_geo" -p "Misc_Server_Face_geo";
	rename -uid "43581513-4DED-48CF-DD5F-BCA8BCAF5141";
createNode mesh -n "UpperLeft_geoShape" -p "UpperLeft_geo";
	rename -uid "4B36FF68-4CE7-4AA3-C7AA-02AF6412A4FA";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.87934783101081848 0.57889586687088013 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 4 ".uvst[0].uvsp[0:3]" -type "float2" 0.75898093 0.32479811
		 0.99971473 0.32479811 0.99971473 0.57619369 0.75898093 0.57619369;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".vt[0:3]"  -0.5 0.69999999 0.46179038 -0.5 1.37512422 0.46179038
		 -0.98223162 1.37512422 0.46179038 -0.98223162 0.69999999 0.46179038;
	setAttr -s 4 ".ed[0:3]"  3 0 0 1 0 0 2 1 0 3 2 0;
	setAttr -ch 4 ".fc[0]" -type "polyFaces" 
		f 4 0 -2 -3 -4
		mu 0 4 0 1 2 3;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "LowerLeft_geo" -p "Misc_Server_Face_geo";
	rename -uid "F070DB86-4378-D826-3B7F-D4B16461D828";
createNode mesh -n "LowerLeft_geoShape" -p "LowerLeft_geo";
	rename -uid "8D7D8614-4D58-EB0B-104E-298A420C4AA7";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.87989556789398193 0.84608069668149566 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 4 ".uvst[0].uvsp[0:3]" -type "float2" 0.75898093 0.57813573
		 0.99971473 0.57813573 0.99971473 0.84608066 0.75898093 0.84608078;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".vt[0:3]"  -0.5 0.024875831 0.46179038 -0.98223162 0.024875831 0.46179038
		 -0.5 0.69999999 0.46179038 -0.98223162 0.69999999 0.46179038;
	setAttr -s 4 ".ed[0:3]"  2 0 0 1 0 0 1 3 0 3 2 0;
	setAttr -ch 4 ".fc[0]" -type "polyFaces" 
		f 4 1 -1 -4 -3
		mu 0 4 0 1 2 3;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "LowerRight_geo" -p "Misc_Server_Face_geo";
	rename -uid "0D7735A4-4D9F-C825-D77E-3790EC448663";
createNode mesh -n "LowerRight_geoShape" -p "LowerRight_geo";
	rename -uid "79CAE3DE-4182-EA7D-76F6-019C85C8FB98";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.87989285588264465 0.41038693038690166 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 4 ".uvst[0].uvsp[0:3]" -type "float2" 0.75898093 0.41038692
		 0.75898093 0.15745604 0.99971473 0.15745604 0.99971473 0.41038692;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".vt[0:3]"  -0.017768441 0.69999999 0.46179038 -0.017768441 0.024875831 0.46179038
		 -0.5 0.69999999 0.46179038 -0.5 0.024875831 0.46179038;
	setAttr -s 4 ".ed[0:3]"  2 0 0 3 1 0 1 0 0 2 3 0;
	setAttr -ch 4 ".fc[0]" -type "polyFaces" 
		f 4 3 1 2 -1
		mu 0 4 0 1 2 3;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "UpperRight_geo" -p "Misc_Server_Face_geo";
	rename -uid "827BEE02-4358-DF4E-52EA-E8A977EA06DB";
createNode mesh -n "UpperRight_geoShape" -p "UpperRight_geo";
	rename -uid "A29381EB-4353-6C0A-7B68-B8AF1DBF6044";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.87913234294800524 0.85218450427055359 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 4 ".uvst[0].uvsp[0:3]" -type "float2" 0.75898093 1.00033569336
		 0.75898093 0.70470476 0.99971473 0.70470476 0.99971473 1.00033569336;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".vt[0:3]"  -0.017768441 1.37512422 0.46179038 -0.5 1.37512422 0.46179038
		 -0.5 0.69999999 0.46179038 -0.017768441 0.69999999 0.46179038;
	setAttr -s 4 ".ed[0:3]"  3 0 0 1 0 0 1 2 0 2 3 0;
	setAttr -ch 4 ".fc[0]" -type "polyFaces" 
		f 4 2 3 0 -2
		mu 0 4 0 1 2 3;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "B20A9965-4520-79D1-A985-7AB18CA0FCFA";
	setAttr ".v" no;
createNode transform -n "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grp" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "D5A4265A-41F7-81D0-BB5F-2089FB48CC71";
createNode mesh -n "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grpShape" 
		-p "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grp";
	rename -uid "FE1CE27D-4A29-6AEB-34C0-FC9CB6D03D18";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 4 ".uvst[0].uvsp[0:3]" -type "float2" 0 0 0.51724601 0
		 0.51748699 0.15686101 0 0.15686101;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 4 ".vt[0:3]"  -6 -6 -9.7999998e-07 -6 -4.126863 -6.5e-07
		 0.21096854 -4.12686253 -6.5e-07 0.21096832 -6 -9.7999998e-07;
	setAttr -s 4 ".ed[0:3]"  0 3 0 3 2 0 2 1 0 1 0 0;
	setAttr -s 4 ".n[0:3]" -type "float3"  0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -ch 4 ".fc[0]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_B" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "92FCA513-40E6-9F46-DDC3-A38F5AA8780E";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_BShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_B";
	rename -uid "EA73055B-44F6-A8CA-368A-CAA5559940D8";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:1]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75862300395965576 0.03875349834561348 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 6 ".uvst[0].uvsp[0:5]" -type "float2" 0.51736599 0.077506997
		 0.51724601 1e-06 0.758641 1e-06 0.758641 0.077506997 1 0.077506997 1 0;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 6 ".vt[0:5]"  0.21096802 -5.063430786 -9.7999998e-07 3.10479879 -6 -8.1999997e-07
		 0.21096802 -5.99999952 -8.1999997e-07 6 -6 -8.1999997e-07 6 -5.063430786 -9.7999998e-07
		 3.10548401 -5.063431263 -9.7999998e-07;
	setAttr -s 7 ".ed[0:6]"  0 2 0 2 1 0 1 5 0 5 0 0 4 5 0 1 3 0 3 4 0;
	setAttr -s 8 ".n[0:7]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 2 -ch 8 ".fc[0:1]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -3 5 6
		mu 0 4 4 3 2 5;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_C" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "BE1EBB76-420D-33E1-CC7A-DEBE01A93CC4";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_CShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_C";
	rename -uid "D0C229D8-4EC2-E910-360E-3AA0BCE32A94";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:1]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 6 ".uvst[0].uvsp[0:5]" -type "float2" 1 0.15686101 0.758641
		 0.15686101 0.758641 0.077506997 1 0.077506997 0.51748598 0.15686101 0.51736599 0.077506997;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 6 ".vt[0:5]"  6 -4.126863 -6.5e-07 3.10616946 -5.063431263 -8.1999997e-07
		 6 -5.063431263 -8.1999997e-07 0.21096832 -5.063431263 -8.1999997e-07 3.10616946 -4.126863 -6.5e-07
		 0.21096832 -4.126863 -6.5e-07;
	setAttr -s 7 ".ed[0:6]"  0 4 0 4 1 0 1 2 0 2 0 0 4 5 0 5 3 0 3 1 0;
	setAttr -s 8 ".n[0:7]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 2 -ch 8 ".fc[0:1]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 -2
		mu 0 4 1 4 5 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_D" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "3859CA73-4CAA-FBE5-0E43-44BEB32B54A4";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_DShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_D";
	rename -uid "6403D0DD-494C-64BD-6FCA-AFBF64B3760A";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.51748699 0.24319801
		 0.278043 0.24319801 0.278043 0.15686101 0.51748699 0.15686101 1 0.24319801 0.758641
		 0.24319801 0.758641 0.15686101 1 0.15686101 0.022531001 0.24319801 0 0.24319801 0
		 0.15686101 0.022531001 0.15686101 0.257296 0.24319801 0.257296 0.15686101;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  -6 -4.126863 -6.5e-07 6 -4.126863 -6.5e-07
		 3.10616946 -4.126863 -6.5e-07 0.21233933 -3.11417627 -4.8000004e-07 0.21233933 -4.126863 -6.5e-07
		 6 -3.11417627 -4.8000004e-07 -6 -3.11417627 -4.8000004e-07 3.10616946 -3.11417627 -4.8000004e-07
		 -2.64123058 -4.126863 -6.5e-07 -2.64123058 -3.11417627 -4.8000004e-07 -2.93474555 -4.126863 -6.5e-07
		 -2.93474555 -3.11417627 -4.8000004e-07 -5.71099377 -4.126863 -6.5e-07 -5.71099377 -3.11417627 -4.8000004e-07;
	setAttr -s 19 ".ed[0:18]"  3 9 0 9 8 0 8 4 0 4 3 0 5 7 0 7 2 0 2 1 0
		 1 5 0 13 6 0 6 0 0 0 12 0 12 13 0 7 3 0 4 2 0 9 11 0 11 10 0 10 8 0 11 13 0 12 10 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 8 9 10 11
		mu 0 4 8 9 10 11
		f 4 12 -4 13 -6
		mu 0 4 5 0 3 6
		f 4 14 15 16 -2
		mu 0 4 1 12 13 2
		f 4 17 -12 18 -16
		mu 0 4 12 8 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_E" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "DDA619B2-4E4A-3EA7-9FDC-199FC90F3AB7";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_EShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_E";
	rename -uid "29EE82E0-4141-A28A-525D-DABEBE82D289";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.51748699 0.281055
		 0.278043 0.281055 0.278043 0.24319801 0.51748699 0.24319801 0.758641 0.281055 0.758641
		 0.24319801 0.022531001 0.281055 0 0.281055 0 0.24319801 0.022531001 0.24319801 1
		 0.281055 1 0.24319801 0.257296 0.281055 0.257296 0.24319801;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  0.21233933 -3.11417627 -4.8000004e-07 6 -3.11417627 -4.8000004e-07
		 -6 -3.11417627 -4.8000004e-07 3.10616946 -3.11417627 -4.8000004e-07 -2.64123058 -3.11417627 -4.8000004e-07
		 -2.93474555 -3.11417627 -4.8000004e-07 -5.71099377 -3.11417627 -4.8000004e-07 6 -2.60783315 -3.9e-07
		 0.21233946 -2.60783315 -3.9e-07 -6 -2.60783315 -3.9e-07 3.10616994 -2.60783315 -3.9e-07
		 -2.64123058 -2.60783315 -3.9e-07 -2.93474555 -2.60783315 -3.9e-07 -5.71099377 -2.60783315 -3.9e-07;
	setAttr -s 19 ".ed[0:18]"  8 11 0 11 4 0 4 0 0 0 8 0 10 8 0 0 3 0 3 10 0
		 13 9 0 9 2 0 2 6 0 6 13 0 7 10 0 3 1 0 1 7 0 11 12 0 12 5 0 5 4 0 12 13 0 6 5 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -4 5 6
		mu 0 4 4 0 3 5
		f 4 7 8 9 10
		mu 0 4 6 7 8 9
		f 4 11 -7 12 13
		mu 0 4 10 4 5 11
		f 4 14 15 16 -2
		mu 0 4 1 12 13 2
		f 4 17 -11 18 -16
		mu 0 4 12 6 9 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_F" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "880188EF-4C8F-91B6-62F5-EC80566C0FAC";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_FShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_F";
	rename -uid "AF47091A-4689-071D-C337-18B537E66A95";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.257296 0.32526201
		 0.022531001 0.32526201 0.022531001 0.281055 0.257296 0.281055 0.278043 0.32526201
		 0.278043 0.281055 1 0.32526201 0.758641 0.32526201 0.758641 0.281055 1 0.281055 0
		 0.32526201 0 0.281055 0.51748699 0.32526201 0.51748699 0.281055;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 -2.10149026 -3.0999999e-07 -6 -2.10149026 -3.0999999e-07
		 3.10616994 -2.10149026 -3.0999999e-07 0.21233954 -2.10149026 -3.0999999e-07 -2.64123058 -2.10149026 -3.0999999e-07
		 -2.93474555 -2.10149026 -3.0999999e-07 -5.71099377 -2.10149026 -3.0999999e-07 6 -2.60783315 -3.9e-07
		 0.21233946 -2.60783315 -3.9e-07 -6 -2.60783315 -3.9e-07 3.10616994 -2.60783315 -3.9e-07
		 -2.64123058 -2.60783315 -3.9e-07 -2.93474555 -2.60783315 -3.9e-07 -5.71099377 -2.60783315 -3.9e-07;
	setAttr -s 19 ".ed[0:18]"  5 6 0 6 13 0 13 12 0 12 5 0 4 5 0 12 11 0
		 11 4 0 0 2 0 2 10 0 10 7 0 7 0 0 6 1 0 1 9 0 9 13 0 2 3 0 3 8 0 8 10 0 3 4 0 11 8 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -4 5 6
		mu 0 4 4 0 3 5
		f 4 7 8 9 10
		mu 0 4 6 7 8 9
		f 4 11 12 13 -2
		mu 0 4 1 10 11 2
		f 4 14 15 16 -9
		mu 0 4 7 12 13 8
		f 4 17 -7 18 -16
		mu 0 4 12 4 5 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_G" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "66329396-4393-14B8-A13C-E184E573F8AF";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_GShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_G";
	rename -uid "A815C1F4-472D-AE7B-59E7-E88E23CEFAAD";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.758641 0.40888101
		 0.758641 0.32526201 1 0.32526201 1 0.40888101 0.51748699 0.40888101 0.51748699 0.32526201
		 0.278043 0.40888101 0.278043 0.32526201 0.257296 0.40888101 0.257296 0.32526201 0.022531001
		 0.40888101 0.022531001 0.32526201 0 0.40888101 0 0.32526201;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  -6 -1.088803887 -1.4e-07 6 -1.088803887 -1.4e-07
		 6 -2.10149026 -3.0999999e-07 -6 -2.10149026 -3.0999999e-07 3.10616994 -2.10149026 -3.0999999e-07
		 3.10616946 -1.088803887 -1.4e-07 0.21233954 -2.10149026 -3.0999999e-07 0.21233933 -1.088803887 -1.4e-07
		 -2.64123058 -1.088803887 -1.4e-07 -2.64123058 -2.10149026 -3.0999999e-07 -2.93474555 -2.10149026 -3.0999999e-07
		 -2.93474555 -1.088803887 -1.4e-07 -5.71099377 -2.10149026 -3.0999999e-07 -5.71099377 -1.088803887 -1.4e-07;
	setAttr -s 19 ".ed[0:18]"  5 4 0 4 2 0 2 1 0 1 5 0 7 6 0 6 4 0 5 7 0
		 8 9 0 9 6 0 7 8 0 11 10 0 10 9 0 8 11 0 13 12 0 12 10 0 11 13 0 0 3 0 3 12 0 13 0 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 -1 6
		mu 0 4 4 5 1 0
		f 4 7 8 -5 9
		mu 0 4 6 7 5 4
		f 4 10 11 -8 12
		mu 0 4 8 9 7 6
		f 4 13 14 -11 15
		mu 0 4 10 11 9 8
		f 4 16 17 -14 18
		mu 0 4 12 13 11 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_H" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "A740C164-429C-0C33-EF01-65A50357F433";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_HShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_H";
	rename -uid "6E07EA7A-474D-D8C2-C37E-80A5BC750BE4";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.758641 0.577842
		 0.758641 0.40888101 1 0.40888101 1 0.577842 0.278043 0.577842 0.278043 0.40888101
		 0.51748699 0.40888101 0.51748699 0.577842 0.257296 0.577842 0.257296 0.40888101 0.022531001
		 0.577842 0.022531001 0.40888101 0 0.577842 0 0.40888101;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  -6 -1.088803887 -1.4e-07 6 -1.088803887 -1.4e-07
		 3.10616946 -1.088803887 -1.4e-07 0.21233933 0.93656862 1.9999999e-07 6 0.93656862 1.9999999e-07
		 0.21233933 -1.088803887 -1.4e-07 -6 0.93656862 1.9999999e-07 3.10616946 0.93656862 1.9999999e-07
		 -2.64123058 -1.088803887 -1.4e-07 -2.64123058 0.93656862 1.9999999e-07 -2.93474555 -1.088803887 -1.4e-07
		 -2.93474555 0.93656862 1.9999999e-07 -5.71099377 -1.088803887 -1.4e-07 -5.71099377 0.93656862 1.9999999e-07;
	setAttr -s 19 ".ed[0:18]"  7 2 0 2 1 0 1 4 0 4 7 0 9 8 0 8 5 0 5 3 0
		 3 9 0 5 2 0 7 3 0 11 10 0 10 8 0 9 11 0 13 12 0 12 10 0 11 13 0 6 0 0 0 12 0 13 6 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 -7 8 -1 9
		mu 0 4 7 6 1 0
		f 4 10 11 -5 12
		mu 0 4 8 9 5 4
		f 4 13 14 -11 15
		mu 0 4 10 11 9 8
		f 4 16 17 -14 18
		mu 0 4 12 13 11 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_I" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "EC41CF08-47AA-A75E-4F5A-9BBD4D63B0FB";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_IShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_I";
	rename -uid "DE2187C2-4F2F-C94B-7F55-A396D6798D06";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.2780430018901825 0.66204798221588135 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.51748699 0.577842
		 0.758641 0.577842 0.758641 0.66204798 0.51748699 0.66204798 1 0.577842 1 0.66204798
		 0.257296 0.66204798 0.257296 0.577842 0.278043 0.577842 0.278043 0.66204798 0.022531001
		 0.66204798 0.022531001 0.577842 0 0.66204798 0 0.577842;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 1.94925511 3.7000001e-07 -6 1.94925511 3.7000001e-07
		 3.10616946 1.94925511 3.7000001e-07 0.21233933 0.93656862 1.9999999e-07 0.21233933 1.94925511 3.7000001e-07
		 6 0.93656862 1.9999999e-07 -6 0.93656862 1.9999999e-07 3.10616946 0.93656862 1.9999999e-07
		 -2.64123058 1.94925511 3.7000001e-07 -2.64123058 0.93656862 1.9999999e-07 -2.93474555 1.94925511 3.7000001e-07
		 -2.93474555 0.93656862 1.9999999e-07 -5.71099377 1.94925511 3.7000001e-07 -5.71099377 0.93656862 1.9999999e-07;
	setAttr -s 19 ".ed[0:18]"  3 7 0 7 2 0 2 4 0 4 3 0 7 5 0 5 0 0 0 2 0
		 10 11 0 11 9 0 9 8 0 8 10 0 9 3 0 4 8 0 12 13 0 13 11 0 10 12 0 1 6 0 6 13 0 12 1 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 -2 4 5 6
		mu 0 4 2 1 4 5
		f 4 7 8 9 10
		mu 0 4 6 7 8 9
		f 4 11 -4 12 -10
		mu 0 4 8 0 3 9
		f 4 13 14 -8 15
		mu 0 4 10 11 7 6
		f 4 16 17 -14 18
		mu 0 4 12 13 11 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_J" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "6C42FB99-4D00-D18A-A645-1DAC51C2DCEB";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_JShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_J";
	rename -uid "0010E9ED-4B2D-DF5C-C83D-29A0F3A64087";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.758641 0.66204798
		 1 0.66204798 1 0.70436901 0.758641 0.70436901 0.51748699 0.66204798 0.51748699 0.70436901
		 0.278043 0.66204798 0.278043 0.70436901 0.257296 0.66204798 0.257296 0.70436901 0.022531001
		 0.66204798 0.022531001 0.70436901 0 0.66204798 0 0.70436901;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 1.94925511 3.7000001e-07 -6 1.94925511 3.7000001e-07
		 -5.71099377 2.45559812 4.4000001e-07 -2.93474555 2.45559812 4.4000001e-07 -2.64123058 2.45559812 4.4000001e-07
		 3.10616946 1.94925511 3.7000001e-07 3.10616946 2.45559812 4.4000001e-07 0.21233933 1.94925511 3.7000001e-07
		 -2.64123058 1.94925511 3.7000001e-07 0.21233946 2.45559812 4.4000001e-07 -6 2.45559812 4.4000001e-07
		 -2.93474555 1.94925511 3.7000001e-07 6 2.45559812 4.4000001e-07 -5.71099377 1.94925511 3.7000001e-07;
	setAttr -s 19 ".ed[0:18]"  5 0 0 0 12 0 12 6 0 6 5 0 7 5 0 6 9 0 9 7 0
		 8 7 0 9 4 0 4 8 0 11 8 0 4 3 0 3 11 0 13 11 0 3 2 0 2 13 0 1 13 0 2 10 0 10 1 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -4 5 6
		mu 0 4 4 0 3 5
		f 4 7 -7 8 9
		mu 0 4 6 4 5 7
		f 4 10 -10 11 12
		mu 0 4 8 6 7 9
		f 4 13 -13 14 15
		mu 0 4 10 8 9 11
		f 4 16 -16 17 18
		mu 0 4 12 10 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_K" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "FC12CA76-4AF4-DB92-74C7-0FB2CFF5A3C6";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_KShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_K";
	rename -uid "E6563678-4B59-24EC-41BA-35A671B38FD5";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.758641 0.70436901
		 1 0.70436901 1 0.746333 0.758641 0.746333 0.51748699 0.70436901 0.51748699 0.746333
		 0.278043 0.70436901 0.278043 0.746333 0.257296 0.70436901 0.257296 0.746333 0.022531001
		 0.70436901 0.022531001 0.746333 0 0.70436901 0 0.746333;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 2.961941 5.2000001e-07 -6 2.961941 5.2000001e-07
		 -5.71099377 2.45559812 4.4000001e-07 -2.93474555 2.45559812 4.4000001e-07 -2.64123058 2.45559812 4.4000001e-07
		 3.10616994 2.961941 5.2000001e-07 0.21233954 2.961941 5.2000001e-07 3.10616946 2.45559812 4.4000001e-07
		 0.21233946 2.45559812 4.4000001e-07 -2.64123058 2.961941 5.2000001e-07 -6 2.45559812 4.4000001e-07
		 -2.93474555 2.961941 5.2000001e-07 6 2.45559812 4.4000001e-07 -5.71099377 2.961941 5.2000001e-07;
	setAttr -s 19 ".ed[0:18]"  7 12 0 12 0 0 0 5 0 5 7 0 8 7 0 5 6 0 6 8 0
		 4 8 0 6 9 0 9 4 0 3 4 0 9 11 0 11 3 0 2 3 0 11 13 0 13 2 0 10 2 0 13 1 0 1 10 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -4 5 6
		mu 0 4 4 0 3 5
		f 4 7 -7 8 9
		mu 0 4 6 4 5 7
		f 4 10 -10 11 12
		mu 0 4 8 6 7 9
		f 4 13 -13 14 15
		mu 0 4 10 8 9 11
		f 4 16 -16 17 18
		mu 0 4 12 10 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_L" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "69642C53-4E99-B3A3-204E-AA9C6A0E9E04";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_LShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_L";
	rename -uid "AF86B944-4C26-8E97-C97F-3FB81D08DC00";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.51748699 0.746333
		 0.51748699 0.915272 0.278043 0.915272 0.278043 0.746333 1 0.915272 0.758641 0.915272
		 0.758641 0.746333 1 0.746333 0.257296 0.746333 0.257296 0.915272 0.022531001 0.746333
		 0.022531001 0.915272 0 0.746333 0 0.915272;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 2.961941 5.2000001e-07 -6 2.961941 5.2000001e-07
		 -6 4.98731375 8.1999997e-07 6 4.98731375 8.1999997e-07 3.10616994 4.98731375 8.1999997e-07
		 3.10616994 2.961941 5.2000001e-07 0.21233954 2.961941 5.2000001e-07 0.21233954 4.98731375 8.1999997e-07
		 -2.64123058 4.98731375 8.1999997e-07 -2.64123058 2.961941 5.2000001e-07 -2.93474555 4.98731375 8.1999997e-07
		 -2.93474555 2.961941 5.2000001e-07 -5.71099377 4.98731375 8.1999997e-07 -5.71099377 2.961941 5.2000001e-07;
	setAttr -s 19 ".ed[0:18]"  6 7 0 7 8 0 8 9 0 9 6 0 3 4 0 4 5 0 5 0 0
		 0 3 0 4 7 0 6 5 0 11 9 0 8 10 0 10 11 0 13 11 0 10 12 0 12 13 0 1 13 0 12 2 0 2 1 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 -6 8 -1 9
		mu 0 4 6 5 1 0
		f 4 10 -3 11 12
		mu 0 4 8 3 2 9
		f 4 13 -13 14 15
		mu 0 4 10 8 9 11
		f 4 16 -16 17 18
		mu 0 4 12 10 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_M" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "31FC82FE-4862-C5CB-78C0-4F8481BFF78F";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_MShape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_M";
	rename -uid "56A07DD2-4B5E-773F-88BA-D98000ED3ADC";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.278043 0.915272
		 0.51748699 0.915272 0.51748699 1 0.278043 1 0.758641 0.915272 1 0.915272 1 1 0.758641
		 1 0.257296 0.915272 0.257296 1 0.022531001 0.915272 0.022531001 1 0 0.915272 0 1;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  -6 6 9.7999998e-07 6 6 9.7999998e-07 -6 4.98731375 8.1999997e-07
		 6 4.98731375 8.1999997e-07 3.10616994 4.98731375 8.1999997e-07 3.10616994 6 9.7999998e-07
		 0.21233954 6 9.7999998e-07 0.21233954 4.98731375 8.1999997e-07 -2.64123058 4.98731375 8.1999997e-07
		 -2.64123058 6 9.7999998e-07 -2.93474555 4.98731375 8.1999997e-07 -2.93474555 6 9.7999998e-07
		 -5.71099377 4.98731375 8.1999997e-07 -5.71099377 6 9.7999998e-07;
	setAttr -s 19 ".ed[0:18]"  8 7 0 7 6 0 6 9 0 9 8 0 4 3 0 3 1 0 1 5 0
		 5 4 0 7 4 0 5 6 0 10 8 0 9 11 0 11 10 0 12 10 0 11 13 0 13 12 0 2 12 0 13 0 0 0 2 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 8 -8 9 -2
		mu 0 4 1 4 7 2
		f 4 10 -4 11 12
		mu 0 4 8 0 3 9
		f 4 13 -13 14 15
		mu 0 4 10 8 9 11
		f 4 16 -16 17 18
		mu 0 4 12 10 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grp1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "B364F4EE-4DAC-6A60-9C16-86982E698919";
createNode mesh -n "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grp1Shape" 
		-p "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grp1";
	rename -uid "D172527B-4916-C0F9-D281-0ABF94435435";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 4 ".uvst[0].uvsp[0:3]" -type "float2" 0 0 0.51724601 0
		 0.51748699 0.15686101 0 0.15686101;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 4 ".vt[0:3]"  -6 -6 -9.7999998e-07 -6 -4.126863 -6.5e-07
		 0.21096854 -4.12686253 -6.5e-07 0.21096832 -6 -9.7999998e-07;
	setAttr -s 4 ".ed[0:3]"  0 3 0 3 2 0 2 1 0 1 0 0;
	setAttr -ch 4 ".fc[0]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_B1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "F8241682-4680-D747-C62D-1CBF5FC52BB5";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_B1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_B1";
	rename -uid "D83D2977-442D-66DB-0739-679162CE92CE";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:1]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 6 ".uvst[0].uvsp[0:5]" -type "float2" 0.51736599 0.077506997
		 0.51724601 1e-06 0.758641 1e-06 0.758641 0.077506997 1 0.077506997 1 0;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 6 ".vt[0:5]"  0.21096802 -5.063430786 -9.7999998e-07 3.10479879 -6 -8.1999997e-07
		 0.21096802 -5.99999952 -8.1999997e-07 6 -6 -8.1999997e-07 6 -5.063430786 -9.7999998e-07
		 3.10548401 -5.063431263 -9.7999998e-07;
	setAttr -s 7 ".ed[0:6]"  0 2 0 2 1 0 1 5 0 5 0 0 4 5 0 1 3 0 3 4 0;
	setAttr -s 8 ".n[0:7]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 2 -ch 8 ".fc[0:1]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -3 5 6
		mu 0 4 4 3 2 5;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_C1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "AED1E72A-4252-02F4-1AF4-D19DA6A361D0";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_C1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_C1";
	rename -uid "12E4F5AB-41A4-3178-2BEF-AC86467C6A88";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:1]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.75868299603462219 0.11718400195240974 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 6 ".uvst[0].uvsp[0:5]" -type "float2" 1 0.15686101 0.758641
		 0.15686101 0.758641 0.077506997 1 0.077506997 0.51748598 0.15686101 0.51736599 0.077506997;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 6 ".vt[0:5]"  6 -4.126863 -6.5e-07 3.10616946 -5.063431263 -8.1999997e-07
		 6 -5.063431263 -8.1999997e-07 0.21096832 -5.063431263 -8.1999997e-07 3.10616946 -4.126863 -6.5e-07
		 0.21096832 -4.126863 -6.5e-07;
	setAttr -s 7 ".ed[0:6]"  0 4 0 4 1 0 1 2 0 2 0 0 4 5 0 5 3 0 3 1 0;
	setAttr -s 8 ".n[0:7]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 2 -ch 8 ".fc[0:1]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 -2
		mu 0 4 1 4 5 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_D1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "F5314545-4852-2916-EC45-0489E4258E2A";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_D1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_D1";
	rename -uid "BD25E243-42AF-7FE9-9C61-68929FFED55E";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.25729599595069885 0.15686100721359253 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.51748699 0.24319801
		 0.278043 0.24319801 0.278043 0.15686101 0.51748699 0.15686101 1 0.24319801 0.758641
		 0.24319801 0.758641 0.15686101 1 0.15686101 0.022531001 0.24319801 0 0.24319801 0
		 0.15686101 0.022531001 0.15686101 0.257296 0.24319801 0.257296 0.15686101;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  -6 -4.126863 -6.5e-07 6 -4.126863 -6.5e-07
		 3.10616946 -4.126863 -6.5e-07 0.21233933 -3.11417627 -4.8000004e-07 0.21233933 -4.126863 -6.5e-07
		 6 -3.11417627 -4.8000004e-07 -6 -3.11417627 -4.8000004e-07 3.10616946 -3.11417627 -4.8000004e-07
		 -2.64123058 -4.126863 -6.5e-07 -2.64123058 -3.11417627 -4.8000004e-07 -2.93474555 -4.126863 -6.5e-07
		 -2.93474555 -3.11417627 -4.8000004e-07 -5.71099377 -4.126863 -6.5e-07 -5.71099377 -3.11417627 -4.8000004e-07;
	setAttr -s 19 ".ed[0:18]"  3 9 0 9 8 0 8 4 0 4 3 0 5 7 0 7 2 0 2 1 0
		 1 5 0 13 6 0 6 0 0 0 12 0 12 13 0 7 3 0 4 2 0 9 11 0 11 10 0 10 8 0 11 13 0 12 10 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 8 9 10 11
		mu 0 4 8 9 10 11
		f 4 12 -4 13 -6
		mu 0 4 5 0 3 6
		f 4 14 15 16 -2
		mu 0 4 1 12 13 2
		f 4 17 -12 18 -16
		mu 0 4 12 8 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_E1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "C34E860B-4D1A-23C1-E011-1EA8B7FFAEEF";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_E1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_E1";
	rename -uid "BD1027D6-4ABA-775A-B022-39B723DB7D6C";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.51748699 0.281055
		 0.278043 0.281055 0.278043 0.24319801 0.51748699 0.24319801 0.758641 0.281055 0.758641
		 0.24319801 0.022531001 0.281055 0 0.281055 0 0.24319801 0.022531001 0.24319801 1
		 0.281055 1 0.24319801 0.257296 0.281055 0.257296 0.24319801;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  0.21233933 -3.11417627 -4.8000004e-07 6 -3.11417627 -4.8000004e-07
		 -6 -3.11417627 -4.8000004e-07 3.10616946 -3.11417627 -4.8000004e-07 -2.64123058 -3.11417627 -4.8000004e-07
		 -2.93474555 -3.11417627 -4.8000004e-07 -5.71099377 -3.11417627 -4.8000004e-07 6 -2.60783315 -3.9e-07
		 0.21233946 -2.60783315 -3.9e-07 -6 -2.60783315 -3.9e-07 3.10616994 -2.60783315 -3.9e-07
		 -2.64123058 -2.60783315 -3.9e-07 -2.93474555 -2.60783315 -3.9e-07 -5.71099377 -2.60783315 -3.9e-07;
	setAttr -s 19 ".ed[0:18]"  8 11 0 11 4 0 4 0 0 0 8 0 10 8 0 0 3 0 3 10 0
		 13 9 0 9 2 0 2 6 0 6 13 0 7 10 0 3 1 0 1 7 0 11 12 0 12 5 0 5 4 0 12 13 0 6 5 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -4 5 6
		mu 0 4 4 0 3 5
		f 4 7 8 9 10
		mu 0 4 6 7 8 9
		f 4 11 -7 12 13
		mu 0 4 10 4 5 11
		f 4 14 15 16 -2
		mu 0 4 1 12 13 2
		f 4 17 -11 18 -16
		mu 0 4 12 6 9 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_F1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "FDFE6D20-4375-A052-3EA0-048143D37B1D";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_F1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_F1";
	rename -uid "327E22D9-4686-96E7-BA46-438A65FC1F59";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.257296 0.32526201
		 0.022531001 0.32526201 0.022531001 0.281055 0.257296 0.281055 0.278043 0.32526201
		 0.278043 0.281055 1 0.32526201 0.758641 0.32526201 0.758641 0.281055 1 0.281055 0
		 0.32526201 0 0.281055 0.51748699 0.32526201 0.51748699 0.281055;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 -2.10149026 -3.0999999e-07 -6 -2.10149026 -3.0999999e-07
		 3.10616994 -2.10149026 -3.0999999e-07 0.21233954 -2.10149026 -3.0999999e-07 -2.64123058 -2.10149026 -3.0999999e-07
		 -2.93474555 -2.10149026 -3.0999999e-07 -5.71099377 -2.10149026 -3.0999999e-07 6 -2.60783315 -3.9e-07
		 0.21233946 -2.60783315 -3.9e-07 -6 -2.60783315 -3.9e-07 3.10616994 -2.60783315 -3.9e-07
		 -2.64123058 -2.60783315 -3.9e-07 -2.93474555 -2.60783315 -3.9e-07 -5.71099377 -2.60783315 -3.9e-07;
	setAttr -s 19 ".ed[0:18]"  5 6 0 6 13 0 13 12 0 12 5 0 4 5 0 12 11 0
		 11 4 0 0 2 0 2 10 0 10 7 0 7 0 0 6 1 0 1 9 0 9 13 0 2 3 0 3 8 0 8 10 0 3 4 0 11 8 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -4 5 6
		mu 0 4 4 0 3 5
		f 4 7 8 9 10
		mu 0 4 6 7 8 9
		f 4 11 12 13 -2
		mu 0 4 1 10 11 2
		f 4 14 15 16 -9
		mu 0 4 7 12 13 8
		f 4 17 -7 18 -16
		mu 0 4 12 4 5 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_G1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "EEFEDA32-486E-362E-E3B8-949E2A960938";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_G1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_G1";
	rename -uid "3BEFDE69-43AD-0D96-E1BF-ECB3EF9BFCD3";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.36707150936126709 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.758641 0.40888101
		 0.758641 0.32526201 1 0.32526201 1 0.40888101 0.51748699 0.40888101 0.51748699 0.32526201
		 0.278043 0.40888101 0.278043 0.32526201 0.257296 0.40888101 0.257296 0.32526201 0.022531001
		 0.40888101 0.022531001 0.32526201 0 0.40888101 0 0.32526201;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  -6 -1.088803887 -1.4e-07 6 -1.088803887 -1.4e-07
		 6 -2.10149026 -3.0999999e-07 -6 -2.10149026 -3.0999999e-07 3.10616994 -2.10149026 -3.0999999e-07
		 3.10616946 -1.088803887 -1.4e-07 0.21233954 -2.10149026 -3.0999999e-07 0.21233933 -1.088803887 -1.4e-07
		 -2.64123058 -1.088803887 -1.4e-07 -2.64123058 -2.10149026 -3.0999999e-07 -2.93474555 -2.10149026 -3.0999999e-07
		 -2.93474555 -1.088803887 -1.4e-07 -5.71099377 -2.10149026 -3.0999999e-07 -5.71099377 -1.088803887 -1.4e-07;
	setAttr -s 19 ".ed[0:18]"  5 4 0 4 2 0 2 1 0 1 5 0 7 6 0 6 4 0 5 7 0
		 8 9 0 9 6 0 7 8 0 11 10 0 10 9 0 8 11 0 13 12 0 12 10 0 11 13 0 0 3 0 3 12 0 13 0 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 -1 6
		mu 0 4 4 5 1 0
		f 4 7 8 -5 9
		mu 0 4 6 7 5 4
		f 4 10 11 -8 12
		mu 0 4 8 9 7 6
		f 4 13 14 -11 15
		mu 0 4 10 11 9 8
		f 4 16 17 -14 18
		mu 0 4 12 13 11 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_H1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "E8892509-4C19-D2FC-29FB-9595722669A4";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_H1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_H1";
	rename -uid "7D14BC8F-47FA-E525-02C4-88A05300E5E6";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.51748698949813843 0.57784199714660645 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.758641 0.577842
		 0.758641 0.40888101 1 0.40888101 1 0.577842 0.278043 0.577842 0.278043 0.40888101
		 0.51748699 0.40888101 0.51748699 0.577842 0.257296 0.577842 0.257296 0.40888101 0.022531001
		 0.577842 0.022531001 0.40888101 0 0.577842 0 0.40888101;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  -6 -1.088803887 -1.4e-07 6 -1.088803887 -1.4e-07
		 3.10616946 -1.088803887 -1.4e-07 0.21233933 0.93656862 1.9999999e-07 6 0.93656862 1.9999999e-07
		 0.21233933 -1.088803887 -1.4e-07 -6 0.93656862 1.9999999e-07 3.10616946 0.93656862 1.9999999e-07
		 -2.64123058 -1.088803887 -1.4e-07 -2.64123058 0.93656862 1.9999999e-07 -2.93474555 -1.088803887 -1.4e-07
		 -2.93474555 0.93656862 1.9999999e-07 -5.71099377 -1.088803887 -1.4e-07 -5.71099377 0.93656862 1.9999999e-07;
	setAttr -s 19 ".ed[0:18]"  7 2 0 2 1 0 1 4 0 4 7 0 9 8 0 8 5 0 5 3 0
		 3 9 0 5 2 0 7 3 0 11 10 0 10 8 0 9 11 0 13 12 0 12 10 0 11 13 0 6 0 0 0 12 0 13 6 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 -7 8 -1 9
		mu 0 4 7 6 1 0
		f 4 10 11 -5 12
		mu 0 4 8 9 5 4
		f 4 13 14 -11 15
		mu 0 4 10 11 9 8
		f 4 16 17 -14 18
		mu 0 4 12 13 11 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_I1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "AB56BE05-41B3-E91E-BAC0-469A33BAC28A";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_I1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_I1";
	rename -uid "951BDB26-47A8-8197-21DE-45B826D9E559";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.51748699 0.577842
		 0.758641 0.577842 0.758641 0.66204798 0.51748699 0.66204798 1 0.577842 1 0.66204798
		 0.257296 0.66204798 0.257296 0.577842 0.278043 0.577842 0.278043 0.66204798 0.022531001
		 0.66204798 0.022531001 0.577842 0 0.66204798 0 0.577842;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 1.94925511 3.7000001e-07 -6 1.94925511 3.7000001e-07
		 3.10616946 1.94925511 3.7000001e-07 0.21233933 0.93656862 1.9999999e-07 0.21233933 1.94925511 3.7000001e-07
		 6 0.93656862 1.9999999e-07 -6 0.93656862 1.9999999e-07 3.10616946 0.93656862 1.9999999e-07
		 -2.64123058 1.94925511 3.7000001e-07 -2.64123058 0.93656862 1.9999999e-07 -2.93474555 1.94925511 3.7000001e-07
		 -2.93474555 0.93656862 1.9999999e-07 -5.71099377 1.94925511 3.7000001e-07 -5.71099377 0.93656862 1.9999999e-07;
	setAttr -s 19 ".ed[0:18]"  3 7 0 7 2 0 2 4 0 4 3 0 7 5 0 5 0 0 0 2 0
		 10 11 0 11 9 0 9 8 0 8 10 0 9 3 0 4 8 0 12 13 0 13 11 0 10 12 0 1 6 0 6 13 0 12 1 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 -2 4 5 6
		mu 0 4 2 1 4 5
		f 4 7 8 9 10
		mu 0 4 6 7 8 9
		f 4 11 -4 12 -10
		mu 0 4 8 0 3 9
		f 4 13 14 -8 15
		mu 0 4 10 11 7 6
		f 4 16 17 -14 18
		mu 0 4 12 13 11 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_J1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "82929088-43C4-48F6-6306-C795BEE72AC4";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_J1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_J1";
	rename -uid "C30E216E-4B2F-FB39-2956-25A3A3F6A91E";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.758641 0.66204798
		 1 0.66204798 1 0.70436901 0.758641 0.70436901 0.51748699 0.66204798 0.51748699 0.70436901
		 0.278043 0.66204798 0.278043 0.70436901 0.257296 0.66204798 0.257296 0.70436901 0.022531001
		 0.66204798 0.022531001 0.70436901 0 0.66204798 0 0.70436901;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 1.94925511 3.7000001e-07 -6 1.94925511 3.7000001e-07
		 -5.71099377 2.45559812 4.4000001e-07 -2.93474555 2.45559812 4.4000001e-07 -2.64123058 2.45559812 4.4000001e-07
		 3.10616946 1.94925511 3.7000001e-07 3.10616946 2.45559812 4.4000001e-07 0.21233933 1.94925511 3.7000001e-07
		 -2.64123058 1.94925511 3.7000001e-07 0.21233946 2.45559812 4.4000001e-07 -6 2.45559812 4.4000001e-07
		 -2.93474555 1.94925511 3.7000001e-07 6 2.45559812 4.4000001e-07 -5.71099377 1.94925511 3.7000001e-07;
	setAttr -s 19 ".ed[0:18]"  5 0 0 0 12 0 12 6 0 6 5 0 7 5 0 6 9 0 9 7 0
		 8 7 0 9 4 0 4 8 0 11 8 0 4 3 0 3 11 0 13 11 0 3 2 0 2 13 0 1 13 0 2 10 0 10 1 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -4 5 6
		mu 0 4 4 0 3 5
		f 4 7 -7 8 9
		mu 0 4 6 4 5 7
		f 4 10 -10 11 12
		mu 0 4 8 6 7 9
		f 4 13 -13 14 15
		mu 0 4 10 8 9 11
		f 4 16 -16 17 18
		mu 0 4 12 10 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_K1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "4D79BEA1-4ADA-A1C5-A5E8-10BE37148BE5";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_K1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_K1";
	rename -uid "7563DD32-4718-8403-4457-A086169FD8A1";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.758641 0.70436901
		 1 0.70436901 1 0.746333 0.758641 0.746333 0.51748699 0.70436901 0.51748699 0.746333
		 0.278043 0.70436901 0.278043 0.746333 0.257296 0.70436901 0.257296 0.746333 0.022531001
		 0.70436901 0.022531001 0.746333 0 0.70436901 0 0.746333;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 2.961941 5.2000001e-07 -6 2.961941 5.2000001e-07
		 -5.71099377 2.45559812 4.4000001e-07 -2.93474555 2.45559812 4.4000001e-07 -2.64123058 2.45559812 4.4000001e-07
		 3.10616994 2.961941 5.2000001e-07 0.21233954 2.961941 5.2000001e-07 3.10616946 2.45559812 4.4000001e-07
		 0.21233946 2.45559812 4.4000001e-07 -2.64123058 2.961941 5.2000001e-07 -6 2.45559812 4.4000001e-07
		 -2.93474555 2.961941 5.2000001e-07 6 2.45559812 4.4000001e-07 -5.71099377 2.961941 5.2000001e-07;
	setAttr -s 19 ".ed[0:18]"  7 12 0 12 0 0 0 5 0 5 7 0 8 7 0 5 6 0 6 8 0
		 4 8 0 6 9 0 9 4 0 3 4 0 9 11 0 11 3 0 2 3 0 11 13 0 13 2 0 10 2 0 13 1 0 1 10 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 -4 5 6
		mu 0 4 4 0 3 5
		f 4 7 -7 8 9
		mu 0 4 6 4 5 7
		f 4 10 -10 11 12
		mu 0 4 8 6 7 9
		f 4 13 -13 14 15
		mu 0 4 10 8 9 11
		f 4 16 -16 17 18
		mu 0 4 12 10 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_L1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "98144CC2-47CF-D277-1056-F8AC35B606A4";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_L1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_L1";
	rename -uid "FAB9FA46-4957-2C66-00CF-508EC70F95D1";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.51748699 0.746333
		 0.51748699 0.915272 0.278043 0.915272 0.278043 0.746333 1 0.915272 0.758641 0.915272
		 0.758641 0.746333 1 0.746333 0.257296 0.746333 0.257296 0.915272 0.022531001 0.746333
		 0.022531001 0.915272 0 0.746333 0 0.915272;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  6 2.961941 5.2000001e-07 -6 2.961941 5.2000001e-07
		 -6 4.98731375 8.1999997e-07 6 4.98731375 8.1999997e-07 3.10616994 4.98731375 8.1999997e-07
		 3.10616994 2.961941 5.2000001e-07 0.21233954 2.961941 5.2000001e-07 0.21233954 4.98731375 8.1999997e-07
		 -2.64123058 4.98731375 8.1999997e-07 -2.64123058 2.961941 5.2000001e-07 -2.93474555 4.98731375 8.1999997e-07
		 -2.93474555 2.961941 5.2000001e-07 -5.71099377 4.98731375 8.1999997e-07 -5.71099377 2.961941 5.2000001e-07;
	setAttr -s 19 ".ed[0:18]"  6 7 0 7 8 0 8 9 0 9 6 0 3 4 0 4 5 0 5 0 0
		 0 3 0 4 7 0 6 5 0 11 9 0 8 10 0 10 11 0 13 11 0 10 12 0 12 13 0 1 13 0 12 2 0 2 1 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 -6 8 -1 9
		mu 0 4 6 5 1 0
		f 4 10 -3 11 12
		mu 0 4 8 3 2 9
		f 4 13 -13 14 15
		mu 0 4 10 8 9 11
		f 4 16 -16 17 18
		mu 0 4 12 10 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_M1" 
		-p "TS_MiscServer_Lowpoly_Ref_grp";
	rename -uid "8C5E4A31-4FCB-C3DB-7847-C3821A6AD7AF";
createNode mesh -n "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_M1Shape" 
		-p "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_M1";
	rename -uid "222D3EBB-45AE-AD54-12BF-E5887B743EBA";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:5]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.278043 0.915272
		 0.51748699 0.915272 0.51748699 1 0.278043 1 0.758641 0.915272 1 0.915272 1 1 0.758641
		 1 0.257296 0.915272 0.257296 1 0.022531001 0.915272 0.022531001 1 0 0.915272 0 1;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 14 ".vt[0:13]"  -6 6 9.7999998e-07 6 6 9.7999998e-07 -6 4.98731375 8.1999997e-07
		 6 4.98731375 8.1999997e-07 3.10616994 4.98731375 8.1999997e-07 3.10616994 6 9.7999998e-07
		 0.21233954 6 9.7999998e-07 0.21233954 4.98731375 8.1999997e-07 -2.64123058 4.98731375 8.1999997e-07
		 -2.64123058 6 9.7999998e-07 -2.93474555 4.98731375 8.1999997e-07 -2.93474555 6 9.7999998e-07
		 -5.71099377 4.98731375 8.1999997e-07 -5.71099377 6 9.7999998e-07;
	setAttr -s 19 ".ed[0:18]"  8 7 0 7 6 0 6 9 0 9 8 0 4 3 0 3 1 0 1 5 0
		 5 4 0 7 4 0 5 6 0 10 8 0 9 11 0 11 10 0 12 10 0 11 13 0 13 12 0 2 12 0 13 0 0 0 2 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 8 -8 9 -2
		mu 0 4 1 4 7 2
		f 4 10 -4 11 12
		mu 0 4 8 0 3 9
		f 4 13 -13 14 15
		mu 0 4 10 8 9 11
		f 4 16 -16 17 18
		mu 0 4 12 10 11 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "873E64CC-41CC-D260-B10A-FAA4DAE3032E";
	setAttr -s 8 ".lnk";
	setAttr -s 8 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "48B68436-4E52-DF61-3A32-61BA79534B83";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "E2ADC2CA-433E-A98A-D074-D798434F58D9";
createNode displayLayerManager -n "layerManager";
	rename -uid "47E118A8-491B-1F4A-9EC8-4ABCD0851A15";
	setAttr -s 2 ".dli[1]"  1;
	setAttr -s 2 ".dli";
createNode displayLayer -n "defaultLayer";
	rename -uid "E838BEBE-4780-03A0-D1D5-06852E0F190F";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "C67424C4-4F4B-FF96-BDD9-3CBEA482E04D";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "37AEB32E-426E-9F12-AB2E-B594B1EF4563";
	setAttr ".g" yes;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "F00DBEEC-426D-1037-CD59-2F99C223512C";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $nodeEditorPanelVisible = stringArrayContains(\"nodeEditorPanel1\", `getPanel -vis`);\n\tint    $nodeEditorWorkspaceControlOpen = (`workspaceControl -exists nodeEditorPanel1Window` && `workspaceControl -q -visible nodeEditorPanel1Window`);\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\n\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"top\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n"
		+ "            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n"
		+ "            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"side\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n"
		+ "            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n"
		+ "            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n"
		+ "            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"front\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n"
		+ "            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n"
		+ "            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n"
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 1\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1361\n            -height 976\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -docTag \"isolOutln_fromSeln\" \n            -showShapes 0\n            -showAssignedMaterials 0\n            -showTimeEditor 1\n            -showReferenceNodes 1\n            -showReferenceMembers 1\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -organizeByClip 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showParentContainers 0\n            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n"
		+ "            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -isSet 0\n            -isSetMember 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            -ignoreOutlinerColor 0\n            -renderFilterVisible 0\n            -renderFilterIndex 0\n            -selectionOrder \"chronological\" \n"
		+ "            -expandAttribute 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"Outliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"Outliner\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -showShapes 0\n            -showAssignedMaterials 0\n            -showTimeEditor 1\n            -showReferenceNodes 0\n            -showReferenceMembers 0\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -organizeByClip 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showParentContainers 0\n"
		+ "            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n"
		+ "            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            -ignoreOutlinerColor 0\n            -renderFilterVisible 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"graphEditor\" (localizedPanelLabel(\"Graph Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Graph Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showAssignedMaterials 0\n                -showTimeEditor 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -organizeByClip 1\n"
		+ "                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 1\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showParentContainers 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 0\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 1\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 1\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n"
		+ "                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 1\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                -renderFilterVisible 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"GraphEd\");\n            animCurveEditor -e \n                -displayValues 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -showPlayRangeShades \"on\" \n                -lockPlayRangeShades \"off\" \n                -smoothness \"fine\" \n                -resultSamples 1\n                -resultScreenSamples 0\n"
		+ "                -resultUpdate \"delayed\" \n                -showUpstreamCurves 1\n                -keyMinScale 1\n                -stackedCurvesMin -1\n                -stackedCurvesMax 1\n                -stackedCurvesSpace 0.2\n                -preSelectionHighlight 0\n                -constrainDrag 0\n                -valueLinesToggle 1\n                -highlightAffectedCurves 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dopeSheetPanel\" (localizedPanelLabel(\"Dope Sheet\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dope Sheet\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showAssignedMaterials 0\n                -showTimeEditor 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n"
		+ "                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -organizeByClip 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showParentContainers 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 0\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 1\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n"
		+ "                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                -renderFilterVisible 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"DopeSheetEd\");\n            dopeSheetEditor -e \n                -displayValues 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -outliner \"dopeSheetPanel1OutlineEd\" \n"
		+ "                -showSummary 1\n                -showScene 0\n                -hierarchyBelow 0\n                -showTicks 1\n                -selectionWindow 0 0 0 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"timeEditorPanel\" (localizedPanelLabel(\"Time Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Time Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"clipEditorPanel\" (localizedPanelLabel(\"Trax Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Trax Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = clipEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayValues 0\n                -snapTime \"none\" \n"
		+ "                -snapValue \"none\" \n                -initialized 0\n                -manageSequencer 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"sequenceEditorPanel\" (localizedPanelLabel(\"Camera Sequencer\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Camera Sequencer\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = sequenceEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayValues 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -initialized 0\n                -manageSequencer 1 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperGraphPanel\" (localizedPanelLabel(\"Hypergraph Hierarchy\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n"
		+ "\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypergraph Hierarchy\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"HyperGraphEd\");\n            hyperGraph -e \n                -graphLayoutStyle \"hierarchicalLayout\" \n                -orientation \"horiz\" \n                -mergeConnections 0\n                -zoom 1\n                -animateTransition 0\n                -showRelationships 1\n                -showShapes 0\n                -showDeformers 0\n                -showExpressions 0\n                -showConstraints 0\n                -showConnectionFromSelected 0\n                -showConnectionToSelected 0\n                -showConstraintLabels 0\n                -showUnderworld 0\n                -showInvisible 0\n                -transitionFrames 1\n                -opaqueContainers 0\n                -freeform 0\n                -imagePosition 0 0 \n                -imageScale 1\n                -imageEnabled 0\n                -graphType \"DAG\" \n                -heatMapDisplay 0\n                -updateSelection 1\n"
		+ "                -updateNodeAdded 1\n                -useDrawOverrideColor 0\n                -limitGraphTraversal -1\n                -range 0 0 \n                -iconSize \"smallIcons\" \n                -showCachedConnections 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperShadePanel\" (localizedPanelLabel(\"Hypershade\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypershade\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"visorPanel\" (localizedPanelLabel(\"Visor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Visor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"nodeEditorPanel\" (localizedPanelLabel(\"Node Editor\")) `;\n"
		+ "\tif ($nodeEditorPanelVisible || $nodeEditorWorkspaceControlOpen) {\n\t\tif (\"\" == $panelName) {\n\t\t\tif ($useSceneConfig) {\n\t\t\t\t$panelName = `scriptedPanel -unParent  -type \"nodeEditorPanel\" -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -connectNodeOnCreation 0\n                -connectOnDrop 0\n                -copyConnectionsOnPaste 0\n                -connectionStyle \"bezier\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -crosshairOnEdgeDragging 0\n"
		+ "                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -editorMode \"default\" \n                -hasWatchpoint 0\n                $editorName;\n\t\t\t}\n\t\t} else {\n\t\t\t$label = `panel -q -label $panelName`;\n\t\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -connectNodeOnCreation 0\n                -connectOnDrop 0\n                -copyConnectionsOnPaste 0\n                -connectionStyle \"bezier\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n"
		+ "                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -crosshairOnEdgeDragging 0\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -editorMode \"default\" \n                -hasWatchpoint 0\n                $editorName;\n\t\t\tif (!$useSceneConfig) {\n\t\t\t\tpanel -e -l $label $panelName;\n\t\t\t}\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"createNodePanel\" (localizedPanelLabel(\"Create Node\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Create Node\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"polyTexturePlacementPanel\" (localizedPanelLabel(\"UV Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"UV Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"renderWindowPanel\" (localizedPanelLabel(\"Render View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Render View\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"shapePanel\" (localizedPanelLabel(\"Shape Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tshapePanel -edit -l (localizedPanelLabel(\"Shape Editor\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"posePanel\" (localizedPanelLabel(\"Pose Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tposePanel -edit -l (localizedPanelLabel(\"Pose Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynRelEdPanel\" (localizedPanelLabel(\"Dynamic Relationships\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dynamic Relationships\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"relationshipPanel\" (localizedPanelLabel(\"Relationship Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Relationship Editor\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"referenceEditorPanel\" (localizedPanelLabel(\"Reference Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Reference Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"componentEditorPanel\" (localizedPanelLabel(\"Component Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Component Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynPaintScriptedPanelType\" (localizedPanelLabel(\"Paint Effects\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Paint Effects\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"scriptEditorPanel\" (localizedPanelLabel(\"Script Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Script Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"profilerPanel\" (localizedPanelLabel(\"Profiler Tool\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Profiler Tool\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"contentBrowserPanel\" (localizedPanelLabel(\"Content Browser\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Content Browser\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"Stereo\" (localizedPanelLabel(\"Stereo\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Stereo\")) -mbv $menusOkayInPanels  $panelName;\n{ string $editorName = ($panelName+\"Editor\");\n            stereoCameraView -e \n                -camera \"persp\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n"
		+ "                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 32768\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 4 4 \n                -bumpResolution 4 4 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 0\n                -occlusionCulling 0\n                -shadingModel 0\n"
		+ "                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -controllers 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n"
		+ "                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 0\n                -height 0\n                -sceneRenderFilter 0\n                -displayMode \"centerEye\" \n                -viewColor 0 0 0 1 \n                -useCustomBackground 1\n                $editorName;\n            stereoCameraView -e -viewSelected 0 $editorName;\n            stereoCameraView -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName; };\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n"
		+ "\t\t\t\t-userCreated false\n\t\t\t\t-defaultImage \"vacantCell.xP:/\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 1\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1361\\n    -height 976\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 1\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1361\\n    -height 976\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "1A22FD60-4701-1BA6-3942-7B9450195F12";
	setAttr ".b" -type "string" "playbackOptions -min 0 -max 120 -ast 0 -aet 200 ";
	setAttr ".st" 6;
createNode phong -n "M_DarkBlueGrey";
	rename -uid "A3956861-4253-1B53-9039-E5989032DDB3";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "miscserverSG";
	rename -uid "EDDB22C6-4DC6-D695-C1D8-98AE35A438D7";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo1";
	rename -uid "FB5D16FF-4ACF-4106-22AB-E08B38B97B41";
createNode phong -n "WorldGridMaterial";
	rename -uid "157E8172-40E2-64DC-E60D-D792DD6BE274";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "miscserverSG1";
	rename -uid "14521F51-4702-59D2-5493-A6A76C75AB2D";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo2";
	rename -uid "81B69620-44BA-54A9-DDD6-E1BC5839BB5D";
createNode groupId -n "groupId1";
	rename -uid "AF562A9B-442D-EE28-8EB5-1795474ACCF1";
	setAttr ".ihi" 0;
createNode groupId -n "groupId2";
	rename -uid "4866E948-4EC2-D228-D60D-D0818ED287D5";
	setAttr ".ihi" 0;
createNode displayLayer -n "layer1";
	rename -uid "63BC20C2-42A3-F3FC-DCDC-0BA106D9133F";
	setAttr ".dt" 1;
	setAttr ".do" 1;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "B4AC184D-4AED-6F95-5DD2-8A9CBAD39640";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".esi" 2;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "I:/Cavalry/Maya Project Files/Env/Exports/MiscServer";
	setAttr ".exf" -type "string" "MiscServer_01_SM_Low";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "3A7ACD3C-41E9-404D-885D-0CAF4F95AA4A";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "C3498E4A-402A-174E-F5CB-13BE1367655C";
	setAttr ".pn" -type "string" "TE Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 3;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode shadingEngine -n "MscSever_Lowpoly:initialShadingGroup";
	rename -uid "37040FE7-4D48-88D3-878B-1EAF85D65330";
	setAttr ".ihi" 0;
	setAttr -s 26 ".dsm";
	setAttr ".ro" yes;
	setAttr -s 26 ".gn";
createNode materialInfo -n "MscSever_Lowpoly:materialInfo1";
	rename -uid "0C337CB9-48F6-FD72-A494-AFB2F557052D";
createNode groupId -n "MscSever_Lowpoly:groupId1";
	rename -uid "A8C9025A-4930-351A-004A-34AFE01F0577";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId2";
	rename -uid "E86A5F78-410E-EDD9-E1E2-17A4FD8080C1";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId3";
	rename -uid "F8111517-4739-AF7D-5D5C-1B8AAA7FEDD5";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId4";
	rename -uid "754BD19E-4DCF-5601-C7B0-958127074470";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId5";
	rename -uid "312614D3-4BD0-00E9-A51C-72A71379C377";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId6";
	rename -uid "40875AC5-4D1A-3721-F8D6-85B9A9317390";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId7";
	rename -uid "675E1401-4AC1-EBBC-5473-CD9DB655FE73";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId8";
	rename -uid "C8225C4B-4E65-C32D-D7A3-C99BD6F684F4";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId9";
	rename -uid "84FDAB59-4D7D-83B8-D8C5-64AD5E3BA3C6";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId10";
	rename -uid "4DDAC6DC-4E39-1CA2-BF7D-70BE8A2A49E2";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId11";
	rename -uid "3E386C9C-44B2-411E-B36D-0096BC07AEAA";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId12";
	rename -uid "2C559B69-4026-C88E-E3AD-EB9711C8E8A6";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId13";
	rename -uid "401ACA0F-48C6-4F56-D271-0E86DF617F9B";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId14";
	rename -uid "E9D90ECA-45A4-3A67-3A03-4ABE755409F2";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId15";
	rename -uid "D5CEF0FF-4E17-0A5A-9357-EAB90C4AEB87";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId16";
	rename -uid "852E4B52-4EEA-4E2E-60FD-45A893D26710";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId17";
	rename -uid "24A00EA5-4D41-F492-EB1B-DAB99E8240D6";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId18";
	rename -uid "0CE6C0F6-46F9-0429-969F-D3B21EC0DAEA";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId19";
	rename -uid "49AA1B21-4EF7-22CB-DE10-009679F6D954";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId20";
	rename -uid "66E5C07B-4E0C-4E88-A5ED-62AF6526CEEA";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId21";
	rename -uid "F07E07DD-48D8-28F6-5F7C-95BE55B80764";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId22";
	rename -uid "84970983-4400-9CAA-D737-DBB626E2B5BB";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId23";
	rename -uid "46269E38-4E6F-69A6-CB3F-08A64EC9F3C0";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId24";
	rename -uid "287525BC-450C-0FEA-2722-D0B2D511C886";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId25";
	rename -uid "28A3F529-4133-506E-D932-78881B854A9E";
	setAttr ".ihi" 0;
createNode groupId -n "MscSever_Lowpoly:groupId26";
	rename -uid "898DDD66-47F3-D103-D5B8-2CB6A795CFA1";
	setAttr ".ihi" 0;
createNode lambert -n "MscSever_Lowpoly:initialShadingGroup1";
	rename -uid "6A4DD351-4E6D-BADC-B7C7-A9BB0C6879DD";
createNode lambert -n "TS_Msc_Server";
	rename -uid "242E7E89-4FF7-86D6-68D3-0CA62AFC9652";
createNode shadingEngine -n "lambert2SG";
	rename -uid "932F8ECD-4BBD-D2A5-B25B-CEB6D7499981";
	setAttr ".ihi" 0;
	setAttr -s 4 ".dsm";
	setAttr ".ro" yes;
	setAttr -s 4 ".gn";
createNode materialInfo -n "materialInfo3";
	rename -uid "35CEB012-48D6-F24B-62B2-9B9F9306AB2A";
createNode file -n "file1";
	rename -uid "994359B7-4BD4-49AA-AB32-5E8F122AB17E";
	setAttr ".ftn" -type "string" "Z:/UE4 Projects/Cavalry/Maya Project Files//Trimsheets/Exported Textures/Msc Server/MscSever_Lowpoly_Msc_Server_BaseColor.png";
	setAttr ".cs" -type "string" "sRGB";
createNode place2dTexture -n "place2dTexture1";
	rename -uid "61012651-44F6-0B28-7381-E4AC6AF66471";
createNode groupId -n "groupId16";
	rename -uid "479322F1-4816-BEC6-A485-828DA52403EA";
	setAttr ".ihi" 0;
createNode groupId -n "groupId17";
	rename -uid "EAE984DC-4DCE-00CD-F21A-CAAA76713A3E";
	setAttr ".ihi" 0;
createNode groupId -n "groupId15";
	rename -uid "2EE242CF-4DEC-5379-436F-75A10B97216F";
	setAttr ".ihi" 0;
createNode groupId -n "groupId14";
	rename -uid "F32AB8B4-41FB-DCC0-DB11-CA8740EA737D";
	setAttr ".ihi" 0;
createNode groupId -n "groupId23";
	rename -uid "16AC22A9-4EEB-6B84-6736-50A76ACAE8F5";
	setAttr ".ihi" 0;
createNode shadingEngine -n "lambert3SG";
	rename -uid "9F4355B8-43B2-7965-D976-729B2DE82789";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo4";
	rename -uid "12C3D3F6-405A-A826-B753-F8969C1994BD";
createNode lambert -n "TS_Metal";
	rename -uid "9581CADE-4D3B-24F3-4FD6-1FAE3671DE3C";
createNode shadingEngine -n "lambert4SG";
	rename -uid "9C42D14A-4394-EF6C-70F5-ABA5B1DF94AF";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo5";
	rename -uid "AA286E46-4DAD-FF85-D893-A284F8BC01D7";
createNode file -n "file2";
	rename -uid "D864941E-49C0-9D4A-F7E5-8786D663C1D1";
	setAttr ".ftn" -type "string" "Z:/UE4 Projects/Cavalry/Maya Project Files//Trimsheets/Metal/Texture/OcclusionRoughnessMetallic.png";
	setAttr ".cs" -type "string" "sRGB";
createNode place2dTexture -n "place2dTexture2";
	rename -uid "D004AED3-4459-54B3-D44A-74996DFE5CE2";
createNode nodeGraphEditorInfo -n "hyperShadePrimaryNodeEditorSavedTabsInfo";
	rename -uid "30EFC21F-4126-C59A-7CC3-D98840416356";
	setAttr ".tgi[0].tn" -type "string" "Untitled_1";
	setAttr ".tgi[0].vl" -type "double2" -227.84316123910986 -898.96031531601272 ;
	setAttr ".tgi[0].vh" -type "double2" 707.10910117810397 86.499572321819031 ;
	setAttr -s 9 ".tgi[0].ni";
	setAttr ".tgi[0].ni[0].x" 55.714286804199219;
	setAttr ".tgi[0].ni[0].y" 148.57142639160156;
	setAttr ".tgi[0].ni[0].nvs" 1923;
	setAttr ".tgi[0].ni[1].x" 361.42855834960938;
	setAttr ".tgi[0].ni[1].y" 127.14286041259766;
	setAttr ".tgi[0].ni[1].nvs" 1923;
	setAttr ".tgi[0].ni[2].x" 54.285713195800781;
	setAttr ".tgi[0].ni[2].y" 150;
	setAttr ".tgi[0].ni[2].nvs" 1923;
	setAttr ".tgi[0].ni[3].x" -560;
	setAttr ".tgi[0].ni[3].y" 127.14286041259766;
	setAttr ".tgi[0].ni[3].nvs" 1923;
	setAttr ".tgi[0].ni[4].x" -252.85714721679688;
	setAttr ".tgi[0].ni[4].y" 150;
	setAttr ".tgi[0].ni[4].nvs" 1923;
	setAttr ".tgi[0].ni[5].x" 608.5714111328125;
	setAttr ".tgi[0].ni[5].y" -287.14285278320312;
	setAttr ".tgi[0].ni[5].nvs" 1923;
	setAttr ".tgi[0].ni[6].x" -5.7142858505249023;
	setAttr ".tgi[0].ni[6].y" -264.28570556640625;
	setAttr ".tgi[0].ni[6].nvs" 1923;
	setAttr ".tgi[0].ni[7].x" -312.85714721679688;
	setAttr ".tgi[0].ni[7].y" -287.14285278320312;
	setAttr ".tgi[0].ni[7].nvs" 1923;
	setAttr ".tgi[0].ni[8].x" 301.42855834960938;
	setAttr ".tgi[0].ni[8].y" -264.28570556640625;
	setAttr ".tgi[0].ni[8].nvs" 1923;
select -ne :time1;
	setAttr ".o" 0;
select -ne :hardwareRenderingGlobals;
	setAttr ".otfna" -type "stringArray" 22 "NURBS Curves" "NURBS Surfaces" "Polygons" "Subdiv Surface" "Particles" "Particle Instance" "Fluids" "Strokes" "Image Planes" "UI" "Lights" "Cameras" "Locators" "Joints" "IK Handles" "Deformers" "Motion Trails" "Components" "Hair Systems" "Follicles" "Misc. UI" "Ornaments"  ;
	setAttr ".otfva" -type "Int32Array" 22 0 1 1 1 1 1
		 1 1 1 0 0 0 0 0 0 0 0 0
		 0 0 0 0 ;
	setAttr ".fprt" yes;
select -ne :renderPartition;
	setAttr -s 8 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 10 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderUtilityList1;
	setAttr -s 2 ".u";
select -ne :defaultRenderingList1;
select -ne :defaultTextureList1;
	setAttr -s 2 ".tx";
select -ne :initialShadingGroup;
	setAttr -s 2 ".dsm";
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
	setAttr ".ovt" no;
	setAttr ".povt" no;
select -ne :hardwareRenderGlobals;
	setAttr ".ctrs" 256;
	setAttr ".btrs" 512;
select -ne :ikSystem;
	setAttr -s 4 ".sol";
connectAttr "layer1.di" "REF.do";
connectAttr "groupId1.id" "REFShape.iog.og[0].gid";
connectAttr "miscserverSG.mwc" "REFShape.iog.og[0].gco";
connectAttr "groupId2.id" "REFShape.iog.og[1].gid";
connectAttr "miscserverSG1.mwc" "REFShape.iog.og[1].gco";
connectAttr "groupId16.id" "UpperLeft_geoShape.iog.og[0].gid";
connectAttr "lambert2SG.mwc" "UpperLeft_geoShape.iog.og[0].gco";
connectAttr "groupId17.id" "LowerLeft_geoShape.iog.og[0].gid";
connectAttr "lambert2SG.mwc" "LowerLeft_geoShape.iog.og[0].gco";
connectAttr "groupId15.id" "LowerRight_geoShape.iog.og[0].gid";
connectAttr "lambert2SG.mwc" "LowerRight_geoShape.iog.og[0].gco";
connectAttr "groupId14.id" "UpperRight_geoShape.iog.og[0].gid";
connectAttr "lambert2SG.mwc" "UpperRight_geoShape.iog.og[0].gco";
connectAttr "MscSever_Lowpoly:groupId26.id" "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grpShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grpShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId25.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_BShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_BShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId24.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_CShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_CShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId23.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_DShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_DShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId22.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_EShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_EShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId21.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_FShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_FShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId20.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_GShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_GShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId19.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_HShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_HShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId18.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_IShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_IShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId17.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_JShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_JShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId16.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_KShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_KShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId15.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_LShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_LShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId14.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_MShape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_MShape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId13.id" "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grp1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grp1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId12.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_B1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_B1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId11.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_C1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_C1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId10.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_D1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_D1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId9.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_E1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_E1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId8.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_F1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_F1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId7.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_G1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_G1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId6.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_H1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_H1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId5.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_I1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_I1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId4.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_J1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_J1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId3.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_K1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_K1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId2.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_L1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_L1Shape.iog.og[0].gco"
		;
connectAttr "MscSever_Lowpoly:groupId1.id" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_M1Shape.iog.og[0].gid"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup.mwc" "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_M1Shape.iog.og[0].gco"
		;
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "miscserverSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "miscserverSG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "MscSever_Lowpoly:initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert3SG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert4SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "miscserverSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "miscserverSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "MscSever_Lowpoly:initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert3SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert4SG.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "M_DarkBlueGrey.oc" "miscserverSG.ss";
connectAttr "groupId1.msg" "miscserverSG.gn" -na;
connectAttr "REFShape.iog.og[0]" "miscserverSG.dsm" -na;
connectAttr "miscserverSG.msg" "materialInfo1.sg";
connectAttr "M_DarkBlueGrey.msg" "materialInfo1.m";
connectAttr "WorldGridMaterial.oc" "miscserverSG1.ss";
connectAttr "groupId2.msg" "miscserverSG1.gn" -na;
connectAttr "REFShape.iog.og[1]" "miscserverSG1.dsm" -na;
connectAttr "miscserverSG1.msg" "materialInfo2.sg";
connectAttr "WorldGridMaterial.msg" "materialInfo2.m";
connectAttr "layerManager.dli[1]" "layer1.id";
connectAttr "MscSever_Lowpoly:initialShadingGroup1.oc" "MscSever_Lowpoly:initialShadingGroup.ss"
		;
connectAttr "MscSever_Lowpoly:groupId1.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId2.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId3.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId4.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId5.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId6.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId7.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId8.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId9.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId10.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId11.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId12.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId13.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId14.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId15.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId16.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId17.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId18.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId19.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId20.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId21.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId22.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId23.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId24.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId25.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:groupId26.msg" "MscSever_Lowpoly:initialShadingGroup.gn"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_M1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_L1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_K1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_J1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_I1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_H1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_G1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_F1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_E1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_D1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_C1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_B1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grp1Shape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_MShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_LShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_KShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_JShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_IShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_HShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_GShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_FShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_EShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_DShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_CShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:TrimSheet_Blockout_grpMscServer_Trim_BShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:MscServer_Trim_ATrimSheet_Blockout_grpShape.iog.og[0]" "MscSever_Lowpoly:initialShadingGroup.dsm"
		 -na;
connectAttr "MscSever_Lowpoly:initialShadingGroup.msg" "MscSever_Lowpoly:materialInfo1.sg"
		;
connectAttr "MscSever_Lowpoly:initialShadingGroup1.msg" "MscSever_Lowpoly:materialInfo1.m"
		;
connectAttr "file1.oc" "TS_Msc_Server.c";
connectAttr "TS_Msc_Server.oc" "lambert2SG.ss";
connectAttr "UpperRight_geoShape.iog.og[0]" "lambert2SG.dsm" -na;
connectAttr "LowerRight_geoShape.iog.og[0]" "lambert2SG.dsm" -na;
connectAttr "UpperLeft_geoShape.iog.og[0]" "lambert2SG.dsm" -na;
connectAttr "LowerLeft_geoShape.iog.og[0]" "lambert2SG.dsm" -na;
connectAttr "groupId14.msg" "lambert2SG.gn" -na;
connectAttr "groupId15.msg" "lambert2SG.gn" -na;
connectAttr "groupId16.msg" "lambert2SG.gn" -na;
connectAttr "groupId17.msg" "lambert2SG.gn" -na;
connectAttr "lambert2SG.msg" "materialInfo3.sg";
connectAttr "TS_Msc_Server.msg" "materialInfo3.m";
connectAttr "file1.msg" "materialInfo3.t" -na;
connectAttr ":defaultColorMgtGlobals.cme" "file1.cme";
connectAttr ":defaultColorMgtGlobals.cfe" "file1.cmcf";
connectAttr ":defaultColorMgtGlobals.cfp" "file1.cmcp";
connectAttr ":defaultColorMgtGlobals.wsn" "file1.ws";
connectAttr "place2dTexture1.c" "file1.c";
connectAttr "place2dTexture1.tf" "file1.tf";
connectAttr "place2dTexture1.rf" "file1.rf";
connectAttr "place2dTexture1.mu" "file1.mu";
connectAttr "place2dTexture1.mv" "file1.mv";
connectAttr "place2dTexture1.s" "file1.s";
connectAttr "place2dTexture1.wu" "file1.wu";
connectAttr "place2dTexture1.wv" "file1.wv";
connectAttr "place2dTexture1.re" "file1.re";
connectAttr "place2dTexture1.of" "file1.of";
connectAttr "place2dTexture1.r" "file1.ro";
connectAttr "place2dTexture1.n" "file1.n";
connectAttr "place2dTexture1.vt1" "file1.vt1";
connectAttr "place2dTexture1.vt2" "file1.vt2";
connectAttr "place2dTexture1.vt3" "file1.vt3";
connectAttr "place2dTexture1.vc1" "file1.vc1";
connectAttr "place2dTexture1.o" "file1.uv";
connectAttr "place2dTexture1.ofs" "file1.fs";
connectAttr "lambert3SG.msg" "materialInfo4.sg";
connectAttr "file2.oc" "TS_Metal.c";
connectAttr "TS_Metal.oc" "lambert4SG.ss";
connectAttr "Misc_Server_Body_geoShape.iog" "lambert4SG.dsm" -na;
connectAttr "lambert4SG.msg" "materialInfo5.sg";
connectAttr "TS_Metal.msg" "materialInfo5.m";
connectAttr "file2.msg" "materialInfo5.t" -na;
connectAttr ":defaultColorMgtGlobals.cme" "file2.cme";
connectAttr ":defaultColorMgtGlobals.cfe" "file2.cmcf";
connectAttr ":defaultColorMgtGlobals.cfp" "file2.cmcp";
connectAttr ":defaultColorMgtGlobals.wsn" "file2.ws";
connectAttr "place2dTexture2.c" "file2.c";
connectAttr "place2dTexture2.tf" "file2.tf";
connectAttr "place2dTexture2.rf" "file2.rf";
connectAttr "place2dTexture2.mu" "file2.mu";
connectAttr "place2dTexture2.mv" "file2.mv";
connectAttr "place2dTexture2.s" "file2.s";
connectAttr "place2dTexture2.wu" "file2.wu";
connectAttr "place2dTexture2.wv" "file2.wv";
connectAttr "place2dTexture2.re" "file2.re";
connectAttr "place2dTexture2.of" "file2.of";
connectAttr "place2dTexture2.r" "file2.ro";
connectAttr "place2dTexture2.n" "file2.n";
connectAttr "place2dTexture2.vt1" "file2.vt1";
connectAttr "place2dTexture2.vt2" "file2.vt2";
connectAttr "place2dTexture2.vt3" "file2.vt3";
connectAttr "place2dTexture2.vc1" "file2.vc1";
connectAttr "place2dTexture2.o" "file2.uv";
connectAttr "place2dTexture2.ofs" "file2.fs";
connectAttr "lambert3SG.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[0].dn"
		;
connectAttr "lambert2SG.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[1].dn"
		;
connectAttr "TS_Msc_Server.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[2].dn"
		;
connectAttr "place2dTexture1.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[3].dn"
		;
connectAttr "file1.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[4].dn"
		;
connectAttr "lambert4SG.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[5].dn"
		;
connectAttr "file2.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[6].dn"
		;
connectAttr "place2dTexture2.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[7].dn"
		;
connectAttr "TS_Metal.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[8].dn"
		;
connectAttr "miscserverSG.pa" ":renderPartition.st" -na;
connectAttr "miscserverSG1.pa" ":renderPartition.st" -na;
connectAttr "MscSever_Lowpoly:initialShadingGroup.pa" ":renderPartition.st" -na;
connectAttr "lambert2SG.pa" ":renderPartition.st" -na;
connectAttr "lambert3SG.pa" ":renderPartition.st" -na;
connectAttr "lambert4SG.pa" ":renderPartition.st" -na;
connectAttr "M_DarkBlueGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial.msg" ":defaultShaderList1.s" -na;
connectAttr "MscSever_Lowpoly:initialShadingGroup1.msg" ":defaultShaderList1.s" 
		-na;
connectAttr "TS_Msc_Server.msg" ":defaultShaderList1.s" -na;
connectAttr "TS_Metal.msg" ":defaultShaderList1.s" -na;
connectAttr "place2dTexture1.msg" ":defaultRenderUtilityList1.u" -na;
connectAttr "place2dTexture2.msg" ":defaultRenderUtilityList1.u" -na;
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "file1.msg" ":defaultTextureList1.tx" -na;
connectAttr "file2.msg" ":defaultTextureList1.tx" -na;
connectAttr "MiscServer1Shape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "MiscServer2Shape.iog" ":initialShadingGroup.dsm" -na;
// End of MiscServer.ma
