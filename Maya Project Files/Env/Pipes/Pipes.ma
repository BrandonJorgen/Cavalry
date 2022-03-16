//Maya ASCII 2022 scene
//Name: Pipes.ma
//Last modified: Tue, Mar 15, 2022 08:26:59 PM
//Codeset: 1252
requires maya "2022";
requires "stereoCamera" "10.0";
requires -nodeType "gameFbxExporter" "gameFbxExporter" "1.0";
requires "mtoa" "4.2.1";
currentUnit -l meter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2022";
fileInfo "version" "2022";
fileInfo "cutIdentifier" "202102181415-29bfc1879c";
fileInfo "osv" "Windows 10 Home v2009 (Build: 19043)";
fileInfo "UUID" "0A1F2310-4532-AD5E-CC2F-AFB76DC195D8";
createNode transform -s -n "persp";
	rename -uid "F569BF75-41BD-7730-AB7F-4BA8041D7E6A";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 4.8874156128993675 3.8979000237040364 5.4863132542009572 ;
	setAttr ".r" -type "double3" 335.66164649521949 6522.5999999993383 -2.1604179238603481e-15 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "AAB56E1C-42D4-DCFA-8D1C-83A4E4183F9C";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 8.3503153997702473;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".tp" -type "double3" -0.011605963110923767 0.024758306548429518 0 ;
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "396BD49B-47DE-8CE3-BCB2-808B399472AF";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 10.001000000000001 0 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "392BD7CA-42FA-D6B1-DD86-42831C2A44CE";
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
	rename -uid "23BA3368-4B8F-CB1C-15A2-799799DFC2BD";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 10.001000000000001 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "02E370F3-4731-DA18-F061-A4B93B9E2DDE";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 0.3;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "side";
	rename -uid "F3BBE9DA-4603-D846-E008-0D8486A9F0BF";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.001000000000001 0 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "CC77D1CB-403C-0244-91C3-83B77CB8F1F3";
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
createNode transform -n "Small";
	rename -uid "567DC64C-409A-EF31-5E97-21BC84DD53FA";
createNode transform -n "Small_Single" -p "Small";
	rename -uid "28ED8A37-4B48-DDBA-54C7-86B5B76260A8";
createNode mesh -n "Small_SingleShape" -p "Small_Single";
	rename -uid "7AD7DB56-4DEF-B44A-9C69-BE999FA48FEA";
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
	setAttr ".pv" -type "double2" 0.49998665131261205 0.11757074890825447 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.65275538 0.1715185
		 0.6527577 0.14455116 0.80553019 0.14456415 0.80552793 0.17153147 0.65275985 0.11758385
		 0.80553246 0.11759681 0.65276206 0.090616509 0.80553448 0.090629488 0.65276432 0.063648731
		 0.80553687 0.063662156 0.6527524 0.19848596 0.80552554 0.1984991 0.34720898 0.17149249
		 0.34721118 0.1445253 0.49998403 0.14453784 0.49998254 0.17150554 0.34721375 0.11755784
		 0.49998701 0.11757052 0.34721649 0.090590507 0.49998927 0.090603694 0.34721863 0.063623279
		 0.49999148 0.063636363 0.34720689 0.19845983 0.49999374 0.036668986 0.19443649 0.17147952
		 0.19443876 0.14451249 0.1944409 0.1175445 0.19444329 0.090577461 0.19444543 0.063610077
		 0.19444758 0.036642969 0.34722084 0.036656022 0.49997956 0.19847286 0.65276664 0.036681384
		 0.80553901 0.036694758 0.19443429 0.19844669;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 30 ".vt[0:29]"  0.022064896 0 -0.038217485 -0.022064865 0 -0.038217485
		 -0.044129793 0 -6.5758456e-09 -0.022064896 0 0.038217485 0.022064896 0 0.038217485
		 0.044129793 0 0 0.022064896 1 -0.038217485 -0.022064865 1 -0.038217485 -0.044129793 1 -6.5758456e-09
		 -0.022064896 1 0.038217485 0.022064896 1 0.038217485 0.044129793 1 0 0.022064896 0.5 -0.038217485
		 -0.022064865 0.5 -0.038217485 -0.044129793 0.5 -6.5758456e-09 -0.022064896 0.5 0.038217485
		 0.022064896 0.5 0.038217485 0.044129793 0.5 0 0.022064896 0.75 -0.038217485 -0.022064865 0.75 -0.038217485
		 -0.044129793 0.75 -6.5758456e-09 -0.022064896 0.75 0.038217485 0.022064896 0.75 0.038217485
		 0.044129793 0.75 0 0.022064896 0.25 -0.038217485 -0.022064865 0.25 -0.038217485 -0.044129793 0.25 -6.5758456e-09
		 -0.022064896 0.25 0.038217485 0.022064896 0.25 0.038217485 0.044129793 0.25 0;
	setAttr -s 54 ".ed[0:53]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 0 24 1 1 25 1 2 26 1 3 27 1 4 28 1 5 29 1 12 18 1
		 13 19 1 14 20 1 15 21 1 16 22 1 17 23 1 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1 17 12 1
		 18 6 1 19 7 1 20 8 1 21 9 1 22 10 1 23 11 1 18 19 1 19 20 1 20 21 1 21 22 1 22 23 1
		 23 18 1 24 12 1 25 13 1 26 14 1 27 15 1 28 16 1 29 17 1 24 25 1 25 26 1 26 27 1 27 28 1
		 28 29 1 29 24 1;
	setAttr -s 24 -ch 96 ".fc[0:23]" -type "polyFaces" 
		f 4 36 31 -7 -31
		mu 0 4 0 1 2 3
		f 4 37 32 -8 -32
		mu 0 4 1 4 5 2
		f 4 38 33 -9 -33
		mu 0 4 4 6 7 5
		f 4 39 34 -10 -34
		mu 0 4 6 8 9 7
		f 4 40 35 -11 -35
		mu 0 4 8 32 33 9
		f 4 41 30 -12 -36
		mu 0 4 10 0 3 11
		f 4 48 43 -25 -43
		mu 0 4 12 13 14 15
		f 4 49 44 -26 -44
		mu 0 4 13 16 17 14
		f 4 50 45 -27 -45
		mu 0 4 16 18 19 17
		f 4 51 46 -28 -46
		mu 0 4 18 20 21 19
		f 4 52 47 -29 -47
		mu 0 4 20 30 23 21
		f 4 53 42 -30 -48
		mu 0 4 22 12 15 31
		f 4 24 19 -37 -19
		mu 0 4 15 14 1 0
		f 4 25 20 -38 -20
		mu 0 4 14 17 4 1
		f 4 26 21 -39 -21
		mu 0 4 17 19 6 4
		f 4 27 22 -40 -22
		mu 0 4 19 21 8 6
		f 4 28 23 -41 -23
		mu 0 4 21 23 32 8
		f 4 29 18 -42 -24
		mu 0 4 31 15 0 10
		f 4 0 13 -49 -13
		mu 0 4 24 25 13 12
		f 4 1 14 -50 -14
		mu 0 4 25 26 16 13
		f 4 2 15 -51 -15
		mu 0 4 26 27 18 16
		f 4 3 16 -52 -16
		mu 0 4 27 28 20 18
		f 4 4 17 -53 -17
		mu 0 4 28 29 30 20
		f 4 5 12 -54 -18
		mu 0 4 34 24 12 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Small_Half" -p "Small";
	rename -uid "C3AB837A-4E01-F79B-A138-D1A3581CF826";
createNode mesh -n "Small_HalfShape" -p "Small_Half";
	rename -uid "B170A03A-4404-1B80-C3D3-0286A3FD9624";
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
	setAttr ".gtag[8].gtagcmp" -type "componentList" 0;
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 1 "e[6:11]";
	setAttr ".pv" -type "double2" 0.86257016658782959 0.048220440745353699 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 21 ".uvst[0].uvsp[0:20]" -type "float2" 0.49990496 0.063636184
		 0.499946 0.090603456 0.34717298 0.090834051 0.34713233 0.063866824 0.49998629 0.11757071
		 0.34721404 0.11780138 0.50002736 0.14453802 0.34725466 0.14476869 0.50006837 0.17150529
		 0.34729493 0.17173594 0.49986467 0.036668897 0.34709203 0.036899574 0.65267783 0.063405529
		 0.65271807 0.090372786 0.65275913 0.11734011 0.65280014 0.14430736 0.65284044 0.17127468
		 0.65288067 0.19824192 0.5001086 0.19847262 0.34733596 0.19870323 0.65263677 0.036438249;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  0.022064896 0 -0.038217485 -0.022064865 0 -0.038217485
		 -0.044129793 0 -6.5758456e-09 -0.022064896 0 0.038217485 0.022064896 0 0.038217485
		 0.044129793 0 0 0.022064896 0.5 -0.038217485 -0.022064865 0.5 -0.038217485 -0.044129793 0.5 -6.5758456e-09
		 -0.022064896 0.5 0.038217485 0.022064896 0.5 0.038217485 0.044129793 0.5 0 0.022064896 0.25 -0.038217485
		 -0.022064865 0.25 -0.038217485 -0.044129793 0.25 -6.5758456e-09 -0.022064896 0.25 0.038217485
		 0.022064896 0.25 0.038217485 0.044129793 0.25 0;
	setAttr -s 30 ".ed[0:29]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 0 12 1
		 1 13 1 2 14 1 3 15 1 4 16 1 5 17 1 6 7 0 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 12 6 1
		 13 7 1 14 8 1 15 9 1 16 10 1 17 11 1 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1 17 12 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 24 19 -13 -19
		mu 0 4 0 1 2 3
		f 4 25 20 -14 -20
		mu 0 4 1 4 5 2
		f 4 26 21 -15 -21
		mu 0 4 4 6 7 5
		f 4 27 22 -16 -22
		mu 0 4 6 8 9 7
		f 4 28 23 -17 -23
		mu 0 4 8 18 19 9
		f 4 29 18 -18 -24
		mu 0 4 10 0 3 11
		f 4 0 7 -25 -7
		mu 0 4 12 13 1 0
		f 4 1 8 -26 -8
		mu 0 4 13 14 4 1
		f 4 2 9 -27 -9
		mu 0 4 14 15 6 4
		f 4 3 10 -28 -10
		mu 0 4 15 16 8 6
		f 4 4 11 -29 -11
		mu 0 4 16 17 18 8
		f 4 5 6 -30 -12
		mu 0 4 20 12 0 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Small_Corner" -p "Small";
	rename -uid "92CE6682-4423-A35B-DC16-6FBBEA3DCFB3";
	setAttr ".rp" -type "double3" -0.012009046971797943 0 0 ;
	setAttr ".sp" -type "double3" -0.012009046971797943 1.7347234759768071e-16 0 ;
createNode mesh -n "Small_CornerShape" -p "Small_Corner";
	rename -uid "7FC56B11-4D6C-2939-1DA1-E186E92F3B13";
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
	setAttr ".pv" -type "double2" 0.47247028350830078 0.050756901502609253 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 73 ".uvst[0].uvsp[0:72]" -type "float2" 0.47153187 0.14030284
		 0.47534788 0.17420752 0.46482468 0.17417908 0.44994724 0.13934083 0.47576392 0.20808545
		 0.52122045 0.020932846 0.50749063 0.051647231 0.49830711 0.046508491 0.48752618 0.079315871
		 0.46824676 0.06956251 0.47465754 0.10853189 0.4502188 0.1021236 0.51315212 0.15118203
		 0.49676222 0.18023247 0.48722517 0.17558438 0.49347728 0.14436936 0.48230922 0.21071637
		 0.52797961 0.023636118 0.5291056 0.056907177 0.51851523 0.056276195 0.52912915 0.090262562
		 0.50864315 0.086542264 0.52374256 0.12140476 0.49958348 0.11506847 0.5317362 0.16079327
		 0.50605655 0.18638021 0.48655891 0.21377228 0.54022074 0.05611321 0.5500381 0.091010392
		 0.54946923 0.12815273 0.53640711 0.16377489 0.53204542 0.11757299 0.51601827 0.089807704
		 0.48395875 0.089805469 0.46792728 0.11756848 0.483955 0.14533371 0.46016169 0.17562214
		 0.52775097 0.10154523 0.51800233 0.018661387 0.49495214 0.042963207 0.46388322 0.066021517
		 0.44440138 0.10059814 0.51346993 0.14092785 0.52695578 0.11757261 0.51347291 0.094215453
		 0.4865036 0.094213545 0.47301698 0.11756884 0.4865002 0.140926 0.52333975 0.13105732
		 0.52334303 0.10408941 0.49998289 0.14453879 0.47663 0.13105169 0.47663343 0.10408372
		 0.49999002 0.090602636 0.4999904 0.085513115 0.4444077 0.14028504 0.47222593 0.10153851
		 0.47222215 0.13359591 0.46831912 0.20810679 0.49998254 0.14962839 0.52774715 0.13360262
		 0.47223723 0.20770633 0.55500388 0.12960455 0.51601434 0.14533596 0.55557078 0.090705469
		 0.54577559 0.055531077 0.49143535 0.21648011 0.5422551 0.022712141 0.53667736 0.022677265
		 0.51061022 0.18961422 0.47945291 0.20866731 0.52447951 0.022332549 0.53147447 0.023253247;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 54 ".vt[0:53]"  0.022064896 -2.4680048e-05 -0.038217485 -0.022064865 -4.9222261e-05 -0.038217481
		 -0.044129793 -4.9114227e-05 -5.2534403e-09 -0.022064896 -4.9222261e-05 0.038217485
		 0.022064896 -2.4680048e-05 0.038217485 0.044129793 -5.9604645e-08 0 -0.068147875 0.10488848 -0.038217485
		 -0.067982212 0.060758699 -0.038217485 -0.067707591 0.038693797 -5.9371814e-09 -0.067982212 0.060758661 0.038217485
		 -0.068147875 0.10488848 0.038217485 -0.068038911 0.12695339 0 -0.024014397 0.10054678 -0.046297606
		 -0.045605808 0.051038504 -0.046742707 -0.060266122 0.056469906 -0.04678411 -0.058746826 0.10994665 -0.04636823
		 -0.056936134 0.026206959 -1.8524275e-08 -0.061530408 0.02930963 -1.9162865e-08 -0.045605823 0.051038429 0.0467427
		 -0.060266126 0.056469873 0.04678411 -0.024014397 0.10054678 0.046297606 -0.058746826 0.10994665 0.046368238
		 -0.013656016 0.125046 4.6677653e-09 -0.058244705 0.13649714 2.3168267e-09 0.023053832 0.045039944 -0.046308734
		 -0.027462089 0.025930149 -0.046682559 -0.031968813 0.040681239 -0.046920925 0.0067205597 0.077506542 -0.046249293
		 -0.053007346 0.01697856 -1.2312229e-08 -0.05246089 0.022486813 -1.748195e-08 -0.027462119 0.025930114 0.046682552
		 -0.031968839 0.040681168 0.046920925 0.02305383 0.045039944 0.046308734 0.0067205559 0.077506542 0.0462493
		 0.047760773 0.054922987 1.3575557e-09 0.025560899 0.095981248 3.4664109e-09 0.027006574 0.0090865046 -0.046461843
		 -0.026847014 0.0087629035 -0.046561014 -0.05374657 0.0087459087 -6.8942838e-09 -0.026847046 0.0087629035 0.046561014
		 0.027006574 0.0090865046 0.046461843 0.053729545 0.0093529206 1.0746619e-10 0.026229102 -2.4680048e-05 -0.045430128
		 -0.026229076 -4.9222261e-05 -0.045430116 -0.052458216 -4.9114227e-05 -6.0535967e-09
		 -0.026229108 -4.9222261e-05 0.04543012 0.026229102 -2.4680048e-05 0.045430128 0.052458204 -5.9604645e-08 0
		 -0.067982212 0.056594491 -0.045430128 -0.068147875 0.10905273 -0.045430113 -0.067707591 0.030365331 -1.0244548e-08
		 -0.067982212 0.056594416 0.045430128 -0.068147875 0.10905273 0.045430113 -0.068038911 0.13528182 0;
	setAttr -s 102 ".ed[0:101]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 12 13 1 13 14 1 15 14 1 12 15 1 13 16 1 16 17 1
		 14 17 1 16 18 1 18 19 1 17 19 1 18 20 1 20 21 1 19 21 1 20 22 1 22 23 1 21 23 1 22 12 1
		 23 15 1 24 25 1 25 26 1 27 26 1 24 27 1 25 28 1 28 29 1 26 29 1 28 30 1 30 31 1 29 31 1
		 30 32 1 32 33 1 31 33 1 32 34 1 34 35 1 33 35 1 34 24 1 35 27 1 36 37 1 37 25 1 36 24 1
		 37 38 1 38 28 1 38 39 1 39 30 1 39 40 1 40 32 1 40 41 1 41 34 1 41 36 1 26 13 1 27 12 1
		 29 16 1 31 18 1 33 20 1 35 22 1 0 42 1 36 42 1 1 43 1 42 43 0 37 43 1 2 44 1 43 44 0
		 38 44 1 3 45 1 44 45 0 39 45 1 4 46 1 45 46 0 40 46 1 5 47 1 46 47 0 41 47 1 47 42 0
		 7 48 1 14 48 1 6 49 1 49 48 0 15 49 1 8 50 1 17 50 1 48 50 0 9 51 1 19 51 1 50 51 0
		 10 52 1 21 52 1 51 52 0 11 53 1 23 53 1 52 53 0 53 49 0;
	setAttr -s 48 -ch 192 ".fc[0:47]" -type "polyFaces" 
		f 4 12 13 -15 -16
		mu 0 4 0 1 2 3
		f 4 16 17 -19 -14
		mu 0 4 1 4 61 2
		f 4 19 20 -22 -18
		mu 0 4 71 6 7 5
		f 4 22 23 -25 -21
		mu 0 4 6 8 9 7
		f 4 25 26 -28 -24
		mu 0 4 8 10 11 9
		f 4 28 15 -30 -27
		mu 0 4 10 0 3 11
		f 4 30 31 -33 -34
		mu 0 4 12 13 14 15
		f 4 34 35 -37 -32
		mu 0 4 13 16 70 14
		f 4 37 38 -40 -36
		mu 0 4 72 18 19 17
		f 4 40 41 -43 -39
		mu 0 4 18 20 21 19
		f 4 43 44 -46 -42
		mu 0 4 20 22 23 21
		f 4 46 33 -48 -45
		mu 0 4 22 12 15 23
		f 4 48 49 -31 -51
		mu 0 4 24 25 13 12
		f 4 51 52 -35 -50
		mu 0 4 25 26 16 13
		f 4 53 54 -38 -53
		mu 0 4 68 27 18 72
		f 4 55 56 -41 -55
		mu 0 4 27 28 20 18
		f 4 57 58 -44 -57
		mu 0 4 28 29 22 20
		f 4 59 50 -47 -59
		mu 0 4 29 24 12 22
		f 4 32 60 -13 -62
		mu 0 4 15 14 1 0
		f 4 36 62 -17 -61
		mu 0 4 14 70 4 1
		f 4 39 63 -20 -63
		mu 0 4 17 19 6 71
		f 4 42 64 -23 -64
		mu 0 4 19 21 8 6
		f 4 45 65 -26 -65
		mu 0 4 21 23 10 8
		f 4 47 61 -29 -66
		mu 0 4 23 15 0 10
		f 4 -49 67 69 -71
		mu 0 4 25 24 30 69
		f 4 -52 70 72 -74
		mu 0 4 26 25 69 66
		f 4 -54 73 75 -77
		mu 0 4 27 68 67 65
		f 4 -56 76 78 -80
		mu 0 4 28 27 65 64
		f 4 -58 79 81 -83
		mu 0 4 29 28 64 62
		f 4 -60 82 83 -68
		mu 0 4 24 29 62 30
		f 4 14 85 -88 -89
		mu 0 4 3 2 36 55
		f 4 18 90 -92 -86
		mu 0 4 2 61 58 36
		f 4 21 93 -95 -91
		mu 0 4 5 7 39 38
		f 4 24 96 -98 -94
		mu 0 4 7 9 40 39
		f 4 27 99 -101 -97
		mu 0 4 9 11 41 40
		f 4 29 88 -102 -100
		mu 0 4 11 3 55 41
		f 4 0 68 -70 -67
		mu 0 4 42 43 31 63
		f 4 1 71 -73 -69
		mu 0 4 43 44 32 31
		f 4 2 74 -76 -72
		mu 0 4 44 45 33 32
		f 4 3 77 -79 -75
		mu 0 4 45 46 34 33
		f 4 4 80 -82 -78
		mu 0 4 46 47 35 34
		f 4 5 66 -84 -81
		mu 0 4 47 42 63 35
		f 4 -7 86 87 -85
		mu 0 4 48 49 37 60
		f 4 -8 84 91 -90
		mu 0 4 50 48 60 59
		f 4 -9 89 94 -93
		mu 0 4 51 50 59 57
		f 4 -10 92 97 -96
		mu 0 4 52 51 57 56
		f 4 -11 95 100 -99
		mu 0 4 53 52 56 54
		f 4 -12 98 101 -87
		mu 0 4 49 53 54 37;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 25 
		1 0 
		2 0 
		4 0 
		5 0 
		6 0 
		7 0 
		8 0 
		9 0 
		13 0 
		14 0 
		16 0 
		17 0 
		18 0 
		19 0 
		20 0 
		21 0 
		25 0 
		26 0 
		27 0 
		28 0 
		61 0 
		68 0 
		70 0 
		71 0 
		72 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Small_T" -p "Small";
	rename -uid "E685F2E4-4BAB-8E50-BCD4-138A3DC7E1B0";
	setAttr ".rp" -type "double3" -3.6429192995512949e-16 0.2500000074505806 0.049139590068248806 ;
	setAttr ".sp" -type "double3" -3.6429192995512949e-16 0.2500000074505806 0.049139590068248806 ;
createNode mesh -n "Small_TShape" -p "Small_T";
	rename -uid "7C1A665A-4DF6-EC35-79AE-EBBC559FC2F8";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:17]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[12:17]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 2 "e[0:5]" "e[18:23]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 3 "vtx[0:5]" "vtx[12:17]" "vtx[24]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 2 "vtx[0:5]" "vtx[12:17]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "vtx[0:23]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 3 "vtx[6:11]" "vtx[18:23]" "vtx[25]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 2 "vtx[6:11]" "vtx[18:23]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 1 "f[0:11]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 0;
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 2 "e[6:11]" "e[24:29]";
	setAttr ".pv" -type "double2" 0.44900670647621155 0.048049502074718475 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.51833397 0.14528175
		 0.51832986 0.17224905 0.45827195 0.17224003 0.45827645 0.14527276 0.5416795 0.19921973
		 0.45829284 0.035921715 0.51834559 0.063639015 0.45828837 0.063630015 0.51834214 0.090606317
		 0.4582848 0.090597302 0.5416922 0.11831811 0.45828062 0.11830556 0.52695346 0.1175665
		 0.55392069 0.11756227 0.55393076 0.18301496 0.52696359 0.18301913 0.41908419 0.11758336
		 0.41909426 0.18303606 0.44605145 0.11757914 0.44606185 0.18303183 0.473019 0.11757489
		 0.47302908 0.1830276 0.49998629 0.1175707 0.4999963 0.18302336 0.52694345 0.052113831
		 0.55391073 0.052109592 0.58087826 0.05210539 0.44604135 0.052126504 0.47300899 0.052122265
		 0.4999761 0.052118018 0.58088839 0.11755803 0.5808984 0.1830107 0.41907412 0.052130707
		 0.54170406 0.035934299 0.45826805 0.1992072;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 30 ".vt[0:29]"  -0.022064896 0.2882176 0.038217485 0.022064896 0.2882176 0.038217485
		 0.044129793 0.25000024 0 0.022064896 0.21038873 0.038217485 -0.022064896 0.21038873 0.038217485
		 -0.044129793 0.25000024 0 -0.022064896 0.2882176 0.13649666 0.022064896 0.2882176 0.13649666
		 -0.044129793 0.25000024 0.13649631 -0.022064896 0.21038873 0.13649654 0.022064896 0.21038873 0.13649654
		 0.044129793 0.25000024 0.13649631 0.022064896 0.14289224 -0.038217485 -0.022064865 0.14289224 -0.038217485
		 -0.044129793 0.14289224 -6.5758456e-09 -0.022064896 0.14289224 0.038217485 0.022064896 0.14289224 0.038217485
		 0.044129793 0.14289224 0 0.022064896 0.35710776 -0.038217485 -0.022064865 0.35710776 -0.038217485
		 -0.044129793 0.35710776 -6.5758456e-09 -0.022064896 0.35710776 0.038217485 0.022064896 0.35710776 0.038217485
		 0.044129793 0.35710776 0 0.022064896 0.25 -0.038217485 -0.022064865 0.25 -0.038217485
		 -0.044129793 0.25 -6.5758456e-09 -0.022064896 0.25 0.038217485 0.022064896 0.25 0.038217485
		 0.044129793 0.25 0;
	setAttr -s 48 ".ed[0:47]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 0 6 1
		 1 7 1 6 7 0 5 8 1 8 6 0 4 9 1 9 8 0 3 10 1 10 9 0 2 11 1 11 10 0 7 11 0 12 13 0 13 14 0
		 14 15 0 15 16 0 16 17 0 17 12 0 12 24 1 13 25 1 14 26 1 15 27 1 16 28 1 17 29 1 18 19 0
		 19 20 0 20 21 0 21 22 0 22 23 0 23 18 0 24 18 1 25 19 1 26 20 1 27 21 1 28 22 1 29 23 1
		 24 25 1 25 26 1 26 27 1 27 28 1 28 29 1 29 24 1;
	setAttr -s 18 -ch 72 ".fc[0:17]" -type "polyFaces" 
		f 4 -1 6 8 -8
		mu 0 4 0 1 2 3
		f 4 -6 9 10 -7
		mu 0 4 1 4 34 2
		f 4 -5 11 12 -10
		mu 0 4 33 6 7 5
		f 4 -4 13 14 -12
		mu 0 4 6 8 9 7
		f 4 -3 15 16 -14
		mu 0 4 8 10 11 9
		f 4 -2 7 17 -16
		mu 0 4 10 0 3 11
		f 4 42 37 -31 -37
		mu 0 4 12 13 14 15
		f 4 43 38 -32 -38
		mu 0 4 13 30 31 14
		f 4 44 39 -33 -39
		mu 0 4 16 18 19 17
		f 4 45 40 -34 -40
		mu 0 4 18 20 21 19
		f 4 46 41 -35 -41
		mu 0 4 20 22 23 21
		f 4 47 36 -36 -42
		mu 0 4 22 12 15 23
		f 4 18 25 -43 -25
		mu 0 4 24 25 13 12
		f 4 19 26 -44 -26
		mu 0 4 25 26 30 13
		f 4 20 27 -45 -27
		mu 0 4 32 27 18 16
		f 4 21 28 -46 -28
		mu 0 4 27 28 20 18
		f 4 22 29 -47 -29
		mu 0 4 28 29 22 20
		f 4 23 24 -48 -30
		mu 0 4 29 24 12 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Small_EndCap" -p "Small";
	rename -uid "8F773D3E-4EB8-5FC8-A37D-D786A71A57DF";
	setAttr ".rp" -type "double3" 0 0 -1.862645149230957e-09 ;
	setAttr ".sp" -type "double3" 0 0 -1.862645149230957e-09 ;
createNode mesh -n "Small_EndCapShape" -p "Small_EndCap";
	rename -uid "434F58FA-420C-DB2C-502A-D1905CB4F239";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 0;
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "e[0:5]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "vtx[0:5]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "vtx[0:5]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "vtx[0:11]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 1 "vtx[6:11]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 1 "vtx[6:11]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 1 "f[0:5]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 0;
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 1 "e[6:11]";
	setAttr ".pv" -type "double2" 0.59510430693626404 0.050054460763931274 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 44 ".uvst[0].uvsp[0:43]" -type "float2" 0.53780162 0.11756958
		 0.51568019 0.1447527 0.49121904 0.14895916 0.49121749 0.11757192 0.5313741 0.11757024
		 0.49122047 0.18034646 0.51567936 0.09038835 0.49121261 0.023409992 0.48429254 0.09038882
		 0.4912141 0.054797329 0.46859902 0.11757122 0.49121571 0.086184576 0.48650283 0.14092535
		 0.51346993 0.14092487 0.48552579 0.15116945 0.48552406 0.11978211 0.52695429 0.11757033
		 0.48552734 0.18255669 0.5134691 0.094216153 0.48551947 0.025620274 0.48650208 0.09421657
		 0.48552096 0.057007559 0.47301883 0.11757115 0.48552245 0.088394865 0.46217209 0.16465421
		 0.46217042 0.13326694 0.46216857 0.10187969 0.46216714 0.070492342 0.46216559 0.039105102
		 0.46217352 0.19604158 0.48552853 0.2095241 0.53780019 0.086182296 0.48429331 0.14475316
		 0.53779858 0.05479499 0.53780657 0.21173146 0.53779715 0.023407705 0.4912219 0.21173373
		 0.53780496 0.18034416 0.53780353 0.14895687 0.48552245 0.083974913 0.48552096 0.052587599
		 0.48552692 0.1781368 0.48552406 0.11536218 0.48552549 0.14674948;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 25 ".vt[0:24]"  0.022064893 0.083128154 -0.038217485 -0.022064866 0.083128154 -0.038217485
		 -0.044129793 0.083128154 -6.5758456e-09 -0.022064896 0.083128154 0.038217485 0.022064893 0.083128154 0.038217485
		 0.044129793 0.083128154 0 0.022064893 0 -0.038217485 -0.022064866 0 -0.038217485
		 -0.044129793 0 -6.5758456e-09 -0.022064896 0 0.038217485 0.022064893 0 0.038217485
		 0.044129793 0 0 0.025681322 0 -0.044481326 -0.025681293 0 -0.04448133 -0.025681293 0.076231539 -0.04448133
		 0.025681322 0.076231539 -0.044481326 -0.051362649 0 -8.6147338e-09 -0.051362649 0.076231539 -8.6147338e-09
		 -0.025681326 0 0.044481326 -0.025681326 0.076231539 0.044481326 0.025681322 0 0.044481326
		 0.025681322 0.076231539 0.044481326 0.051362649 0 0 0.051362649 0.076231539 0 -1.8626451e-09 0.083128154 0;
	setAttr -s 48 ".ed[0:47]"  0 1 1 1 2 1 2 3 1 3 4 1 4 5 1 5 0 1 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 6 12 1 7 13 1 12 13 0 1 14 1 13 14 1 0 15 1 15 14 1
		 12 15 1 8 16 1 13 16 0 2 17 1 16 17 1 14 17 1 9 18 1 16 18 0 3 19 1 18 19 1 17 19 1
		 10 20 1 18 20 0 4 21 1 20 21 1 19 21 1 11 22 1 20 22 0 5 23 1 22 23 1 21 23 1 22 12 0
		 23 15 1 3 24 1 24 0 1 1 24 1 24 4 1 5 24 1 24 2 1;
	setAttr -s 24 -ch 90 ".fc[0:23]" -type "polyFaces" 
		f 4 14 16 -19 -20
		mu 0 4 0 38 2 3
		f 4 21 23 -25 -17
		mu 0 4 38 37 5 2
		f 4 26 28 -30 -24
		mu 0 4 37 34 36 5
		f 4 31 33 -35 -29
		mu 0 4 35 33 9 7
		f 4 36 38 -40 -34
		mu 0 4 33 31 11 9
		f 4 40 19 -42 -39
		mu 0 4 31 0 3 11
		f 4 6 13 -15 -13
		mu 0 4 12 13 1 32
		f 4 -1 17 18 -16
		mu 0 4 43 15 3 2
		f 4 7 20 -22 -14
		mu 0 4 13 16 4 1
		f 4 -2 15 24 -23
		mu 0 4 41 14 2 5
		f 4 8 25 -27 -21
		mu 0 4 16 18 6 4
		f 4 -3 22 29 -28
		mu 0 4 30 17 5 36
		f 4 9 30 -32 -26
		mu 0 4 18 20 8 6
		f 4 -4 27 34 -33
		mu 0 4 40 19 7 9
		f 4 10 35 -37 -31
		mu 0 4 20 22 10 8
		f 4 -5 32 39 -38
		mu 0 4 39 21 9 11
		f 4 11 12 -41 -36
		mu 0 4 22 12 32 10
		f 4 -6 37 41 -18
		mu 0 4 42 23 11 3
		f 3 44 43 0
		mu 0 3 43 25 15
		f 3 46 45 4
		mu 0 3 39 27 21
		f 3 47 2 42
		mu 0 3 29 17 30
		f 3 -46 -43 3
		mu 0 3 40 28 19
		f 3 -44 -47 5
		mu 0 3 42 26 23
		f 3 1 -48 -45
		mu 0 3 14 41 24;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Medium";
	rename -uid "7F616808-4F31-84E7-9EB1-088C002BC5BE";
createNode transform -n "Medium_Single" -p "Medium";
	rename -uid "776D12D6-4FD9-DAC6-9C8C-C6946D799A85";
createNode mesh -n "Medium_SingleShape" -p "Medium_Single";
	rename -uid "F7FD9D15-4EFE-8E8E-7C99-56A836789FE4";
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
	setAttr ".pv" -type "double2" 0.49934995174407959 0.12418762221932411 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.55272174 0.19952679
		 0.55271477 0.16185236 0.60607243 0.16184244 0.60607934 0.1995168 0.55270749 0.12417766
		 0.60606521 0.12416777 0.55270052 0.086503148 0.60605818 0.086493194 0.55269361 0.048828512
		 0.60605121 0.048818558 0.55272889 0.23720139 0.60608631 0.23719132 0.44600666 0.19954693
		 0.44599971 0.16187206 0.49935699 0.1618624 0.49936429 0.19953668 0.44599241 0.12419766
		 0.49935013 0.12418768 0.44598547 0.086523026 0.49934292 0.086513072 0.44597828 0.04884842
		 0.49933594 0.048838496 0.44601345 0.23722136 0.49932867 0.01116389 0.3926487 0.19955665
		 0.39264157 0.16188222 0.39263469 0.12420762 0.39262766 0.08653307 0.39262065 0.048858404
		 0.39261353 0.011183858 0.44597116 0.011173964 0.49937105 0.23721129 0.55268645 0.011153877
		 0.60604423 0.011143953 0.39265582 0.23723125;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 30 ".vt[0:29]"  0.13238937 0 -0.22930491 -0.13238919 0 -0.22930491
		 -0.26477873 0 -3.9455077e-08 -0.13238937 0 0.22930491 0.13238937 0 0.22930491 0.26477873 0 0
		 0.13238937 1.5 -0.22930491 -0.13238919 1.5 -0.22930491 -0.26477873 1.5 -3.9455077e-08
		 -0.13238937 1.5 0.22930491 0.13238937 1.5 0.22930491 0.26477873 1.5 0 0.13238937 0.75 -0.22930491
		 -0.13238919 0.75 -0.22930491 -0.26477873 0.75 -3.9455077e-08 -0.13238937 0.75 0.22930491
		 0.13238937 0.75 0.22930491 0.26477873 0.75 0 0.13238937 1.125 -0.22930491 -0.13238919 1.125 -0.22930491
		 -0.26477873 1.125 -3.9455077e-08 -0.13238937 1.125 0.22930491 0.13238937 1.125 0.22930491
		 0.26477873 1.125 0 0.13238937 0.375 -0.22930491 -0.13238919 0.375 -0.22930491 -0.26477873 0.375 -3.9455077e-08
		 -0.13238937 0.375 0.22930491 0.13238937 0.375 0.22930491 0.26477873 0.375 0;
	setAttr -s 54 ".ed[0:53]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 0 24 1 1 25 1 2 26 1 3 27 1 4 28 1 5 29 1 12 18 1
		 13 19 1 14 20 1 15 21 1 16 22 1 17 23 1 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1 17 12 1
		 18 6 1 19 7 1 20 8 1 21 9 1 22 10 1 23 11 1 18 19 1 19 20 1 20 21 1 21 22 1 22 23 1
		 23 18 1 24 12 1 25 13 1 26 14 1 27 15 1 28 16 1 29 17 1 24 25 1 25 26 1 26 27 1 27 28 1
		 28 29 1 29 24 1;
	setAttr -s 24 -ch 96 ".fc[0:23]" -type "polyFaces" 
		f 4 36 31 -7 -31
		mu 0 4 0 1 2 3
		f 4 37 32 -8 -32
		mu 0 4 1 4 5 2
		f 4 38 33 -9 -33
		mu 0 4 4 6 7 5
		f 4 39 34 -10 -34
		mu 0 4 6 8 9 7
		f 4 40 35 -11 -35
		mu 0 4 8 32 33 9
		f 4 41 30 -12 -36
		mu 0 4 10 0 3 11
		f 4 48 43 -25 -43
		mu 0 4 12 13 14 15
		f 4 49 44 -26 -44
		mu 0 4 13 16 17 14
		f 4 50 45 -27 -45
		mu 0 4 16 18 19 17
		f 4 51 46 -28 -46
		mu 0 4 18 20 21 19
		f 4 52 47 -29 -47
		mu 0 4 20 30 23 21
		f 4 53 42 -30 -48
		mu 0 4 22 12 15 31
		f 4 24 19 -37 -19
		mu 0 4 15 14 1 0
		f 4 25 20 -38 -20
		mu 0 4 14 17 4 1
		f 4 26 21 -39 -21
		mu 0 4 17 19 6 4
		f 4 27 22 -40 -22
		mu 0 4 19 21 8 6
		f 4 28 23 -41 -23
		mu 0 4 21 23 32 8
		f 4 29 18 -42 -24
		mu 0 4 31 15 0 10
		f 4 0 13 -49 -13
		mu 0 4 24 25 13 12
		f 4 1 14 -50 -14
		mu 0 4 25 26 16 13
		f 4 2 15 -51 -15
		mu 0 4 26 27 18 16
		f 4 3 16 -52 -16
		mu 0 4 27 28 20 18
		f 4 4 17 -53 -17
		mu 0 4 28 29 30 20
		f 4 5 12 -54 -18
		mu 0 4 34 24 12 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Medium_Half" -p "Medium";
	rename -uid "78145470-4106-5D56-ADB7-9AA0A8D81A31";
createNode mesh -n "Medium_HalfShape" -p "Medium_Half";
	rename -uid "B17DE217-4EE1-A6E4-A2AA-739F85A55F52";
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
	setAttr ".gtag[8].gtagcmp" -type "componentList" 0;
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 1 "e[6:11]";
	setAttr ".pv" -type "double2" 0.96160167455673218 0.25644159317016602 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 21 ".uvst[0].uvsp[0:20]" -type "float2" 0.49934515 0.16186219
		 0.49934024 0.19953664 0.44598261 0.19952986 0.4459874 0.16185543 0.4993642 0.011163905
		 0.4460066 0.01115714 0.49935943 0.048838481 0.4460018 0.048831701 0.49935457 0.086513042
		 0.44599703 0.086506277 0.49934995 0.12418759 0.44599223 0.12418079 0.55270272 0.16186905
		 0.55269784 0.1995434 0.55269295 0.23721811 0.55271709 0.048845202 0.55271226 0.086519912
		 0.55270737 0.12419435 0.49933538 0.23721133 0.44597784 0.23720439 0.55272204 0.01117076;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  0.13238937 0 -0.22930491 -0.13238919 0 -0.22930491
		 -0.26477873 0 -3.9455077e-08 -0.13238937 0 0.22930491 0.13238937 0 0.22930491 0.26477873 0 0
		 0.13238937 0.75 -0.22930491 -0.13238919 0.75 -0.22930491 -0.26477873 0.75 -3.9455077e-08
		 -0.13238937 0.75 0.22930491 0.13238937 0.75 0.22930491 0.26477873 0.75 0 0.13238937 0.375 -0.22930491
		 -0.13238919 0.375 -0.22930491 -0.26477873 0.375 -3.9455077e-08 -0.13238937 0.375 0.22930491
		 0.13238937 0.375 0.22930491 0.26477873 0.375 0;
	setAttr -s 30 ".ed[0:29]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 0 12 1
		 1 13 1 2 14 1 3 15 1 4 16 1 5 17 1 6 7 0 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 12 6 1
		 13 7 1 14 8 1 15 9 1 16 10 1 17 11 1 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1 17 12 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 24 19 -13 -19
		mu 0 4 0 1 2 3
		f 4 25 20 -14 -20
		mu 0 4 1 18 19 2
		f 4 26 21 -15 -21
		mu 0 4 4 6 7 5
		f 4 27 22 -16 -22
		mu 0 4 6 8 9 7
		f 4 28 23 -17 -23
		mu 0 4 8 10 11 9
		f 4 29 18 -18 -24
		mu 0 4 10 0 3 11
		f 4 0 7 -25 -7
		mu 0 4 12 13 1 0
		f 4 1 8 -26 -8
		mu 0 4 13 14 18 1
		f 4 2 9 -27 -9
		mu 0 4 20 15 6 4
		f 4 3 10 -28 -10
		mu 0 4 15 16 8 6
		f 4 4 11 -29 -11
		mu 0 4 16 17 10 8
		f 4 5 6 -30 -12
		mu 0 4 17 12 0 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape1" -p "Medium_Half";
	rename -uid "E3263F33-4791-659D-9325-CBA3EDFE4D21";
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
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.375 0.3125 0.41666666
		 0.3125 0.45833331 0.3125 0.49999997 0.3125 0.54166663 0.3125 0.58333331 0.3125 0.625
		 0.3125 0.375 0.68843985 0.41666666 0.68843985 0.45833331 0.68843985 0.49999997 0.68843985
		 0.54166663 0.68843985 0.58333331 0.68843985 0.625 0.68843985;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".pt[0:11]" -type "float3"  -0.0047793533 0.0049999999 
		0.0082780784 0.00477935 0.0049999999 0.0082780803 0.0095587019 0.0049999999 1.4243576e-09 
		0.0047793523 0.0049999999 -0.0082780793 -0.0047793509 0.0049999999 -0.0082780793 
		-0.0095587019 0.0049999999 0 -0.0047793533 -0.0049999999 0.0082780784 0.00477935 
		-0.0049999999 0.0082780803 0.0095587019 -0.0049999999 1.4243576e-09 0.0047793523 
		-0.0049999999 -0.0082780793 -0.0047793509 -0.0049999999 -0.0082780793 -0.0095587019 
		-0.0049999999 0;
	setAttr -s 12 ".vt[0:11]"  0.0050000022 -0.0099999998 -0.0086602531
		 -0.0049999985 -0.0099999998 -0.008660255 -0.0099999998 -0.0099999998 -1.4901161e-09
		 -0.0050000013 -0.0099999998 0.0086602541 0.0049999999 -0.0099999998 0.0086602541
		 0.0099999998 -0.0099999998 0 0.0050000022 0.0099999998 -0.0086602531 -0.0049999985 0.0099999998 -0.008660255
		 -0.0099999998 0.0099999998 -1.4901161e-09 -0.0050000013 0.0099999998 0.0086602541
		 0.0049999999 0.0099999998 0.0086602541 0.0099999998 0.0099999998 0;
	setAttr -s 18 ".ed[0:17]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 0 6 1 1 7 1 2 8 1 3 9 1 4 10 1 5 11 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 13 -7 -13
		mu 0 4 0 1 8 7
		f 4 1 14 -8 -14
		mu 0 4 1 2 9 8
		f 4 2 15 -9 -15
		mu 0 4 2 3 10 9
		f 4 3 16 -10 -16
		mu 0 4 3 4 11 10
		f 4 4 17 -11 -17
		mu 0 4 4 5 12 11
		f 4 5 12 -12 -18
		mu 0 4 5 6 13 12;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Medium_Corner" -p "Medium";
	rename -uid "7499C2AD-437D-43E5-18EE-30A344BF7F37";
	setAttr ".rp" -type "double3" -1.862645149230957e-09 0 0 ;
	setAttr ".sp" -type "double3" -1.862645149230957e-09 0 0 ;
createNode mesh -n "Medium_CornerShape" -p "Medium_Corner";
	rename -uid "AC4E405A-4FA4-CE86-BF9C-EC91ED6332BA";
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
	setAttr ".pv" -type "double2" 0.50015398859977722 0.11904603987932205 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 73 ".uvst[0].uvsp[0:72]" -type "float2" 0.4641459 0.15230063
		 0.46886075 0.19423969 0.45584387 0.19420287 0.43744695 0.15110704 0.46936965 0.23614505
		 0.52562773 0.0046539158 0.50863957 0.042643949 0.49728104 0.036286019 0.48394001
		 0.076865599 0.46009389 0.064797774 0.46801764 0.1130022 0.43778905 0.10507132 0.51562649
		 0.16576441 0.49534789 0.20169568 0.48355198 0.19594482 0.49129063 0.15733436 0.47746533
		 0.23940068 0.53398848 0.007998839 0.53537536 0.049153857 0.52227551 0.048371553 0.53539896
		 0.090412736 0.51005954 0.085807517 0.52873117 0.12893322 0.49884853 0.12109181 0.53861243
		 0.17765626 0.50684345 0.20930192 0.48272154 0.24318123 0.54912454 0.048173554 0.56126225
		 0.091341466 0.56055272 0.13728443 0.54438972 0.18134528 0.45960912 0.12418775 0.4794797
		 0.15860429 0.51922053 0.15860412 0.53909069 0.1241874 0.51922029 0.089770913 0.45007595
		 0.19598702 0.45960891 0.12420078 0.52164745 0.0018438622 0.49313185 0.031900257 0.45469698
		 0.060416974 0.43059355 0.10318349 0.4826341 0.09523508 0.46591848 0.12418775 0.48263434
		 0.15314022 0.51606578 0.15314008 0.53278136 0.12418745 0.51606542 0.095234901 0.48262468
		 0.095240504 0.46591836 0.12419873 0.5160566 0.095229298 0.53278148 0.12417702 0.51607496
		 0.15313514 0.48264337 0.15314612 0.47949034 0.15861103 0.43059462 0.15227424 0.51923132
		 0.15859812 0.53909099 0.12417495 0.46016058 0.23617041 0.51920962 0.089764133 0.47946829
		 0.08977747 0.46500742 0.23567572 0.56739867 0.13908125 0.47947943 0.089771047 0.56810623
		 0.090965077 0.55599576 0.047454476 0.48875296 0.24653138 0.55164653 0.0068583861
		 0.54474699 0.0068143606 0.51247591 0.21330306 0.4739323 0.23686518 0.52965897 0.0063858628
		 0.53831106 0.0075258836;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 54 ".vt[0:53]"  0.11747888 6.5334352e-05 -0.20347922 -0.11747871 -6.5334352e-05 -0.2034792
		 -0.23495775 -6.4759166e-05 -2.7970595e-08 -0.11747887 -6.5334352e-05 0.20347922 0.11747888 6.5334352e-05 0.20347922
		 0.23495777 0.0001964196 0 -0.36283591 0.55864859 -0.20347922 -0.36195385 0.32369086 -0.20347922
		 -0.36049172 0.20621191 -3.1611002e-08 -0.36195385 0.32369068 0.20347922 -0.36283591 0.55864859 0.20347922
		 -0.36225569 0.67612755 0 -0.12785846 0.53553224 -0.24649975 -0.24281643 0.27193815 -0.24886955
		 -0.32087159 0.30085629 -0.24909002 -0.31278238 0.58557951 -0.24687581 -0.30314183 0.13972896 -9.8627751e-08
		 -0.32760289 0.15624835 -1.0202776e-07 -0.24281651 0.27193776 0.24886954 -0.32087159 0.30085608 0.24908999
		 -0.12785849 0.53553224 0.24649976 -0.31278238 0.58557951 0.24687581 -0.072707936 0.66597205 2.4852318e-08
		 -0.31010899 0.72694075 1.2335351e-08 0.12274422 0.24000037 -0.24655895 -0.14621486 0.13825516 -0.24854933
		 -0.17020974 0.21679355 -0.24981844 0.035781905 0.41286045 -0.24624248 -0.28222406 0.090594709 -6.5553309e-08
		 -0.27931458 0.11992198 -9.3078171e-08 -0.14621501 0.13825497 0.24854927 -0.17020988 0.21679315 0.24981844
		 0.12274421 0.24000037 0.24655895 0.03578189 0.41286045 0.24624252 0.25428998 0.29262006 7.2279573e-09
		 0.13609245 0.51122427 1.8456014e-08 0.14378959 0.048575491 -0.24737418 -0.14294 0.04685257 -0.24790214
		 -0.28615981 0.046762086 -3.6706844e-08 -0.14294018 0.04685257 0.24790214 0.14378959 0.048575491 0.24737418
		 0.28606918 0.049993977 5.721762e-10 0.13965012 6.5329397e-05 -0.24188103 -0.13964999 -6.5334352e-05 -0.24188101
		 -0.27930027 -6.4769083e-05 -3.2230822e-08 -0.13965015 -6.5334352e-05 0.24188103 0.13965012 6.5329397e-05 0.24188104
		 0.27930024 0.00019642457 0 -0.36195385 0.30151957 -0.24188103 -0.36283591 0.58082002 -0.24188097
		 -0.36049172 0.16186914 -5.4544465e-08 -0.36195385 0.30151919 0.24188103 -0.36283591 0.58082002 0.24188097
		 -0.36225566 0.72047007 0;
	setAttr -s 102 ".ed[0:101]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 12 13 1 13 14 1 15 14 1 12 15 1 13 16 1 16 17 1
		 14 17 1 16 18 1 18 19 1 17 19 1 18 20 1 20 21 1 19 21 1 20 22 1 22 23 1 21 23 1 22 12 1
		 23 15 1 24 25 1 25 26 1 27 26 1 24 27 1 25 28 1 28 29 1 26 29 1 28 30 1 30 31 1 29 31 1
		 30 32 1 32 33 1 31 33 1 32 34 1 34 35 1 33 35 1 34 24 1 35 27 1 36 37 1 37 25 1 36 24 1
		 37 38 1 38 28 1 38 39 1 39 30 1 39 40 1 40 32 1 40 41 1 41 34 1 41 36 1 26 13 1 27 12 1
		 29 16 1 31 18 1 33 20 1 35 22 1 0 42 1 36 42 1 1 43 1 42 43 0 37 43 1 2 44 1 43 44 0
		 38 44 1 3 45 1 44 45 0 39 45 1 4 46 1 45 46 0 40 46 1 5 47 1 46 47 0 41 47 1 47 42 0
		 7 48 1 14 48 1 6 49 1 49 48 0 15 49 1 8 50 1 17 50 1 48 50 0 9 51 1 19 51 1 50 51 0
		 10 52 1 21 52 1 51 52 0 11 53 1 23 53 1 52 53 0 53 49 0;
	setAttr -s 48 -ch 192 ".fc[0:47]" -type "polyFaces" 
		f 4 12 13 -15 -16
		mu 0 4 0 1 2 3
		f 4 16 17 -19 -14
		mu 0 4 1 4 61 2
		f 4 19 20 -22 -18
		mu 0 4 71 6 7 5
		f 4 22 23 -25 -21
		mu 0 4 6 8 9 7
		f 4 25 26 -28 -24
		mu 0 4 8 10 11 9
		f 4 28 15 -30 -27
		mu 0 4 10 0 3 11
		f 4 30 31 -33 -34
		mu 0 4 12 13 14 15
		f 4 34 35 -37 -32
		mu 0 4 13 16 70 14
		f 4 37 38 -40 -36
		mu 0 4 72 18 19 17
		f 4 40 41 -43 -39
		mu 0 4 18 20 21 19
		f 4 43 44 -46 -42
		mu 0 4 20 22 23 21
		f 4 46 33 -48 -45
		mu 0 4 22 12 15 23
		f 4 48 49 -31 -51
		mu 0 4 24 25 13 12
		f 4 51 52 -35 -50
		mu 0 4 25 26 16 13
		f 4 53 54 -38 -53
		mu 0 4 68 27 18 72
		f 4 55 56 -41 -55
		mu 0 4 27 28 20 18
		f 4 57 58 -44 -57
		mu 0 4 28 29 22 20
		f 4 59 50 -47 -59
		mu 0 4 29 24 12 22
		f 4 32 60 -13 -62
		mu 0 4 15 14 1 0
		f 4 36 62 -17 -61
		mu 0 4 14 70 4 1
		f 4 39 63 -20 -63
		mu 0 4 17 19 6 71
		f 4 42 64 -23 -64
		mu 0 4 19 21 8 6
		f 4 45 65 -26 -65
		mu 0 4 21 23 10 8
		f 4 47 61 -29 -66
		mu 0 4 23 15 0 10
		f 4 -49 67 69 -71
		mu 0 4 25 24 30 69
		f 4 -52 70 72 -74
		mu 0 4 26 25 69 66
		f 4 -54 73 75 -77
		mu 0 4 27 68 67 65
		f 4 -56 76 78 -80
		mu 0 4 28 27 65 64
		f 4 -58 79 81 -83
		mu 0 4 29 28 64 62
		f 4 -60 82 83 -68
		mu 0 4 24 29 62 30
		f 4 14 85 -88 -89
		mu 0 4 3 2 36 55
		f 4 18 90 -92 -86
		mu 0 4 2 61 58 36
		f 4 21 93 -95 -91
		mu 0 4 5 7 39 38
		f 4 24 96 -98 -94
		mu 0 4 7 9 40 39
		f 4 27 99 -101 -97
		mu 0 4 9 11 41 40
		f 4 29 88 -102 -100
		mu 0 4 11 3 55 41
		f 4 0 68 -70 -67
		mu 0 4 42 43 31 63
		f 4 1 71 -73 -69
		mu 0 4 43 44 32 31
		f 4 2 74 -76 -72
		mu 0 4 44 45 33 32
		f 4 3 77 -79 -75
		mu 0 4 45 46 34 33
		f 4 4 80 -82 -78
		mu 0 4 46 47 35 34
		f 4 5 66 -84 -81
		mu 0 4 47 42 63 35
		f 4 -7 86 87 -85
		mu 0 4 48 49 37 60
		f 4 -8 84 91 -90
		mu 0 4 50 48 60 59
		f 4 -9 89 94 -93
		mu 0 4 51 50 59 57
		f 4 -10 92 97 -96
		mu 0 4 52 51 57 56
		f 4 -11 95 100 -99
		mu 0 4 53 52 56 54
		f 4 -12 98 101 -87
		mu 0 4 49 53 54 37;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Medium_T" -p "Medium";
	rename -uid "2F703914-42B3-44CF-3B23-5A9EFE9A3EDE";
	setAttr ".rp" -type "double3" -3.6429192995512949e-16 0 3.5128150388530344e-17 ;
	setAttr ".sp" -type "double3" -3.6429192995512949e-16 4.6629367034256575e-15 5.8286708792820718e-16 ;
createNode mesh -n "Medium_TShape" -p "Medium_T";
	rename -uid "F17F6A8C-4F74-6444-7EFB-8FAF78B7406E";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:17]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[12:17]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 2 "e[0:5]" "e[18:23]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 3 "vtx[0:5]" "vtx[12:17]" "vtx[24]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 2 "vtx[0:5]" "vtx[12:17]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "vtx[0:23]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 3 "vtx[6:11]" "vtx[18:23]" "vtx[25]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 2 "vtx[6:11]" "vtx[18:23]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 1 "f[0:11]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 0;
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 2 "e[6:11]" "e[24:29]";
	setAttr ".pv" -type "double2" 0.83617442846298218 0.57294715940952301 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.49508733 0.16289797
		 0.49509299 0.20057261 0.47100186 0.20057622 0.47099644 0.16290155 0.52772546 0.23824236
		 0.47097439 0.010133028 0.4950707 0.048839182 0.47097987 0.048842698 0.49507636 0.086513728
		 0.47098529 0.086517304 0.52770907 0.12521872 0.47099119 0.12522712 0.49935585 0.16186225
		 0.4993614 0.19953692 0.45332015 0.19954383 0.4533146 0.16186905 0.49933276 0.011163592
		 0.45329201 0.011170626 0.49933833 0.048838258 0.45329756 0.048845112 0.49934387 0.086512923
		 0.45330328 0.086519897 0.49934986 0.12418765 0.45330894 0.12419444 0.54539657 0.16185534
		 0.54540217 0.19952977 0.54540789 0.23720455 0.54537958 0.048831463 0.5453853 0.086505949
		 0.54539102 0.12418073 0.49936697 0.23721147 0.45332587 0.23721844 0.54537421 0.011156797
		 0.5276922 0.010124624 0.47100759 0.23825058;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 30 ".vt[0:29]"  -0.13238937 0.55288363 0.22930491 0.13238937 0.55288363 0.22930491
		 0.26477873 0.32357943 -4.9848747e-09 0.13238937 0.085910521 0.22930491 -0.13238937 0.085910521 0.22930491
		 -0.26477873 0.32357943 -4.9848747e-09 -0.13238937 0.55288363 0.39861804 0.13238937 0.55288363 0.39861804
		 -0.26477873 0.32357943 0.39861596 -0.13238937 0.085910521 0.39861736 0.13238937 0.085910521 0.39861736
		 0.26477873 0.32357943 0.39861596 0.13238937 0 -0.22930491 -0.13238919 0 -0.22930491
		 -0.26477873 0 -4.4439943e-08 -0.13238937 0 0.22930491 0.13238937 0 0.22930491 0.26477873 0 -4.9848747e-09
		 0.13238937 0.64715612 -0.22930491 -0.13238919 0.64715612 -0.22930491 -0.26477873 0.64715612 -4.4439943e-08
		 -0.13238937 0.64715612 0.22930491 0.13238937 0.64715612 0.22930491 0.26477873 0.64715612 -4.9848747e-09
		 0.13238937 0.32357803 -0.22930491 -0.13238919 0.32357803 -0.22930491 -0.26477873 0.32357803 -4.4439943e-08
		 -0.13238937 0.32357803 0.22930491 0.13238937 0.32357803 0.22930491 0.26477873 0.32357803 -4.9848747e-09;
	setAttr -s 48 ".ed[0:47]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 0 6 1
		 1 7 1 6 7 0 5 8 1 8 6 0 4 9 1 9 8 0 3 10 1 10 9 0 2 11 1 11 10 0 7 11 0 12 13 0 13 14 0
		 14 15 0 15 16 0 16 17 0 17 12 0 12 24 1 13 25 1 14 26 1 15 27 1 16 28 1 17 29 1 18 19 0
		 19 20 0 20 21 0 21 22 0 22 23 0 23 18 0 24 18 1 25 19 1 26 20 1 27 21 1 28 22 1 29 23 1
		 24 25 1 25 26 1 26 27 1 27 28 1 28 29 1 29 24 1;
	setAttr -s 18 -ch 72 ".fc[0:17]" -type "polyFaces" 
		f 4 -1 6 8 -8
		mu 0 4 0 1 2 3
		f 4 -6 9 10 -7
		mu 0 4 1 4 34 2
		f 4 -5 11 12 -10
		mu 0 4 33 6 7 5
		f 4 -4 13 14 -12
		mu 0 4 6 8 9 7
		f 4 -3 15 16 -14
		mu 0 4 8 10 11 9
		f 4 -2 7 17 -16
		mu 0 4 10 0 3 11
		f 4 42 37 -31 -37
		mu 0 4 12 13 14 15
		f 4 43 38 -32 -38
		mu 0 4 13 30 31 14
		f 4 44 39 -33 -39
		mu 0 4 16 18 19 17
		f 4 45 40 -34 -40
		mu 0 4 18 20 21 19
		f 4 46 41 -35 -41
		mu 0 4 20 22 23 21
		f 4 47 36 -36 -42
		mu 0 4 22 12 15 23
		f 4 18 25 -43 -25
		mu 0 4 24 25 13 12
		f 4 19 26 -44 -26
		mu 0 4 25 26 30 13
		f 4 20 27 -45 -27
		mu 0 4 32 27 18 16
		f 4 21 28 -46 -28
		mu 0 4 27 28 20 18
		f 4 22 29 -47 -29
		mu 0 4 28 29 22 20
		f 4 23 24 -48 -30
		mu 0 4 29 24 12 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Medium_Cap" -p "Medium";
	rename -uid "7DA5F527-4301-7637-D727-C39E25EF91F6";
	setAttr ".rp" -type "double3" 1.4901161193847656e-08 0 0 ;
	setAttr ".sp" -type "double3" 1.4901161193847656e-08 0 0 ;
createNode mesh -n "Medium_CapShape" -p "Medium_Cap";
	rename -uid "CA9CF6E7-499B-A8FD-954C-4B98BAA1C29D";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:269]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[6:11]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 2 "e[0:5]" "e[360:365]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 3 "vtx[0:5]" "vtx[12]" "vtx[168:173]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 2 "vtx[0:5]" "vtx[168:173]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 2 "vtx[0:11]" "vtx[168:179]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 3 "vtx[6:11]" "vtx[13]" "vtx[174:179]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 2 "vtx[6:11]" "vtx[174:179]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 2 "f[0:5]" "f[216:221]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 1 "f[12:17]";
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 2 "e[6:11]" "e[366:371]";
	setAttr ".pv" -type "double2" 0.45099066197872162 0.29615237005054951 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 434 ".uvst[0].uvsp";
	setAttr ".uvst[0].uvsp[0:249]" -type "float2" 0.5049684 0.13190472 0.50496954
		 0.11904357 0.49373117 0.11904269 0.49373135 0.11647044 0.50496906 0.12161579 0.49373099
		 0.12161493 0.50496894 0.12418801 0.49373081 0.12418715 0.50496876 0.12676018 0.49373055
		 0.12675937 0.50496858 0.12933245 0.49373037 0.12933159 0.50719607 0.13061881 0.49150297
		 0.12804532 0.50192255 0.11856875 0.50192183 0.1298068 0.49934965 0.12980667 0.49935025
		 0.11856857 0.49677739 0.12980649 0.49677804 0.11856844 0.49420512 0.12980632 0.49420577
		 0.11856826 0.49163291 0.12980619 0.50706697 0.118569 0.50449407 0.12980694 0.50449473
		 0.11856887 0.50578099 0.11634129 0.50320786 0.13203451 0.49420586 0.11856826 0.49677822
		 0.11856841 0.49677727 0.12980646 0.49420518 0.12980628 0.49935022 0.11856861 0.4993495
		 0.12980662 0.50192255 0.11856879 0.50192183 0.12980676 0.50449467 0.11856896 0.50449395
		 0.12980694 0.50706691 0.11856911 0.49163291 0.1298061 0.49291992 0.11634062 0.5057801
		 0.1320346 0.50192171 0.11856845 0.50192273 0.12980628 0.49935058 0.12980653 0.49934933
		 0.11856866 0.49677831 0.12980685 0.49677727 0.11856887 0.4942061 0.12980707 0.49420509
		 0.11856912 0.49163383 0.12980732 0.50706601 0.11856793 0.50449491 0.12980607 0.50449377
		 0.11856818 0.50577968 0.1163405 0.50320911 0.13203377 0.50496995 0.1319036 0.50496829
		 0.11904235 0.49373019 0.11904383 0.49372986 0.11647161 0.50496864 0.12161462 0.49373055
		 0.12161614 0.504969 0.12418684 0.4937309 0.12418836 0.50496924 0.12675907 0.49373126
		 0.12676059 0.5049696 0.12933132 0.49373162 0.1293328 0.50719744 0.13061716 0.4915038
		 0.12804702 0.50449395 0.11856796 0.50449514 0.12980619 0.50192291 0.12980646 0.50192171
		 0.11856823 0.49935067 0.12980676 0.49934942 0.11856849 0.49677837 0.12980707 0.49677706
		 0.11856879 0.49420607 0.12980732 0.49420488 0.11856905 0.49163368 0.12980764 0.50706619
		 0.11856765 0.49291843 0.11634156 0.50578159 0.13203368 0.50706565 0.11856731 0.49420455
		 0.11856953 0.49420649 0.1298075 0.49163428 0.12980793 0.49677676 0.11856905 0.49677873
		 0.12980707 0.499349 0.11856861 0.49935097 0.12980662 0.5019213 0.11856818 0.5019232
		 0.12980615 0.50449347 0.11856775 0.50449532 0.12980573 0.50577909 0.11633991 0.50320959
		 0.13203356 0.50496858 0.12676032 0.49373078 0.12675932 0.4937309 0.1241871 0.50496882
		 0.12418814 0.49373114 0.12161488 0.50496906 0.12161592 0.49373144 0.11904266 0.50496924
		 0.1190437 0.49373168 0.11647043 0.50496823 0.13190481 0.49373043 0.12933154 0.5049684
		 0.12933257 0.50719595 0.13061893 0.49150288 0.12804528 0.50706613 0.118568 0.494205
		 0.11856909 0.49420601 0.12980703 0.49163374 0.12980723 0.49677742 0.11856887 0.49677831
		 0.1298068 0.4993495 0.11856866 0.49935049 0.12980653 0.50192177 0.11856844 0.50192273
		 0.12980637 0.50449383 0.11856822 0.50449491 0.1298061 0.50577986 0.11634052 0.50320899
		 0.13203381 0.50496924 0.12675907 0.49373126 0.12676063 0.49373087 0.1241884 0.50496894
		 0.12418684 0.49373052 0.12161618 0.50496858 0.12161462 0.49373016 0.11904388 0.50496823
		 0.11904235 0.4937298 0.11647166 0.50497007 0.1319036 0.49373162 0.12933289 0.50496972
		 0.12933132 0.50719744 0.13061716 0.4915038 0.12804711 0.50706613 0.118568 0.49420494
		 0.11856893 0.49420586 0.12980698 0.49163359 0.12980716 0.4967773 0.11856879 0.49677813
		 0.12980676 0.4993495 0.11856852 0.49935031 0.12980662 0.50192177 0.11856835 0.50192255
		 0.12980641 0.50449395 0.11856818 0.50449473 0.12980619 0.50577986 0.1163405 0.50320894
		 0.13203394 0.504969 0.12675966 0.49373093 0.12676001 0.4937309 0.12418775 0.504969
		 0.12418745 0.49373081 0.12161557 0.50496888 0.12161522 0.49373072 0.11904331 0.50496876
		 0.11904292 0.49373063 0.11647104 0.50496924 0.13190416 0.49373102 0.12933229 0.50496912
		 0.12933198 0.50719678 0.13061798 0.49150342 0.12804623 0.40017194 0.12738037 0.54893869
		 0.12418316 0.64811695 0.12099811 0.49935272 0.074599035 0.52414048 0.081240252 0.59852803
		 0.12099463 0.47455171 0.081244677 0.54893911 0.12099117 0.44976121 0.12419209 0.49935025
		 0.12098768 0.47455946 0.16713499 0.44976115 0.12098423 0.51859146 0.10468013 0.51859128
		 0.10468005 0.48010647 0.14369506 0.48010558 0.14369488 0.51859283 0.10468017 0.48010606
		 0.143695 0.5185923 0.10468017 0.48010594 0.143695 0.51859212 0.10468017 0.48010594
		 0.14369488 0.51859182 0.10468008 0.4801057 0.143695 0.48342949 0.10468018 0.48812857
		 0.14177656 0.4881289 0.14177656 0.48343134 0.1046803 0.48343 0.10468036 0.48812848
		 0.14177677 0.48343015 0.10468018 0.48812848 0.14177683 0.48812819 0.14177704 0.48343116
		 0.10468036 0.48812824 0.14177689 0.48343033 0.10468027 0.51056874 0.10659915 0.51527065
		 0.14369507 0.51527107 0.14369516 0.51056898 0.10659911 0.51057053 0.10659885 0.51527071
		 0.14369507 0.51056981 0.10659893 0.51527083 0.14369507 0.51056945 0.10659897 0.51527101
		 0.14369507 0.51527083 0.14369516 0.51056975 0.10659902 0.51859385 0.12418863 0.48010558
		 0.12418983 0.53313869 0.10468204 0.4801079 0.10468012 0.48342991 0.14369506 0.4881295
		 0.10659882 0.51859385 0.12418827 0.51859391 0.12418818 0.51859379 0.12418723 0.51859421
		 0.12418973 0.51859421 0.12418965 0.48812908 0.10659882 0.48813015 0.10659891 0.48813033
		 0.10659891 0.48812911 0.10659865 0.4881286 0.10659856 0.4655633 0.10467839 0.49935204
		 0.085172907 0.46556121 0.14369303 0.49934787 0.16320214 0.53313643 0.14369673 0.45640618
		 0.099390969 0.40017229 0.12098074 0.44976074 0.1273838 0.52414823 0.16713051 0.45640358
		 0.1489795 0.49934971 0.1273874 0.49934718 0.17377612 0.54893857 0.12739086 0.54229355
		 0.1489841 0.59852755 0.12739432 0.35058331 0.12097725 0.54229623 0.099395566 0.35058296
		 0.12737691;
	setAttr ".uvst[0].uvsp[250:433]" 0.64811659 0.12739789 0.53836477 0.1241841
		 0.51859403 0.14369489 0.51526785 0.10468035 0.48010543 0.12419049 0.48010534 0.12419075
		 0.48010588 0.12418871 0.4801057 0.12418941 0.48010564 0.12418958 0.51057166 0.14177705
		 0.51057166 0.14177696 0.51057196 0.14177705 0.51057172 0.1417771 0.51057172 0.14177701
		 0.5105716 0.14177684 0.47984564 0.15797727 0.51886046 0.15797371 0.46033514 0.12419114
		 0.47983956 0.0904015 0.51885438 0.090397969 0.50706744 0.12980589 0.50320935 0.13203403
		 0.50063699 0.1320343 0.49806482 0.13203456 0.4954924 0.13203482 0.49292016 0.13203506
		 0.49549061 0.1163413 0.49806309 0.11634104 0.50063527 0.11634073 0.5032075 0.11634043
		 0.50577986 0.11634018 0.49163246 0.1185694 0.50706619 0.12980707 0.50320774 0.13203447
		 0.5006355 0.1320343 0.49806333 0.13203408 0.49549109 0.1320339 0.49291891 0.13203377
		 0.49549213 0.11634077 0.49806431 0.11634095 0.50063658 0.11634108 0.50320882 0.11634126
		 0.50578099 0.11634143 0.49163359 0.11856809 0.49150312 0.12547307 0.49150354 0.12290084
		 0.49150366 0.12032858 0.49150389 0.11775635 0.49150276 0.1306175 0.49373019 0.1319038
		 0.50719708 0.11775778 0.50719684 0.12032996 0.50719666 0.12290223 0.50719643 0.12547445
		 0.50719625 0.12804671 0.50496942 0.11647143 0.49150327 0.12547398 0.49150318 0.12290175
		 0.49150309 0.12032949 0.49150306 0.11775723 0.49150351 0.13061847 0.49373111 0.1319045
		 0.50719643 0.11775678 0.50719649 0.12032901 0.50719661 0.12290128 0.50719666 0.12547348
		 0.50719678 0.12804577 0.50496876 0.11647069 0.49150315 0.12547311 0.49150342 0.12290087
		 0.4915036 0.12032866 0.49150378 0.11775644 0.49150279 0.13061759 0.49373019 0.13190389
		 0.50719708 0.11775757 0.5071969 0.12032978 0.50719661 0.12290207 0.50719643 0.12547427
		 0.50719625 0.1280465 0.50496972 0.11647129 0.49150342 0.12547481 0.49150306 0.12290257
		 0.4915027 0.12033036 0.49150234 0.11775809 0.49150416 0.13061932 0.49373195 0.13190512
		 0.50719571 0.11775592 0.50719607 0.12032813 0.50719643 0.12290045 0.50719678 0.12547266
		 0.50719708 0.12804493 0.50496787 0.11647014 0.49150345 0.12547477 0.49150312 0.12290253
		 0.49150276 0.12033036 0.49150243 0.11775804 0.4915041 0.13061923 0.49373195 0.13190508
		 0.50719571 0.117756 0.50719607 0.12032819 0.50719643 0.12290044 0.50719678 0.12547271
		 0.50719708 0.12804493 0.50496793 0.11647014 0.50063694 0.13203403 0.49806467 0.13203421
		 0.49549231 0.13203447 0.49292037 0.13203473 0.50578123 0.13203351 0.50706708 0.12980585
		 0.49291882 0.11634178 0.49549091 0.11634147 0.49806309 0.11634125 0.50063533 0.11634095
		 0.50320762 0.11634073 0.49163282 0.11856943 0.50063741 0.13203399 0.49806514 0.13203442
		 0.49549294 0.1320349 0.49292082 0.13203533 0.50578189 0.13203308 0.5070675 0.12980524
		 0.49291813 0.11634217 0.49549028 0.11634173 0.49806246 0.1163413 0.50063473 0.11634082
		 0.50320691 0.11634038 0.49163237 0.11856996 0.50063664 0.13203417 0.4980644 0.13203433
		 0.49549213 0.13203451 0.49291989 0.13203473 0.50578105 0.13203372 0.50706697 0.12980603
		 0.49291873 0.11634144 0.49549091 0.11634121 0.49806318 0.11634104 0.50063545 0.11634086
		 0.50320768 0.11634064 0.49163279 0.11856918 0.50063568 0.13203438 0.49806333 0.13203421
		 0.49549112 0.13203408 0.49291891 0.1320339 0.50578022 0.13203464 0.50706631 0.12980711
		 0.49291974 0.11634061 0.4954921 0.11634071 0.49806431 0.11634086 0.5006364 0.11634099
		 0.50320876 0.11634117 0.4916335 0.11856814 0.50063664 0.13203408 0.49806467 0.13203426
		 0.49549231 0.13203447 0.49292001 0.13203469 0.50578123 0.13203363 0.50706697 0.12980594
		 0.49291882 0.11634164 0.495491 0.11634143 0.49806327 0.11634121 0.50063545 0.11634095
		 0.50320762 0.11634073 0.49163291 0.11856931 0.48010695 0.10468018 0.48342901 0.14369506
		 0.48010671 0.10468009 0.48342937 0.143695 0.48342901 0.14369506 0.48010778 0.10468018
		 0.48342946 0.14369488 0.48010617 0.10468027 0.48010665 0.10468027 0.48342937 0.14369506
		 0.51526874 0.10468035 0.51859438 0.14369498 0.51859438 0.14369498 0.51526892 0.10468026
		 0.51526797 0.10468035 0.51859456 0.14369494 0.51859444 0.14369489 0.51526839 0.10468026
		 0.51526946 0.10468026 0.51859415 0.14369498;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 218 ".vt";
	setAttr ".vt[0:165]"  0.31699768 -0.039490759 -0.015655864 0.29891983 -0.039490759 -0.01565587
		 0.28988093 -0.039490759 -2.6938083e-09 0.29891983 -0.039490759 0.015655866 0.31699768 -0.039490759 0.01565587
		 0.3260366 -0.039490759 0 0.31699768 0.039490759 -0.015655864 0.29891983 0.039490759 -0.01565587
		 0.28988093 0.039490759 -2.6938083e-09 0.29891983 0.039490759 0.015655866 0.31699768 0.039490759 0.01565587
		 0.3260366 0.039490759 0 0.30795875 -0.039490759 0 0.30795875 0.039490759 0 -0.31699765 -0.039490759 -0.015655864
		 -0.29891986 -0.039490759 -0.01565587 -0.2898809 -0.039490759 -2.6938083e-09 -0.29891986 -0.039490759 0.015655866
		 -0.31699765 -0.039490759 0.01565587 -0.3260366 -0.039490759 1.6235079e-17 -0.31699765 0.039490759 -0.015655864
		 -0.29891986 0.039490759 -0.01565587 -0.2898809 0.039490759 -2.6938083e-09 -0.29891986 0.039490759 0.015655866
		 -0.31699765 0.039490759 0.01565587 -0.3260366 0.039490759 1.6235079e-17 -0.30795875 -0.039490759 1.4970285e-19
		 -0.30795875 0.039490759 1.742186e-25 -0.015655866 -0.039490759 -0.27759391 -0.01565587 -0.039490759 -0.25951603
		 -3.2238396e-09 -0.039490759 -0.25047714 0.015655866 -0.039490759 -0.25951603 0.015655868 -0.039490759 -0.27759391
		 -5.3003146e-10 -0.039490759 -0.28663281 -0.015655866 0.039490759 -0.27759391 -0.01565587 0.039490759 -0.25951603
		 -3.2238396e-09 0.039490759 -0.25047714 0.015655866 0.039490759 -0.25951603 0.015655868 0.039490759 -0.27759391
		 -5.3003146e-10 0.039490759 -0.28663281 -5.3003146e-10 -0.039490759 -0.26855496 -5.3003146e-10 0.039490759 -0.26855496
		 -0.015655866 -0.039490759 0.27951491 -0.01565587 -0.039490759 0.26143706 -3.2238399e-09 -0.039490759 0.25239813
		 0.015655866 -0.039490759 0.26143706 0.015655868 -0.039490759 0.27951491 -5.300318e-10 -0.039490759 0.2885538
		 -0.015655866 0.039490759 0.27951491 -0.01565587 0.039490759 0.26143706 -3.2238399e-09 0.039490759 0.25239813
		 0.015655866 0.039490759 0.26143706 0.015655868 0.039490759 0.27951491 -5.300318e-10 0.039490759 0.2885538
		 -5.300318e-10 -0.039490759 0.27047598 -5.300318e-10 0.039490759 0.27047598 0.17205723 -0.039490759 0.26670009
		 0.1630183 -0.039490759 0.25104418 0.14494047 -0.039490759 0.25104418 0.13590153 -0.039490759 0.26670009
		 0.14494047 -0.039490759 0.28235596 0.1630183 -0.039490759 0.28235596 0.17205723 0.039490759 0.26670009
		 0.1630183 0.039490759 0.25104418 0.14494047 0.039490759 0.25104418 0.13590153 0.039490759 0.26670009
		 0.14494047 0.039490759 0.28235596 0.1630183 0.039490759 0.28235596 0.15397938 -0.039490759 0.26670009
		 0.15397938 0.039490759 0.26670009 -0.14494045 -0.039490759 -0.28235593 -0.13590156 -0.039490759 -0.26670003
		 -0.14494045 -0.039490759 -0.25104418 -0.1630183 -0.039490759 -0.25104418 -0.17205721 -0.039490759 -0.26670009
		 -0.1630183 -0.039490759 -0.28235593 -0.14494045 0.039490759 -0.28235593 -0.13590156 0.039490759 -0.26670003
		 -0.14494045 0.039490759 -0.25104418 -0.1630183 0.039490759 -0.25104418 -0.17205721 0.039490759 -0.26670009
		 -0.1630183 0.039490759 -0.28235593 -0.15397938 -0.039490759 -0.26670009 -0.15397938 0.039490759 -0.26670009
		 -0.14494047 -0.039490759 0.28235596 -0.13590154 -0.039490759 0.26670009 -0.14494047 -0.039490759 0.25104424
		 -0.1630183 -0.039490759 0.25104418 -0.17205723 -0.039490759 0.26670009 -0.1630183 -0.039490759 0.28235596
		 -0.14494047 0.039490759 0.28235596 -0.13590154 0.039490759 0.26670009 -0.14494047 0.039490759 0.25104424
		 -0.1630183 0.039490759 0.25104418 -0.17205723 0.039490759 0.26670009 -0.1630183 0.039490759 0.28235596
		 -0.15397938 -0.039490759 0.26670009 -0.15397938 0.039490759 0.26670009 0.17205721 -0.039490759 -0.26670009
		 0.1630183 -0.039490759 -0.25104418 0.14494045 -0.039490759 -0.25104418 0.13590154 -0.039490759 -0.26670003
		 0.14494045 -0.039490759 -0.28235593 0.1630183 -0.039490759 -0.28235593 0.17205721 0.039490759 -0.26670009
		 0.1630183 0.039490759 -0.25104418 0.14494045 0.039490759 -0.25104418 0.13590154 0.039490759 -0.26670003
		 0.14494045 0.039490759 -0.28235593 0.1630183 0.039490759 -0.28235593 0.15397938 -0.039490759 -0.26670009
		 0.15397938 0.039490759 -0.26670009 -0.24823129 -0.039490759 -0.12523857 -0.23257542 -0.039490759 -0.11619963
		 -0.21691956 -0.039490759 -0.12523857 -0.21691956 -0.039490759 -0.1433164 -0.23257542 -0.039490759 -0.15235533
		 -0.24823129 -0.039490759 -0.1433164 -0.24823129 0.039490759 -0.12523857 -0.23257542 0.039490759 -0.11619963
		 -0.21691956 0.039490759 -0.12523857 -0.21691956 0.039490759 -0.1433164 -0.23257542 0.039490759 -0.15235533
		 -0.24823129 0.039490759 -0.1433164 -0.23257542 -0.039490759 -0.13427748 -0.23257542 0.039490759 -0.13427748
		 0.23423903 -0.039490759 0.15331583 0.21858318 -0.039490759 0.1442769 0.21858318 -0.039490759 0.12619907
		 0.23423906 -0.039490759 0.11716015 0.24989492 -0.039490759 0.12619907 0.24989492 -0.039490759 0.1442769
		 0.23423903 0.039490759 0.15331583 0.21858318 0.039490759 0.1442769 0.21858318 0.039490759 0.12619907
		 0.23423906 0.039490759 0.11716015 0.24989492 0.039490759 0.12619907 0.24989492 0.039490759 0.1442769
		 0.23423906 -0.039490759 0.13523799 0.23423906 0.039490759 0.13523799 -0.23257542 -0.039490759 0.15235533
		 -0.21691956 -0.039490759 0.1433164 -0.21691956 -0.039490759 0.12523857 -0.23257542 -0.039490759 0.11619963
		 -0.24823129 -0.039490759 0.12523857 -0.24823129 -0.039490759 0.1433164 -0.23257542 0.039490759 0.15235533
		 -0.21691956 0.039490759 0.1433164 -0.21691956 0.039490759 0.12523857 -0.23257542 0.039490759 0.11619963
		 -0.24823129 0.039490759 0.12523857 -0.24823129 0.039490759 0.1433164 -0.23257542 -0.039490759 0.13427748
		 -0.23257542 0.039490759 0.13427748 0.24989492 -0.039490759 -0.12619907 0.23423906 -0.039490759 -0.11716015
		 0.21858318 -0.039490759 -0.12619907 0.21858318 -0.039490759 -0.1442769 0.23423903 -0.039490759 -0.15331583
		 0.24989492 -0.039490759 -0.1442769 0.24989492 0.039490759 -0.12619907 0.23423906 0.039490759 -0.11716015
		 0.21858318 0.039490759 -0.12619907 0.21858318 0.039490759 -0.1442769 0.23423903 0.039490759 -0.15331583
		 0.24989492 0.039490759 -0.1442769;
	setAttr ".vt[166:217]" 0.23423906 -0.039490759 -0.13523799 0.23423906 0.039490759 -0.13523799
		 0.13709912 -0.022488622 -0.23746245 -0.13709894 -0.022488622 -0.23746245 -0.27419823 -0.022488622 -4.0858691e-08
		 -0.13709912 -0.022488622 0.23746245 0.13709912 -0.022488622 0.23746245 0.27419823 -0.022488622 0
		 0.13709912 0.022488622 -0.23746245 -0.13709894 0.022488622 -0.23746245 -0.27419823 0.022488622 -4.0858691e-08
		 -0.13709912 0.022488622 0.23746245 0.13709912 0.022488622 0.23746245 0.27419823 0.022488622 0
		 0.17425619 -0.022488622 -0.3018204 -0.17425598 -0.022488622 -0.3018204 -0.17425598 0.022488622 -0.3018204
		 0.17425619 0.022488622 -0.3018204 -0.34851238 -0.022488622 -6.9440716e-08 -0.34851238 0.022488622 -6.9440716e-08
		 -0.17425619 -0.022488622 0.3018204 -0.17425619 0.022488622 0.3018204 0.17425619 -0.022488622 0.3018204
		 0.17425619 0.022488622 0.3018204 0.34851238 -0.022488622 0 0.34851238 0.022488622 0
		 9.2057881e-08 0.06919831 1.194151e-10 4.0068292e-07 -0.06919831 -4.1389892e-15 -0.27419767 0.045845948 -9.0831179e-08
		 -0.24723248 0.06919831 4.414392e-09 -0.12361635 0.06919831 0.2141099 -0.13709912 0.045845803 0.23746234
		 -0.12361673 0.06919831 -0.21410984 -0.13709891 0.045845803 -0.23746234 0.13709892 0.045845881 -0.23746239
		 0.1236166 0.06919831 -0.21410991 0.1236158 0.06919831 0.21410991 0.13709871 0.045845881 0.23746245
		 0.24723271 0.06919831 -5.0151634e-08 0.27419767 0.045845948 -5.0151634e-08 -0.12361632 -0.06919831 -0.21410984
		 -0.13709892 -0.045845803 -0.23746239 -0.27419785 -0.045845948 -4.0858694e-08 -0.2472325 -0.06919831 -4.6077876e-08
		 0.2472325 -0.06919831 0 0.27419785 -0.045845941 0 0.13709892 -0.045845803 -0.23746239
		 0.12361614 -0.06919831 -0.21410984 -0.1236162 -0.06919831 0.21410991 -0.13709892 -0.045845881 0.23746239
		 0.13709892 -0.045845877 0.23746239 0.1236162 -0.06919831 0.21410991;
	setAttr -s 462 ".ed";
	setAttr ".ed[0:165]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0 7 8 0 8 9 0
		 9 10 0 10 11 0 11 6 0 0 6 0 1 7 0 2 8 0 3 9 0 4 10 0 5 11 0 12 0 1 12 1 1 12 2 1
		 12 3 1 12 4 1 12 5 1 6 13 1 7 13 1 8 13 1 9 13 1 10 13 1 11 13 1 14 15 0 15 21 0
		 20 21 0 14 20 0 15 16 0 16 22 0 21 22 0 16 17 0 17 23 0 22 23 0 17 18 0 18 24 0 23 24 0
		 18 19 0 19 25 0 24 25 0 19 14 0 25 20 0 26 14 1 26 15 1 26 16 1 26 17 1 26 18 1 26 19 1
		 21 27 1 20 27 1 22 27 1 23 27 1 24 27 1 25 27 1 28 29 0 29 30 0 30 31 0 31 32 0 32 33 0
		 33 28 0 34 35 0 35 36 0 36 37 0 37 38 0 38 39 0 39 34 0 28 34 0 29 35 0 30 36 0 31 37 0
		 32 38 0 33 39 0 40 28 1 40 29 1 40 30 1 40 31 1 40 32 1 40 33 1 34 41 1 35 41 1 36 41 1
		 37 41 1 38 41 1 39 41 1 42 43 0 43 49 0 48 49 0 42 48 0 43 44 0 44 50 0 49 50 0 44 45 0
		 45 51 0 50 51 0 45 46 0 46 52 0 51 52 0 46 47 0 47 53 0 52 53 0 47 42 0 53 48 0 54 42 1
		 54 43 1 54 44 1 54 45 1 54 46 1 54 47 1 49 55 1 48 55 1 50 55 1 51 55 1 52 55 1 53 55 1
		 56 57 0 57 58 0 58 59 0 59 60 0 60 61 0 61 56 0 62 63 0 63 64 0 64 65 0 65 66 0 66 67 0
		 67 62 0 56 62 0 57 63 0 58 64 0 59 65 0 60 66 0 61 67 0 68 56 1 68 57 1 68 58 1 68 59 1
		 68 60 1 68 61 1 62 69 1 63 69 1 64 69 1 65 69 1 66 69 1 67 69 1 70 71 0 71 77 0 76 77 0
		 70 76 0 71 72 0 72 78 0 77 78 0 72 73 0 73 79 0 78 79 0 73 74 0 74 80 0 79 80 0 74 75 0
		 75 81 0 80 81 0;
	setAttr ".ed[166:331]" 75 70 0 81 76 0 82 70 1 82 71 1 82 72 1 82 73 1 82 74 1
		 82 75 1 77 83 1 76 83 1 78 83 1 79 83 1 80 83 1 81 83 1 84 85 0 85 86 0 86 87 0 87 88 0
		 88 89 0 89 84 0 90 91 0 91 92 0 92 93 0 93 94 0 94 95 0 95 90 0 84 90 0 85 91 0 86 92 0
		 87 93 0 88 94 0 89 95 0 96 84 1 96 85 1 96 86 1 96 87 1 96 88 1 96 89 1 90 97 1 91 97 1
		 92 97 1 93 97 1 94 97 1 95 97 1 98 99 0 99 105 0 104 105 0 98 104 0 99 100 0 100 106 0
		 105 106 0 100 101 0 101 107 0 106 107 0 101 102 0 102 108 0 107 108 0 102 103 0 103 109 0
		 108 109 0 103 98 0 109 104 0 110 98 1 110 99 1 110 100 1 110 101 1 110 102 1 110 103 1
		 105 111 1 104 111 1 106 111 1 107 111 1 108 111 1 109 111 1 112 113 0 113 114 0 114 115 0
		 115 116 0 116 117 0 117 112 0 118 119 0 119 120 0 120 121 0 121 122 0 122 123 0 123 118 0
		 112 118 0 113 119 0 114 120 0 115 121 0 116 122 0 117 123 0 124 112 1 124 113 1 124 114 1
		 124 115 1 124 116 1 124 117 1 118 125 1 119 125 1 120 125 1 121 125 1 122 125 1 123 125 1
		 126 127 0 127 133 0 132 133 0 126 132 0 127 128 0 128 134 0 133 134 0 128 129 0 129 135 0
		 134 135 0 129 130 0 130 136 0 135 136 0 130 131 0 131 137 0 136 137 0 131 126 0 137 132 0
		 138 126 1 138 127 1 138 128 1 138 129 1 138 130 1 138 131 1 133 139 1 132 139 1 134 139 1
		 135 139 1 136 139 1 137 139 1 140 141 0 141 142 0 142 143 0 143 144 0 144 145 0 145 140 0
		 146 147 0 147 148 0 148 149 0 149 150 0 150 151 0 151 146 0 140 146 0 141 147 0 142 148 0
		 143 149 0 144 150 0 145 151 0 152 140 1 152 141 1 152 142 1 152 143 1 152 144 1 152 145 1
		 146 153 1 147 153 1 148 153 1 149 153 1 150 153 1 151 153 1 154 155 0 155 161 0;
	setAttr ".ed[332:461]" 160 161 0 154 160 0 155 156 0 156 162 0 161 162 0 156 157 0
		 157 163 0 162 163 0 157 158 0 158 164 0 163 164 0 158 159 0 159 165 0 164 165 0 159 154 0
		 165 160 0 166 154 1 166 155 1 166 156 1 166 157 1 166 158 1 166 159 1 161 167 1 160 167 1
		 162 167 1 163 167 1 164 167 1 165 167 1 168 169 0 169 170 0 170 171 0 171 172 0 172 173 0
		 173 168 0 174 175 0 175 176 0 176 177 0 177 178 0 178 179 0 179 174 0 168 180 1 169 181 1
		 180 181 0 175 182 1 181 182 0 174 183 1 183 182 0 180 183 0 170 184 1 181 184 0 176 185 1
		 184 185 0 182 185 0 171 186 1 184 186 0 177 187 1 186 187 0 185 187 0 172 188 1 186 188 0
		 178 189 1 188 189 0 187 189 0 173 190 1 188 190 0 179 191 1 190 191 0 189 191 0 190 180 0
		 191 183 0 194 195 0 195 198 0 198 199 0 199 194 0 194 197 0 197 196 0 196 195 0 197 203 0
		 203 202 0 202 196 0 198 201 0 201 200 0 200 199 0 201 204 0 204 205 0 205 200 0 203 205 0
		 204 202 0 206 207 0 207 212 0 212 213 0 213 206 0 206 209 0 209 208 0 208 207 0 209 214 0
		 214 215 0 215 208 0 210 211 0 211 216 0 216 217 0 217 210 0 210 213 0 212 211 0 214 217 0
		 216 215 0 192 195 1 196 192 1 206 193 1 193 209 1 198 192 1 192 201 1 202 192 1 204 192 1
		 210 193 1 193 213 1 214 193 1 193 217 1 177 197 0 194 176 0 175 199 0 200 174 0 178 203 0
		 179 205 0 169 207 0 208 170 0 173 211 0 212 168 0 171 215 0 216 172 0;
	setAttr -s 270 -ch 924 ".fc[0:269]" -type "polyFaces" 
		f 4 0 13 -7 -13
		mu 0 4 329 1 2 3
		f 4 1 14 -8 -14
		mu 0 4 1 4 5 2
		f 4 2 15 -9 -15
		mu 0 4 4 6 7 5
		f 4 3 16 -10 -16
		mu 0 4 6 8 9 7
		f 4 4 17 -11 -17
		mu 0 4 8 10 11 9
		f 4 5 12 -12 -18
		mu 0 4 10 0 323 11
		f 3 -1 -19 19
		mu 0 3 1 329 324
		f 3 -2 -20 20
		mu 0 3 4 1 325
		f 3 -3 -21 21
		mu 0 3 6 4 326
		f 3 -4 -22 22
		mu 0 3 8 6 327
		f 3 -5 -23 23
		mu 0 3 10 8 328
		f 3 -6 -24 18
		mu 0 3 0 10 12
		f 3 6 25 -25
		mu 0 3 3 2 321
		f 3 7 26 -26
		mu 0 3 2 5 320
		f 3 8 27 -27
		mu 0 3 5 7 319
		f 3 9 28 -28
		mu 0 3 7 9 318
		f 3 10 29 -29
		mu 0 3 9 11 13
		f 3 11 24 -30
		mu 0 3 11 323 322
		f 4 33 32 -32 -31
		mu 0 4 14 15 16 17
		f 4 31 36 -36 -35
		mu 0 4 17 16 18 19
		f 4 35 39 -39 -38
		mu 0 4 19 18 20 21
		f 4 38 42 -42 -41
		mu 0 4 21 20 22 401
		f 4 41 45 -45 -44
		mu 0 4 23 395 24 25
		f 4 44 47 -34 -47
		mu 0 4 25 24 15 14
		f 3 -50 48 30
		mu 0 3 17 399 14
		f 3 -51 49 34
		mu 0 3 19 398 17
		f 3 -52 50 37
		mu 0 3 21 397 19
		f 3 -53 51 40
		mu 0 3 401 396 21
		f 3 -54 52 43
		mu 0 3 25 26 23
		f 3 -49 53 46
		mu 0 3 14 400 25
		f 3 55 -55 -33
		mu 0 3 15 390 16
		f 3 54 -57 -37
		mu 0 3 16 391 18
		f 3 56 -58 -40
		mu 0 3 18 392 20
		f 3 57 -59 -43
		mu 0 3 20 393 22
		f 3 58 -60 -46
		mu 0 3 395 394 24
		f 3 59 -56 -48
		mu 0 3 24 27 15
		f 4 60 73 -67 -73
		mu 0 4 28 29 30 31
		f 4 61 74 -68 -74
		mu 0 4 29 32 33 30
		f 4 62 75 -69 -75
		mu 0 4 32 34 35 33
		f 4 63 76 -70 -76
		mu 0 4 34 36 37 35
		f 4 64 77 -71 -77
		mu 0 4 36 38 282 37
		f 4 65 72 -72 -78
		mu 0 4 293 28 31 39
		f 3 -61 -79 79
		mu 0 3 29 28 288
		f 3 -62 -80 80
		mu 0 3 32 29 289
		f 3 -63 -81 81
		mu 0 3 34 32 290
		f 3 -64 -82 82
		mu 0 3 36 34 291
		f 3 -65 -83 83
		mu 0 3 38 36 292
		f 3 -66 -84 78
		mu 0 3 28 293 40
		f 3 66 85 -85
		mu 0 3 31 30 286
		f 3 67 86 -86
		mu 0 3 30 33 285
		f 3 68 87 -87
		mu 0 3 33 35 284
		f 3 69 88 -88
		mu 0 3 35 37 283
		f 3 70 89 -89
		mu 0 3 37 282 41
		f 3 71 84 -90
		mu 0 3 39 31 287
		f 4 93 92 -92 -91
		mu 0 4 42 43 44 45
		f 4 91 96 -96 -95
		mu 0 4 45 44 46 47
		f 4 95 99 -99 -98
		mu 0 4 47 46 48 49
		f 4 98 102 -102 -101
		mu 0 4 49 48 50 365
		f 4 101 105 -105 -104
		mu 0 4 51 359 52 53
		f 4 104 107 -94 -107
		mu 0 4 53 52 43 42
		f 3 -110 108 90
		mu 0 3 45 363 42
		f 3 -111 109 94
		mu 0 3 47 362 45
		f 3 -112 110 97
		mu 0 3 49 361 47
		f 3 -113 111 100
		mu 0 3 365 360 49
		f 3 -114 112 103
		mu 0 3 53 54 51
		f 3 -109 113 106
		mu 0 3 42 364 53
		f 3 115 -115 -93
		mu 0 3 43 354 44
		f 3 114 -117 -97
		mu 0 3 44 355 46
		f 3 116 -118 -100
		mu 0 3 46 356 48
		f 3 117 -119 -103
		mu 0 3 48 357 50
		f 3 118 -120 -106
		mu 0 3 359 358 52
		f 3 119 -116 -108
		mu 0 3 52 55 43
		f 4 120 133 -127 -133
		mu 0 4 353 57 58 59
		f 4 121 134 -128 -134
		mu 0 4 57 60 61 58
		f 4 122 135 -129 -135
		mu 0 4 60 62 63 61
		f 4 123 136 -130 -136
		mu 0 4 62 64 65 63
		f 4 124 137 -131 -137
		mu 0 4 64 66 67 65
		f 4 125 132 -132 -138
		mu 0 4 66 56 347 67
		f 3 -121 -139 139
		mu 0 3 57 353 348
		f 3 -122 -140 140
		mu 0 3 60 57 349
		f 3 -123 -141 141
		mu 0 3 62 60 350
		f 3 -124 -142 142
		mu 0 3 64 62 351
		f 3 -125 -143 143
		mu 0 3 66 64 352
		f 3 -126 -144 138
		mu 0 3 56 66 68
		f 3 126 145 -145
		mu 0 3 59 58 345
		f 3 127 146 -146
		mu 0 3 58 61 344
		f 3 128 147 -147
		mu 0 3 61 63 343
		f 3 129 148 -148
		mu 0 3 63 65 342
		f 3 130 149 -149
		mu 0 3 65 67 69
		f 3 131 144 -150
		mu 0 3 67 347 346
		f 4 153 152 -152 -151
		mu 0 4 70 71 72 73
		f 4 151 156 -156 -155
		mu 0 4 73 72 74 75
		f 4 155 159 -159 -158
		mu 0 4 75 74 76 77
		f 4 158 162 -162 -161
		mu 0 4 77 76 78 79
		f 4 161 165 -165 -164
		mu 0 4 79 78 80 281
		f 4 164 167 -154 -167
		mu 0 4 81 270 71 70
		f 3 -170 168 150
		mu 0 3 73 279 70
		f 3 -171 169 154
		mu 0 3 75 278 73
		f 3 -172 170 157
		mu 0 3 77 277 75
		f 3 -173 171 160
		mu 0 3 79 276 77
		f 3 -174 172 163
		mu 0 3 281 82 79
		f 3 -169 173 166
		mu 0 3 70 280 81
		f 3 175 -175 -153
		mu 0 3 71 271 72
		f 3 174 -177 -157
		mu 0 3 72 272 74
		f 3 176 -178 -160
		mu 0 3 74 273 76
		f 3 177 -179 -163
		mu 0 3 76 274 78
		f 3 178 -180 -166
		mu 0 3 78 275 80
		f 3 179 -176 -168
		mu 0 3 270 83 71
		f 4 180 193 -187 -193
		mu 0 4 377 85 86 87
		f 4 181 194 -188 -194
		mu 0 4 85 88 89 86
		f 4 182 195 -189 -195
		mu 0 4 88 90 91 89
		f 4 183 196 -190 -196
		mu 0 4 90 92 93 91
		f 4 184 197 -191 -197
		mu 0 4 92 94 95 93
		f 4 185 192 -192 -198
		mu 0 4 94 84 371 95
		f 3 -181 -199 199
		mu 0 3 85 377 372
		f 3 -182 -200 200
		mu 0 3 88 85 373
		f 3 -183 -201 201
		mu 0 3 90 88 374
		f 3 -184 -202 202
		mu 0 3 92 90 375
		f 3 -185 -203 203
		mu 0 3 94 92 376
		f 3 -186 -204 198
		mu 0 3 84 94 96
		f 3 186 205 -205
		mu 0 3 87 86 369
		f 3 187 206 -206
		mu 0 3 86 89 368
		f 3 188 207 -207
		mu 0 3 89 91 367
		f 3 189 208 -208
		mu 0 3 91 93 366
		f 3 190 209 -209
		mu 0 3 93 95 97
		f 3 191 204 -210
		mu 0 3 95 371 370
		f 4 213 212 -212 -211
		mu 0 4 98 99 100 101
		f 4 211 216 -216 -215
		mu 0 4 101 100 102 103
		f 4 215 219 -219 -218
		mu 0 4 103 102 104 105
		f 4 218 222 -222 -221
		mu 0 4 105 104 106 305
		f 4 221 225 -225 -224
		mu 0 4 107 299 108 109
		f 4 224 227 -214 -227
		mu 0 4 109 108 99 98
		f 3 -230 228 210
		mu 0 3 101 303 98
		f 3 -231 229 214
		mu 0 3 103 302 101
		f 3 -232 230 217
		mu 0 3 105 301 103
		f 3 -233 231 220
		mu 0 3 305 300 105
		f 3 -234 232 223
		mu 0 3 109 110 107
		f 3 -229 233 226
		mu 0 3 98 304 109
		f 3 235 -235 -213
		mu 0 3 99 294 100
		f 3 234 -237 -217
		mu 0 3 100 295 102
		f 3 236 -238 -220
		mu 0 3 102 296 104
		f 3 237 -239 -223
		mu 0 3 104 297 106
		f 3 238 -240 -226
		mu 0 3 299 298 108
		f 3 239 -236 -228
		mu 0 3 108 111 99
		f 4 240 253 -247 -253
		mu 0 4 413 113 114 115
		f 4 241 254 -248 -254
		mu 0 4 113 116 117 114
		f 4 242 255 -249 -255
		mu 0 4 116 118 119 117
		f 4 243 256 -250 -256
		mu 0 4 118 120 121 119
		f 4 244 257 -251 -257
		mu 0 4 120 122 123 121
		f 4 245 252 -252 -258
		mu 0 4 122 112 407 123
		f 3 -241 -259 259
		mu 0 3 113 413 408
		f 3 -242 -260 260
		mu 0 3 116 113 409
		f 3 -243 -261 261
		mu 0 3 118 116 410
		f 3 -244 -262 262
		mu 0 3 120 118 411
		f 3 -245 -263 263
		mu 0 3 122 120 412
		f 3 -246 -264 258
		mu 0 3 112 122 124
		f 3 246 265 -265
		mu 0 3 115 114 405
		f 3 247 266 -266
		mu 0 3 114 117 404
		f 3 248 267 -267
		mu 0 3 117 119 403
		f 3 249 268 -268
		mu 0 3 119 121 402
		f 3 250 269 -269
		mu 0 3 121 123 125
		f 3 251 264 -270
		mu 0 3 123 407 406
		f 4 273 272 -272 -271
		mu 0 4 126 127 128 129
		f 4 271 276 -276 -275
		mu 0 4 129 128 130 131
		f 4 275 279 -279 -278
		mu 0 4 131 130 132 133
		f 4 278 282 -282 -281
		mu 0 4 133 132 134 341
		f 4 281 285 -285 -284
		mu 0 4 135 335 136 137
		f 4 284 287 -274 -287
		mu 0 4 137 136 127 126
		f 3 -290 288 270
		mu 0 3 129 339 126
		f 3 -291 289 274
		mu 0 3 131 338 129
		f 3 -292 290 277
		mu 0 3 133 337 131
		f 3 -293 291 280
		mu 0 3 341 336 133
		f 3 -294 292 283
		mu 0 3 137 138 135
		f 3 -289 293 286
		mu 0 3 126 340 137
		f 3 295 -295 -273
		mu 0 3 127 330 128
		f 3 294 -297 -277
		mu 0 3 128 331 130
		f 3 296 -298 -280
		mu 0 3 130 332 132
		f 3 297 -299 -283
		mu 0 3 132 333 134
		f 3 298 -300 -286
		mu 0 3 335 334 136
		f 3 299 -296 -288
		mu 0 3 136 139 127
		f 4 300 313 -307 -313
		mu 0 4 389 141 142 143
		f 4 301 314 -308 -314
		mu 0 4 141 144 145 142
		f 4 302 315 -309 -315
		mu 0 4 144 146 147 145
		f 4 303 316 -310 -316
		mu 0 4 146 148 149 147
		f 4 304 317 -311 -317
		mu 0 4 148 150 151 149
		f 4 305 312 -312 -318
		mu 0 4 150 140 383 151
		f 3 -301 -319 319
		mu 0 3 141 389 384
		f 3 -302 -320 320
		mu 0 3 144 141 385
		f 3 -303 -321 321
		mu 0 3 146 144 386
		f 3 -304 -322 322
		mu 0 3 148 146 387
		f 3 -305 -323 323
		mu 0 3 150 148 388
		f 3 -306 -324 318
		mu 0 3 140 150 152
		f 3 306 325 -325
		mu 0 3 143 142 381
		f 3 307 326 -326
		mu 0 3 142 145 380
		f 3 308 327 -327
		mu 0 3 145 147 379
		f 3 309 328 -328
		mu 0 3 147 149 378
		f 3 310 329 -329
		mu 0 3 149 151 153
		f 3 311 324 -330
		mu 0 3 151 383 382
		f 4 333 332 -332 -331
		mu 0 4 154 155 156 157
		f 4 331 336 -336 -335
		mu 0 4 157 156 158 159
		f 4 335 339 -339 -338
		mu 0 4 159 158 160 161
		f 4 338 342 -342 -341
		mu 0 4 161 160 162 317
		f 4 341 345 -345 -344
		mu 0 4 163 311 164 165
		f 4 344 347 -334 -347
		mu 0 4 165 164 155 154
		f 3 -350 348 330
		mu 0 3 157 315 154
		f 3 -351 349 334
		mu 0 3 159 314 157
		f 3 -352 350 337
		mu 0 3 161 313 159
		f 3 -353 351 340
		mu 0 3 317 312 161
		f 3 -354 352 343
		mu 0 3 165 166 163
		f 3 -349 353 346
		mu 0 3 154 316 165
		f 3 355 -355 -333
		mu 0 3 155 306 156
		f 3 354 -357 -337
		mu 0 3 156 307 158
		f 3 356 -358 -340
		mu 0 3 158 308 160
		f 3 357 -359 -343
		mu 0 3 160 309 162
		f 3 358 -360 -346
		mu 0 3 311 310 164
		f 3 359 -356 -348
		mu 0 3 164 167 155
		f 4 374 376 -379 -380
		mu 0 4 168 249 247 238
		f 4 381 383 -385 -377
		mu 0 4 250 246 173 170
		f 4 386 388 -390 -384
		mu 0 4 246 244 175 173
		f 4 391 393 -395 -389
		mu 0 4 244 242 177 175
		f 4 396 398 -400 -394
		mu 0 4 242 239 179 177
		f 4 400 379 -402 -399
		mu 0 4 239 168 238 179
		f 4 360 373 -375 -373
		mu 0 4 266 251 169 240
		f 4 -367 377 378 -376
		mu 0 4 218 233 171 248
		f 4 361 380 -382 -374
		mu 0 4 251 269 172 169
		f 4 -368 375 384 -383
		mu 0 4 236 218 248 245
		f 4 362 385 -387 -381
		mu 0 4 269 268 174 172
		f 4 -369 382 389 -388
		mu 0 4 235 236 245 243
		f 4 363 390 -392 -386
		mu 0 4 268 267 176 174
		f 4 -370 387 394 -393
		mu 0 4 234 235 243 241
		f 4 364 395 -397 -391
		mu 0 4 267 265 178 176
		f 4 -371 392 399 -398
		mu 0 4 232 234 241 237
		f 4 365 372 -401 -396
		mu 0 4 265 266 240 178
		f 4 -372 397 401 -378
		mu 0 4 233 232 237 171
		f 4 402 403 404 405
		mu 0 4 192 231 194 220
		f 4 -403 406 407 408
		mu 0 4 193 420 196 230
		f 4 -408 409 410 411
		mu 0 4 197 423 198 227
		f 4 -405 412 413 414
		mu 0 4 195 229 200 418
		f 4 -414 415 416 417
		mu 0 4 201 228 202 415
		f 4 -411 418 -417 419
		mu 0 4 199 417 203 221
		f 4 420 421 422 423
		mu 0 4 204 253 206 261
		f 4 -421 424 425 426
		mu 0 4 205 264 208 432
		f 4 -426 427 428 429
		mu 0 4 209 263 210 427
		f 4 430 431 432 433
		mu 0 4 212 431 214 259
		f 4 -431 434 -423 435
		mu 0 4 213 262 207 428
		f 4 -429 436 -433 437
		mu 0 4 211 260 215 424
		f 3 438 -409 439
		mu 0 3 223 193 230
		f 3 440 441 -425
		mu 0 3 264 256 208
		f 3 442 443 -413
		mu 0 3 229 225 200
		f 3 -440 -412 444
		mu 0 3 222 197 227
		f 3 445 -445 -420
		mu 0 3 221 216 199
		f 3 -444 -446 -416
		mu 0 3 228 226 202
		f 3 -404 -439 -443
		mu 0 3 194 231 224
		f 3 446 447 -435
		mu 0 3 262 254 207
		f 3 448 449 -437
		mu 0 3 260 258 215
		f 3 -442 -449 -428
		mu 0 3 263 257 210
		f 3 -424 -448 -441
		mu 0 3 204 261 255
		f 3 -450 -447 -434
		mu 0 3 259 217 212
		f 4 368 450 -407 451
		mu 0 4 185 422 196 420
		f 4 366 452 -415 453
		mu 0 4 183 219 195 418
		f 4 369 454 -410 -451
		mu 0 4 187 416 198 423
		f 4 370 455 -419 -455
		mu 0 4 189 414 203 417
		f 4 371 -454 -418 -456
		mu 0 4 191 419 201 415
		f 4 367 -452 -406 -453
		mu 0 4 182 421 192 220
		f 4 -362 456 -427 457
		mu 0 4 184 252 205 432
		f 4 -366 458 -436 459
		mu 0 4 180 430 213 428
		f 4 -364 460 -438 461
		mu 0 4 188 426 211 424
		f 4 -363 -458 -430 -461
		mu 0 4 186 433 209 427
		f 4 -361 -460 -422 -457
		mu 0 4 181 429 206 253
		f 4 -365 -462 -432 -459
		mu 0 4 190 425 214 431;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Large";
	rename -uid "B6A05E2A-4B73-BD2C-53B1-89B5816CC11B";
createNode transform -n "Large_Single" -p "Large";
	rename -uid "AEABAB00-451E-0A8F-2FEA-7BAE15EF3E36";
createNode mesh -n "Large_SingleShape" -p "Large_Single";
	rename -uid "53F83C9A-4247-CD55-07DA-1BBBEE121672";
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
	setAttr ".pv" -type "double2" 0.49790796637535095 0.12030754188445369 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.68575656 0.067439407
		 0.592408 0.067431912 0.59241217 0.014548793 0.68576086 0.014556356 0.49905932 0.067424491
		 0.49906355 0.014541447 0.40571073 0.067417026 0.4057149 0.014533967 0.31236196 0.067409486
		 0.31236613 0.014526486 0.77910531 0.067446873 0.77910948 0.014563814 0.68574822 0.17320554
		 0.59239954 0.1731981 0.59240371 0.12031492 0.68575245 0.12032247 0.4990508 0.17319062
		 0.49905509 0.12030752 0.40570214 0.17318305 0.40570644 0.12030005 0.31235349 0.17317572
		 0.31235772 0.1202926 0.77909684 0.17321301 0.21900901 0.12028515 0.68574393 0.22608858
		 0.59239531 0.2260811 0.49904662 0.2260737 0.40569791 0.22606617 0.3123492 0.22605866
		 0.21900055 0.22605127 0.2190133 0.067402124 0.21901751 0.014518976 0.21900478 0.17316824
		 0.77910107 0.1203299 0.77909261 0.22609606;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 30 ".vt[0:29]"  0.44129789 0 -0.76434976 -0.44129726 0 -0.76434976
		 -0.88259578 0 -1.3151691e-07 -0.44129789 0 0.76434976 0.44129789 0 0.76434976 0.88259578 0 0
		 0.44129789 2 -0.76434976 -0.44129726 2 -0.76434976 -0.88259578 2 -1.3151691e-07 -0.44129789 2 0.76434976
		 0.44129789 2 0.76434976 0.88259578 2 0 0.44129789 1 -0.76434976 -0.44129726 1 -0.76434976
		 -0.88259578 1 -1.3151691e-07 -0.44129789 1 0.76434976 0.44129789 1 0.76434976 0.88259578 1 0
		 0.44129789 0.5 -0.76434976 -0.44129726 0.5 -0.76434976 -0.88259578 0.5 -1.3151691e-07
		 -0.44129789 0.5 0.76434976 0.44129789 0.5 0.76434976 0.88259578 0.5 0 0.44129789 1.5 -0.76434976
		 -0.44129726 1.5 -0.76434976 -0.88259578 1.5 -1.3151691e-07 -0.44129789 1.5 0.76434976
		 0.44129789 1.5 0.76434976 0.88259578 1.5 0;
	setAttr -s 54 ".ed[0:53]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 0 18 1 1 19 1 2 20 1 3 21 1 4 22 1 5 23 1 12 24 1
		 13 25 1 14 26 1 15 27 1 16 28 1 17 29 1 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1 17 12 1
		 18 12 1 19 13 1 20 14 1 21 15 1 22 16 1 23 17 1 18 19 1 19 20 1 20 21 1 21 22 1 22 23 1
		 23 18 1 24 6 1 25 7 1 26 8 1 27 9 1 28 10 1 29 11 1 24 25 1 25 26 1 26 27 1 27 28 1
		 28 29 1 29 24 1;
	setAttr -s 24 -ch 96 ".fc[0:23]" -type "polyFaces" 
		f 4 48 43 -7 -43
		mu 0 4 0 1 2 3
		f 4 49 44 -8 -44
		mu 0 4 1 4 5 2
		f 4 50 45 -9 -45
		mu 0 4 4 6 7 5
		f 4 51 46 -10 -46
		mu 0 4 6 8 9 7
		f 4 52 47 -11 -47
		mu 0 4 8 30 31 9
		f 4 53 42 -12 -48
		mu 0 4 10 0 3 11
		f 4 36 31 -25 -31
		mu 0 4 12 13 14 15
		f 4 37 32 -26 -32
		mu 0 4 13 16 17 14
		f 4 38 33 -27 -33
		mu 0 4 16 18 19 17
		f 4 39 34 -28 -34
		mu 0 4 18 20 21 19
		f 4 40 35 -29 -35
		mu 0 4 20 32 23 21
		f 4 41 30 -30 -36
		mu 0 4 22 12 15 33
		f 4 0 13 -37 -13
		mu 0 4 24 25 13 12
		f 4 1 14 -38 -14
		mu 0 4 25 26 16 13
		f 4 2 15 -39 -15
		mu 0 4 26 27 18 16
		f 4 3 16 -40 -16
		mu 0 4 27 28 20 18
		f 4 4 17 -41 -17
		mu 0 4 28 29 32 20
		f 4 5 12 -42 -18
		mu 0 4 34 24 12 22
		f 4 24 19 -49 -19
		mu 0 4 15 14 1 0
		f 4 25 20 -50 -20
		mu 0 4 14 17 4 1
		f 4 26 21 -51 -21
		mu 0 4 17 19 6 4
		f 4 27 22 -52 -22
		mu 0 4 19 21 8 6
		f 4 28 23 -53 -23
		mu 0 4 21 23 30 8
		f 4 29 18 -54 -24
		mu 0 4 33 15 0 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Large_Half" -p "Large";
	rename -uid "0F1DF431-485A-4130-806F-F5A98D83B15F";
createNode mesh -n "Large_HalfShape" -p "Large_Half";
	rename -uid "787A553D-485C-1A48-1973-938BA3CDC053";
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
	setAttr ".gtag[8].gtagcmp" -type "componentList" 0;
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 1 "e[6:11]";
	setAttr ".pv" -type "double2" 0.45195434987545013 0.73175394535064697 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 21 ".uvst[0].uvsp[0:20]" -type "float2" 0.68460536 0.12307024
		 0.59125668 0.12307352 0.59125483 0.070190489 0.68460351 0.070187271 0.49790803 0.12307674
		 0.49790618 0.070193708 0.40455937 0.12308002 0.40455753 0.070196986 0.31121066 0.12308329
		 0.31120884 0.070200205 0.77795398 0.12306702 0.77795213 0.070183933 0.68460721 0.17595333
		 0.59125853 0.17595661 0.49790987 0.17595983 0.40456122 0.17596304 0.31121251 0.17596632
		 0.21786383 0.17596954 0.21786204 0.12308651 0.21786016 0.070203483 0.77795577 0.17595011;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  0.44129789 0 -0.76434976 -0.44129726 0 -0.76434976
		 -0.88259578 0 -1.3151691e-07 -0.44129789 0 0.76434976 0.44129789 0 0.76434976 0.88259578 0 0
		 0.44129789 1 -0.76434976 -0.44129726 1 -0.76434976 -0.88259578 1 -1.3151691e-07 -0.44129789 1 0.76434976
		 0.44129789 1 0.76434976 0.88259578 1 0 0.44129789 0.5 -0.76434976 -0.44129726 0.5 -0.76434976
		 -0.88259578 0.5 -1.3151691e-07 -0.44129789 0.5 0.76434976 0.44129789 0.5 0.76434976
		 0.88259578 0.5 0;
	setAttr -s 30 ".ed[0:29]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 0 12 1
		 1 13 1 2 14 1 3 15 1 4 16 1 5 17 1 6 7 0 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 12 6 1
		 13 7 1 14 8 1 15 9 1 16 10 1 17 11 1 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1 17 12 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 24 19 -13 -19
		mu 0 4 0 1 2 3
		f 4 25 20 -14 -20
		mu 0 4 1 4 5 2
		f 4 26 21 -15 -21
		mu 0 4 4 6 7 5
		f 4 27 22 -16 -22
		mu 0 4 6 8 9 7
		f 4 28 23 -17 -23
		mu 0 4 8 18 19 9
		f 4 29 18 -18 -24
		mu 0 4 10 0 3 11
		f 4 0 7 -25 -7
		mu 0 4 12 13 1 0
		f 4 1 8 -26 -8
		mu 0 4 13 14 4 1
		f 4 2 9 -27 -9
		mu 0 4 14 15 6 4
		f 4 3 10 -28 -10
		mu 0 4 15 16 8 6
		f 4 4 11 -29 -11
		mu 0 4 16 17 18 8
		f 4 5 6 -30 -12
		mu 0 4 20 12 0 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape2" -p "Large_Half";
	rename -uid "94FE18ED-4023-B8A6-2EF8-6E87EA698965";
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
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.375 0.3125 0.41666666
		 0.3125 0.45833331 0.3125 0.49999997 0.3125 0.54166663 0.3125 0.58333331 0.3125 0.625
		 0.3125 0.375 0.68843985 0.41666666 0.68843985 0.45833331 0.68843985 0.49999997 0.68843985
		 0.54166663 0.68843985 0.58333331 0.68843985 0.625 0.68843985;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".pt[0:11]" -type "float3"  -0.0047793533 0.0049999999 
		0.0082780784 0.00477935 0.0049999999 0.0082780803 0.0095587019 0.0049999999 1.4243576e-09 
		0.0047793523 0.0049999999 -0.0082780793 -0.0047793509 0.0049999999 -0.0082780793 
		-0.0095587019 0.0049999999 0 -0.0047793533 -0.0049999999 0.0082780784 0.00477935 
		-0.0049999999 0.0082780803 0.0095587019 -0.0049999999 1.4243576e-09 0.0047793523 
		-0.0049999999 -0.0082780793 -0.0047793509 -0.0049999999 -0.0082780793 -0.0095587019 
		-0.0049999999 0;
	setAttr -s 12 ".vt[0:11]"  0.0050000022 -0.0099999998 -0.0086602531
		 -0.0049999985 -0.0099999998 -0.008660255 -0.0099999998 -0.0099999998 -1.4901161e-09
		 -0.0050000013 -0.0099999998 0.0086602541 0.0049999999 -0.0099999998 0.0086602541
		 0.0099999998 -0.0099999998 0 0.0050000022 0.0099999998 -0.0086602531 -0.0049999985 0.0099999998 -0.008660255
		 -0.0099999998 0.0099999998 -1.4901161e-09 -0.0050000013 0.0099999998 0.0086602541
		 0.0049999999 0.0099999998 0.0086602541 0.0099999998 0.0099999998 0;
	setAttr -s 18 ".ed[0:17]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 0 6 1 1 7 1 2 8 1 3 9 1 4 10 1 5 11 1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 13 -7 -13
		mu 0 4 0 1 8 7
		f 4 1 14 -8 -14
		mu 0 4 1 2 9 8
		f 4 2 15 -9 -15
		mu 0 4 2 3 10 9
		f 4 3 16 -10 -16
		mu 0 4 3 4 11 10
		f 4 4 17 -11 -17
		mu 0 4 4 5 12 11
		f 4 5 12 -12 -18
		mu 0 4 5 6 13 12;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Large_Corner" -p "Large";
	rename -uid "003E2BF5-4368-89CC-D278-8D80700D301E";
	setAttr ".rp" -type "double3" -1.862645149230957e-09 1.1102230246251565e-16 0 ;
	setAttr ".sp" -type "double3" -1.862645149230957e-09 1.1102230246251565e-16 0 ;
createNode mesh -n "Large_CornerShape" -p "Large_Corner";
	rename -uid "6AA82E21-4409-4C29-ECD3-3B81BA343972";
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
	setAttr ".pv" -type "double2" 0.49896711856126785 0.12847843766212463 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 73 ".uvst[0].uvsp[0:72]" -type "float2" 0.45356411 0.063393623
		 0.38573247 0.071039975 0.38578591 0.049986035 0.45548165 0.020209372 0.31795326 0.071883321
		 0.6924035 0.16276556 0.63094866 0.13530692 0.64122677 0.11693189 0.57558566 0.095373154
		 0.59509283 0.056797899 0.51712912 0.069636926 0.5299421 0.020740479 0.43181187 0.14666697
		 0.37368548 0.11388513 0.3829816 0.094803095 0.44543552 0.10730135 0.31269169 0.084979266
		 0.68699729 0.17629002 0.62043232 0.17855355 0.62169129 0.1573649 0.55369842 0.17861164
		 0.56113487 0.13762419 0.49139071 0.16784531 0.50405961 0.11950815 0.41258895 0.18385136
		 0.36138874 0.13248217 0.30657917 0.093483001 0.6220246 0.20079127 0.55220914 0.22044429
		 0.47789848 0.21931902 0.40662527 0.19319743 0.45053384 0.041045323 0.40317947 0.1230883
		 0.45055366 0.20511973 0.54528219 0.20510823 0.59263647 0.12306526 0.38289723 0.04065752
		 0.49789816 0.028347716 0.69694686 0.15632656 0.64831859 0.1102186 0.60217583 0.048066549
		 0.53299206 0.0091011375 0.53774416 0.054059222 0.45805508 0.054068908 0.41821888
		 0.12308642 0.4580718 0.19209436 0.53776091 0.19208467 0.57759708 0.12306713 0.56691706
		 0.08322525 0.49789965 0.043387145 0.56692564 0.16291554 0.49791521 0.2027664 0.42889804
		 0.16292769 0.42889008 0.083238192 0.41586486 0.075719722 0.45359069 0.0091264546
		 0.41587415 0.17044868 0.49791667 0.21780586 0.31790799 0.056988418 0.57995117 0.17043409
		 0.5799408 0.075704262 0.31871063 0.06482771 0.47499576 0.23039268 0.54526222 0.041033834
		 0.55282116 0.23151398 0.62319094 0.21190503 0.30116326 0.10323986 0.6888504 0.20485052
		 0.68891841 0.19369113 0.35491997 0.14159423 0.31679037 0.079263926 0.68960416 0.16928703
		 0.68776441 0.1832817;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 54 ".vt[0:53]"  0.37672409 0.00020951024 -0.65250468 -0.37672353 -0.00020951024 -0.65250456
		 -0.75344813 -0.00020766571 -8.9694396e-08 -0.37672406 -0.00020951024 0.65250468 0.37672409 0.00020951024 0.65250468
		 0.75344813 0.00062986632 0 -1.16351998 1.79144001 -0.65250468 -1.1606915 1.037992001 -0.65250468
		 -1.15600264 0.66126776 -1.0136822e-07 -1.1606915 1.037991405 0.65250468 -1.16351998 1.79144001 0.65250468
		 -1.16165948 2.16816425 0 -0.4100087 1.71731198 -0.79046029 -0.77864885 0.87203467 -0.7980597
		 -1.028951168 0.96476763 -0.79876661 -1.0030114651 1.87780046 -0.79166621 -0.97209668 0.44807431 -3.1627349e-07
		 -1.050536871 0.50104761 -3.2717634e-07 -0.77864909 0.87203336 0.79805964 -1.028951287 0.96476686 0.79876655
		 -0.41000873 1.71731198 0.79046035 -1.0030114651 1.87780046 0.79166627 -0.23315538 2.13559866 7.9694892e-08
		 -0.99443853 2.33110905 3.9556245e-08 0.39360863 0.76961845 -0.79065025 -0.46887279 0.44334817 -0.79703277
		 -0.54581821 0.69520026 -0.80110252 0.11474323 1.32393551 -0.78963542 -0.90501875 0.2905136 -2.1021235e-07
		 -0.89568895 0.3845585 -2.9847735e-07 -0.46887332 0.44334754 0.79703277 -0.54581863 0.69519907 0.80110252
		 0.3936086 0.76961845 0.79065025 0.1147432 1.32393551 0.78963542 0.81544149 0.93835616 2.3178172e-08
		 0.43641293 1.63936245 5.9183616e-08 0.46109566 0.15576893 -0.79326433 -0.45837134 0.15024395 -0.79495752
		 -0.91763979 0.1499538 -1.1770925e-07 -0.45837188 0.15024395 0.79495752 0.46109566 0.15576893 0.79326433
		 0.9173491 0.16031761 1.8348196e-09 0.4478215 0.0002094943 -0.77564931 -0.44782105 -0.00020951024 -0.77564919
		 -0.89564306 -0.00020769752 -1.0335583e-07 -0.44782153 -0.00020951024 0.77564925 0.4478215 0.0002094943 0.77564931
		 0.89564294 0.00062988221 0 -1.1606915 0.96689463 -0.77564931 -1.16351998 1.8625381 -0.77564913
		 -1.15600264 0.51907212 -1.7490986e-07 -1.1606915 0.96689332 0.77564931 -1.16351998 1.8625381 0.77564913
		 -1.16165936 2.31035924 0;
	setAttr -s 102 ".ed[0:101]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 12 13 1 13 14 1 15 14 1 12 15 1 13 16 1 16 17 1
		 14 17 1 16 18 1 18 19 1 17 19 1 18 20 1 20 21 1 19 21 1 20 22 1 22 23 1 21 23 1 22 12 1
		 23 15 1 24 25 1 25 26 1 27 26 1 24 27 1 25 28 1 28 29 1 26 29 1 28 30 1 30 31 1 29 31 1
		 30 32 1 32 33 1 31 33 1 32 34 1 34 35 1 33 35 1 34 24 1 35 27 1 36 37 1 37 25 1 36 24 1
		 37 38 1 38 28 1 38 39 1 39 30 1 39 40 1 40 32 1 40 41 1 41 34 1 41 36 1 26 13 1 27 12 1
		 29 16 1 31 18 1 33 20 1 35 22 1 0 42 1 36 42 1 1 43 1 42 43 0 37 43 1 2 44 1 43 44 0
		 38 44 1 3 45 1 44 45 0 39 45 1 4 46 1 45 46 0 40 46 1 5 47 1 46 47 0 41 47 1 47 42 0
		 7 48 1 14 48 1 6 49 1 49 48 0 15 49 1 8 50 1 17 50 1 48 50 0 9 51 1 19 51 1 50 51 0
		 10 52 1 21 52 1 51 52 0 11 53 1 23 53 1 52 53 0 53 49 0;
	setAttr -s 48 -ch 192 ".fc[0:47]" -type "polyFaces" 
		f 4 12 13 -15 -16
		mu 0 4 0 1 2 3
		f 4 16 17 -19 -14
		mu 0 4 1 4 61 2
		f 4 19 20 -22 -18
		mu 0 4 71 6 7 5
		f 4 22 23 -25 -21
		mu 0 4 6 8 9 7
		f 4 25 26 -28 -24
		mu 0 4 8 10 11 9
		f 4 28 15 -30 -27
		mu 0 4 10 0 3 11
		f 4 30 31 -33 -34
		mu 0 4 12 13 14 15
		f 4 34 35 -37 -32
		mu 0 4 13 16 70 14
		f 4 37 38 -40 -36
		mu 0 4 72 18 19 17
		f 4 40 41 -43 -39
		mu 0 4 18 20 21 19
		f 4 43 44 -46 -42
		mu 0 4 20 22 23 21
		f 4 46 33 -48 -45
		mu 0 4 22 12 15 23
		f 4 48 49 -31 -51
		mu 0 4 24 25 13 12
		f 4 51 52 -35 -50
		mu 0 4 25 26 16 13
		f 4 53 54 -38 -53
		mu 0 4 68 27 18 72
		f 4 55 56 -41 -55
		mu 0 4 27 28 20 18
		f 4 57 58 -44 -57
		mu 0 4 28 29 22 20
		f 4 59 50 -47 -59
		mu 0 4 29 24 12 22
		f 4 32 60 -13 -62
		mu 0 4 15 14 1 0
		f 4 36 62 -17 -61
		mu 0 4 14 70 4 1
		f 4 39 63 -20 -63
		mu 0 4 17 19 6 71
		f 4 42 64 -23 -64
		mu 0 4 19 21 8 6
		f 4 45 65 -26 -65
		mu 0 4 21 23 10 8
		f 4 47 61 -29 -66
		mu 0 4 23 15 0 10
		f 4 -49 67 69 -71
		mu 0 4 25 24 30 69
		f 4 -52 70 72 -74
		mu 0 4 26 25 69 66
		f 4 -54 73 75 -77
		mu 0 4 27 68 67 65
		f 4 -56 76 78 -80
		mu 0 4 28 27 65 64
		f 4 -58 79 81 -83
		mu 0 4 29 28 64 62
		f 4 -60 82 83 -68
		mu 0 4 24 29 62 30
		f 4 14 85 -88 -89
		mu 0 4 3 2 36 55
		f 4 18 90 -92 -86
		mu 0 4 2 61 58 36
		f 4 21 93 -95 -91
		mu 0 4 5 7 39 38
		f 4 24 96 -98 -94
		mu 0 4 7 9 40 39
		f 4 27 99 -101 -97
		mu 0 4 9 11 41 40
		f 4 29 88 -102 -100
		mu 0 4 11 3 55 41
		f 4 0 68 -70 -67
		mu 0 4 42 43 31 63
		f 4 1 71 -73 -69
		mu 0 4 43 44 32 31
		f 4 2 74 -76 -72
		mu 0 4 44 45 33 32
		f 4 3 77 -79 -75
		mu 0 4 45 46 34 33
		f 4 4 80 -82 -78
		mu 0 4 46 47 35 34
		f 4 5 66 -84 -81
		mu 0 4 47 42 63 35
		f 4 -7 86 87 -85
		mu 0 4 48 49 37 60
		f 4 -8 84 91 -90
		mu 0 4 50 48 60 59
		f 4 -9 89 94 -93
		mu 0 4 51 50 59 57
		f 4 -10 92 97 -96
		mu 0 4 52 51 57 56
		f 4 -11 95 100 -99
		mu 0 4 53 52 56 54
		f 4 -12 98 101 -87
		mu 0 4 49 53 54 37;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Large_T" -p "Large";
	rename -uid "E51987D8-4202-2BFC-CA55-7F92BCBCB467";
	setAttr ".rp" -type "double3" -3.6429192995512949e-16 0 4.0766001685454967e-17 ;
	setAttr ".sp" -type "double3" -3.6429192995512949e-16 4.8849813083506888e-15 5.8286708792820718e-16 ;
createNode mesh -n "Large_TShape" -p "Large_T";
	rename -uid "7E3854CB-4065-327E-B4FB-B392A32AA030";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:17]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[12:17]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 2 "e[0:5]" "e[18:23]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 3 "vtx[0:5]" "vtx[12:17]" "vtx[24]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 2 "vtx[0:5]" "vtx[12:17]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "vtx[0:23]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 3 "vtx[6:11]" "vtx[18:23]" "vtx[25]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 2 "vtx[6:11]" "vtx[18:23]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 1 "f[0:11]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 0;
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 2 "e[6:11]" "e[24:29]";
	setAttr ".pv" -type "double2" 0.26179999113082886 0.35906526446342468 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.59382033 0.13366532
		 0.68716908 0.13367796 0.68716097 0.19336993 0.59381223 0.19335726 0.78052843 0.05284822
		 0.21528751 0.19330537 0.31120932 0.13362712 0.31120124 0.19331878 0.40455806 0.13363969
		 0.40454996 0.19333142 0.50048274 0.052810311 0.50046372 0.19334391 0.59240371 0.12030575
		 0.68575245 0.12030391 0.68575466 0.23438254 0.59240597 0.23438436 0.21900907 0.12031299
		 0.21901119 0.23439166 0.31235772 0.1203112 0.31235993 0.2343899 0.40570644 0.12030938
		 0.40570867 0.23438796 0.49905509 0.12030752 0.49905732 0.23438618 0.59240156 0.0062270761
		 0.68575019 0.006225273 0.77909893 0.0062234327 0.3123554 0.0062325299 0.4057042 0.0062307715
		 0.49905285 0.006228894 0.77910113 0.1203021 0.77910334 0.23438074 0.21900681 0.0062343478
		 0.21530652 0.052771807 0.78050947 0.19338179;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 30 ".vt[0:29]"  -0.44129789 1.84294569 0.76434976 0.44129789 1.84294569 0.76434976
		 0.88259578 1.078598261 -1.661625e-08 0.44129789 0.2863684 0.76434976 -0.44129789 0.2863684 0.76434976
		 -0.88259578 1.078598261 -1.661625e-08 -0.44129789 1.84294569 1.32872665 0.44129789 1.84294569 1.32872665
		 -0.88259578 1.078598261 1.32871962 -0.44129789 0.2863684 1.32872438 0.44129789 0.2863684 1.32872438
		 0.88259578 1.078598261 1.32871962 0.44129789 -2.9802322e-08 -0.76434976 -0.44129726 -2.9802322e-08 -0.76434976
		 -0.88259578 -2.9802322e-08 -1.4813317e-07 -0.44129789 -2.9802322e-08 0.76434976 0.44129789 -2.9802322e-08 0.76434976
		 0.88259578 -2.9802322e-08 -1.661625e-08 0.44129789 2.15718699 -0.76434976 -0.44129726 2.15718699 -0.76434976
		 -0.88259578 2.15718699 -1.4813317e-07 -0.44129789 2.15718699 0.76434976 0.44129789 2.15718699 0.76434976
		 0.88259578 2.15718699 -1.661625e-08 0.44129789 1.078593493 -0.76434976 -0.44129726 1.078593493 -0.76434976
		 -0.88259578 1.078593493 -1.4813317e-07 -0.44129789 1.078593493 0.76434976 0.44129789 1.078593493 0.76434976
		 0.88259578 1.078593493 -1.661625e-08;
	setAttr -s 48 ".ed[0:47]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 0 6 1
		 1 7 1 6 7 0 5 8 1 8 6 0 4 9 1 9 8 0 3 10 1 10 9 0 2 11 1 11 10 0 7 11 0 12 13 0 13 14 0
		 14 15 0 15 16 0 16 17 0 17 12 0 12 24 1 13 25 1 14 26 1 15 27 1 16 28 1 17 29 1 18 19 0
		 19 20 0 20 21 0 21 22 0 22 23 0 23 18 0 24 18 1 25 19 1 26 20 1 27 21 1 28 22 1 29 23 1
		 24 25 1 25 26 1 26 27 1 27 28 1 28 29 1 29 24 1;
	setAttr -s 18 -ch 72 ".fc[0:17]" -type "polyFaces" 
		f 4 -1 6 8 -8
		mu 0 4 0 1 2 3
		f 4 -6 9 10 -7
		mu 0 4 1 4 34 2
		f 4 -5 11 12 -10
		mu 0 4 33 6 7 5
		f 4 -4 13 14 -12
		mu 0 4 6 8 9 7
		f 4 -3 15 16 -14
		mu 0 4 8 10 11 9
		f 4 -2 7 17 -16
		mu 0 4 10 0 3 11
		f 4 42 37 -31 -37
		mu 0 4 12 13 14 15
		f 4 43 38 -32 -38
		mu 0 4 13 30 31 14
		f 4 44 39 -33 -39
		mu 0 4 16 18 19 17
		f 4 45 40 -34 -40
		mu 0 4 18 20 21 19
		f 4 46 41 -35 -41
		mu 0 4 20 22 23 21
		f 4 47 36 -36 -42
		mu 0 4 22 12 15 23
		f 4 18 25 -43 -25
		mu 0 4 24 25 13 12
		f 4 19 26 -44 -26
		mu 0 4 25 26 30 13
		f 4 20 27 -45 -27
		mu 0 4 32 27 18 16
		f 4 21 28 -46 -28
		mu 0 4 27 28 20 18
		f 4 22 29 -47 -29
		mu 0 4 28 29 22 20
		f 4 23 24 -48 -30
		mu 0 4 29 24 12 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Large_Cap" -p "Large";
	rename -uid "68CACA33-48C4-B523-06DD-F898FD17A372";
	setAttr ".rp" -type "double3" 1.4901161193847656e-08 -1.1102230246251565e-16 0 ;
	setAttr ".sp" -type "double3" 1.4901161193847656e-08 -1.1102230246251565e-16 0 ;
createNode mesh -n "Large_CapShape" -p "Large_Cap";
	rename -uid "B8E6F841-4500-C4C1-3B54-85A12F29B882";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:269]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 10 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "bottom";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[6:11]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 2 "e[0:5]" "e[360:365]";
	setAttr ".gtag[2].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 3 "vtx[0:5]" "vtx[12]" "vtx[168:173]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 2 "vtx[0:5]" "vtx[168:173]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 2 "vtx[0:11]" "vtx[168:179]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 3 "vtx[6:11]" "vtx[13]" "vtx[174:179]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 2 "vtx[6:11]" "vtx[174:179]";
	setAttr ".gtag[7].gtagnm" -type "string" "sides";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 2 "f[0:5]" "f[216:221]";
	setAttr ".gtag[8].gtagnm" -type "string" "top";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 1 "f[12:17]";
	setAttr ".gtag[9].gtagnm" -type "string" "topRing";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 2 "e[6:11]" "e[366:371]";
	setAttr ".pv" -type "double2" 0.49940146505832672 0.51973549649119377 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 434 ".uvst[0].uvsp";
	setAttr ".uvst[0].uvsp[0:249]" -type "float2" 0.51047361 0.10935418 0.51675594
		 0.10935469 0.47905999 0.13679886 0.51047146 0.13680138 0.48534444 0.10935214 0.48534223
		 0.13679934 0.49162674 0.10935266 0.49162456 0.13679986 0.49790907 0.10935318 0.49790686
		 0.13680035 0.5041914 0.10935369 0.50418913 0.13680086 0.50733304 0.10391329 0.50104761
		 0.14224125 0.50418842 0.10935256 0.50419199 0.13679937 0.49790972 0.13680018 0.49790627
		 0.10935337 0.49162757 0.13680099 0.491624 0.10935418 0.4853453 0.13680182 0.48534185
		 0.10935501 0.47906321 0.13680263 0.5167529 0.10935095 0.51047421 0.13679856 0.51047069
		 0.10935175 0.51361108 0.10391078 0.50733382 0.14223954 0.48534146 0.10935492 0.49162379
		 0.10935408 0.49162751 0.13680129 0.48534527 0.13680215 0.49790609 0.10935318 0.49790984
		 0.13680042 0.50418842 0.10935234 0.50419211 0.13679959 0.51047063 0.10935149 0.51047444
		 0.13679871 0.51675296 0.10935062 0.47906294 0.136803 0.48219961 0.10391472 0.51361632
		 0.14223894 0.51047295 0.10935408 0.51047164 0.13680068 0.50418949 0.13680039 0.50419074
		 0.10935378 0.49790728 0.1368001 0.49790865 0.10935348 0.49162516 0.13679978 0.49162647
		 0.10935317 0.48534298 0.13679948 0.48534426 0.10935289 0.4790608 0.1367992 0.51675516
		 0.10935436 0.48220342 0.10391222 0.51361251 0.14224133 0.51675701 0.10935659 0.48534593
		 0.10935118 0.48534107 0.13679805 0.47905889 0.13679698 0.49162811 0.10935227 0.49162331
		 0.13679913 0.49791035 0.10935337 0.49790558 0.1368002 0.50419271 0.10935443 0.50418794
		 0.1368013 0.5104748 0.1093555 0.51047003 0.13680241 0.5136168 0.10391549 0.50732791
		 0.1422424 0.51047504 0.10935524 0.51047027 0.13680261 0.50418806 0.13680157 0.50419271
		 0.10935417 0.49790558 0.13680047 0.49791029 0.10935311 0.49162325 0.13679937 0.49162796
		 0.10935201 0.48534089 0.13679832 0.4853456 0.10935095 0.47905856 0.13679725 0.51675737
		 0.10935633 0.48220533 0.10390975 0.51361048 0.14224383 0.51675224 0.10935052 0.48534149
		 0.1093555 0.4853459 0.13680203 0.47906369 0.13680308 0.49162364 0.10935453 0.49162805
		 0.13680105 0.49790579 0.1093535 0.4979102 0.13680004 0.504188 0.10935253 0.50419229
		 0.13679907 0.51047009 0.10935153 0.5104745 0.13679805 0.5136103 0.10391052 0.50733423
		 0.14223908 0.51163095 0.12936026 0.48418397 0.12935784 0.48418447 0.12307559 0.51163143
		 0.12307798 0.48418507 0.11679334 0.51163197 0.11679573 0.48418558 0.11051109 0.51163256
		 0.11051348 0.48418617 0.10422884 0.51162982 0.14192474 0.4841834 0.13564011 0.51163036
		 0.1356425 0.51707071 0.1387841 0.47874311 0.13249853 0.51675302 0.10935091 0.4853417
		 0.10935488 0.48534518 0.13680191 0.47906291 0.13680269 0.491624 0.10935408 0.49162742
		 0.13680114 0.49790627 0.1093533 0.49790967 0.13680035 0.50418848 0.1093525 0.50419199
		 0.13679951 0.51047075 0.10935169 0.51047426 0.13679874 0.5136112 0.10391071 0.50733382
		 0.14223972 0.51163131 0.12935965 0.48418409 0.12935854 0.48418435 0.12307623 0.51163161
		 0.12307733 0.48418462 0.11679398 0.51163185 0.116795 0.48418486 0.11051166 0.51163208
		 0.1105127 0.48418513 0.10422935 0.51163077 0.1419242 0.48418391 0.13564086 0.51163107
		 0.13564196 0.5170716 0.13878331 0.47874337 0.13249952 0.51675344 0.10935187 0.48534244
		 0.10935447 0.48534468 0.13680117 0.4790625 0.13680167 0.49162468 0.10935394 0.49162695
		 0.13680065 0.49790686 0.10935342 0.49790913 0.13680013 0.50418901 0.10935292 0.5041914
		 0.13679962 0.51047122 0.10935239 0.51047349 0.1367991 0.51361191 0.10391158 0.5073328
		 0.14223988 0.51163173 0.12935874 0.48418456 0.12935938 0.48418441 0.12307712 0.51163161
		 0.12307642 0.48418424 0.11679482 0.51163137 0.11679417 0.48418409 0.11051257 0.51163125
		 0.11051185 0.48418397 0.10423025 0.51163203 0.14192331 0.48418474 0.13564169 0.51163185
		 0.13564099 0.51707256 0.13878202 0.47874403 0.13250068 0.25568545 0.13089395 0.43734655
		 0.018194795 0.86124182 0.1152584 0.4373568 0.22796547 0.37679666 0.12308353 0.74013048
		 0.11525947 0.43735814 0.22796559 0.61901915 0.11526054 0.55846941 0.2279588 0.49790788
		 0.11526167 0.61901927 0.12307006 0.3767966 0.11526281 0.4502652 0.076074123 0.45026517
		 0.076074183 0.54555184 0.17006683 0.54555154 0.17007202 0.45026532 0.076072872 0.54555178
		 0.17006886 0.45026529 0.076073349 0.54555178 0.1700691 0.45026523 0.076073527 0.54555166
		 0.1700694 0.45026517 0.076073706 0.54555166 0.17007154 0.45026413 0.16196263 0.54086423
		 0.15047574 0.54086381 0.15047407 0.45026433 0.16196078 0.45026422 0.16196185 0.54086429
		 0.15047604 0.45026422 0.16196173 0.54086465 0.15047628 0.54086518 0.15047872 0.45026428
		 0.16196108 0.54086488 0.1504783 0.45026428 0.16196156 0.45494801 0.095668316 0.54555058
		 0.084207118 0.5455507 0.084203422 0.45494783 0.095668316 0.4549472 0.095667362 0.54555058
		 0.084205866 0.45494735 0.09566766 0.54555064 0.084205449 0.45494762 0.095668018 0.5455507
		 0.084204018 0.5455507 0.084205091 0.45494759 0.095667839 0.49789941 0.076075077 0.49789426
		 0.17007983 0.5455507 0.16195005 0.45494843 0.15048456 0.49789876 0.076074839 0.49789867
		 0.076074839 0.49789602 0.076074123 0.49790263 0.076075792 0.49790192 0.076075673
		 0.45494854 0.15048462 0.45494887 0.15048409 0.45494887 0.15048385 0.45494834 0.15048468
		 0.45494795 0.15048534 0.5167526 0.13680369 0.50732815 0.14224273 0.50104582 0.14224172
		 0.49476352 0.14224061 0.48848113 0.14223951 0.48219883 0.14223844 0.48848766 0.10391083
		 0.49477011 0.10391188 0.50105238 0.10391296 0.50733471 0.10391407 0.51361704 0.1039151
		 0.47906327 0.10934988 0.51675677 0.13679783 0.50733411 0.14223978 0.50105178 0.14224061
		 0.49476945 0.14224149 0.48848712 0.14224237 0.48220482 0.14224321 0.48848191 0.10391384
		 0.49476424 0.10391297;
	setAttr ".uvst[0].uvsp[250:433]" 0.50104654 0.10391213 0.50732887 0.1039113
		 0.51361108 0.10391039 0.47905916 0.10935576 0.47874364 0.12621632 0.47874415 0.11993399
		 0.47874475 0.11365173 0.47874531 0.10736951 0.47874254 0.13878077 0.48418286 0.14192235
		 0.51707339 0.10737284 0.51707286 0.11365505 0.51707232 0.11993731 0.51707178 0.1262196
		 0.51707119 0.13250186 0.51163304 0.10423122 0.47874388 0.12621842 0.4787437 0.11993611
		 0.47874358 0.11365378 0.47874337 0.10737154 0.47874421 0.13878299 0.48418486 0.14192402
		 0.51707178 0.10737057 0.5170719 0.11365288 0.51707208 0.11993513 0.51707226 0.12621745
		 0.51707244 0.13249977 0.51163107 0.10422954 0.49476519 0.14224073 0.48848295 0.14224023
		 0.48220068 0.1422397 0.51361215 0.14224225 0.50732994 0.14224178 0.51675379 0.13680185
		 0.51361525 0.10391381 0.48220378 0.1039113 0.48848605 0.10391181 0.49476835 0.10391229
		 0.50105059 0.10391278 0.47906217 0.10935166 0.47874364 0.12621719 0.47874382 0.11993489
		 0.47874409 0.11365256 0.47874436 0.10737024 0.47874311 0.13878176 0.48418364 0.14192317
		 0.5170728 0.10737179 0.51707256 0.11365411 0.51707232 0.11993644 0.51707208 0.12621868
		 0.51707184 0.13250099 0.51163226 0.10423043 0.50104582 0.1422413 0.49476352 0.14224023
		 0.48848134 0.14223918 0.48219907 0.14223808 0.51361024 0.1422435 0.51675224 0.13680345
		 0.48220566 0.10391007 0.4884879 0.10391115 0.49477017 0.10391227 0.50105238 0.10391333
		 0.50733459 0.10391439 0.47906366 0.10935011 0.51675385 0.13680097 0.5073303 0.14224105
		 0.50104815 0.14224075 0.494766 0.14224046 0.48848382 0.14224017 0.48220164 0.14223985
		 0.48848563 0.1039125 0.49476781 0.1039128 0.50104994 0.1039131 0.50733215 0.10391341
		 0.5136143 0.10391371 0.47906208 0.10935259 0.50105214 0.14224005 0.49476993 0.14224108
		 0.48848784 0.14224204 0.48220563 0.14224304 0.51361644 0.14223807 0.51675665 0.13679707
		 0.48219955 0.10391549 0.48848176 0.10391452 0.49476391 0.10391349 0.50104606 0.10391252
		 0.50732815 0.10391155 0.4790594 0.10935653 0.50105059 0.14224041 0.4947685 0.14224091
		 0.48848623 0.14224143 0.48220405 0.14224198 0.51361501 0.14223936 0.5167557 0.13679859
		 0.48220089 0.10391419 0.48848313 0.10391366 0.49476531 0.10391316 0.50104761 0.10391265
		 0.5073297 0.10391212 0.47906023 0.10935497 0.5010516 0.14224035 0.49476939 0.14224115
		 0.48848718 0.14224197 0.48220491 0.14224277 0.51361603 0.14223874 0.51675642 0.13679776
		 0.48219991 0.10391484 0.48848218 0.10391404 0.49476439 0.10391323 0.50104666 0.10391239
		 0.50732881 0.10391162 0.47905958 0.10935582 0.50105155 0.14224054 0.49476922 0.14224133
		 0.48848698 0.1422421 0.48220474 0.14224288 0.51361603 0.14223894 0.51675647 0.13679796
		 0.48219988 0.10391469 0.48848215 0.10391387 0.49476439 0.1039131 0.50104672 0.10391229
		 0.50732893 0.10391149 0.47905943 0.1093557 0.55846846 0.22795999 0.25568533 0.11526394
		 0.37679672 0.13089281 0.55845785 0.018188 0.61901975 0.12307137 0.497908 0.13089174
		 0.55845904 0.018188119 0.61901939 0.13089055 0.43734732 0.018193543 0.7401306 0.13088948
		 0.13457403 0.11526501 0.37679622 0.12308216 0.13457417 0.13089508 0.86124194 0.13088834
		 0.45026413 0.084191084 0.49789572 0.17007941 0.49789646 0.17007929 0.49789163 0.17008072
		 0.49789312 0.17008018 0.49789363 0.17008007 0.54086369 0.095681071 0.54086345 0.095681369
		 0.54086387 0.095679462 0.54086375 0.095680118 0.54086334 0.095681787 0.54086316 0.095682979
		 0.54555511 0.20559549 0.45026827 0.20559978 0.59319472 0.1230725 0.54554772 0.040553808
		 0.45026079 0.04055804 0.40262118 0.12308103 0.45026484 0.17007768 0.59319448 0.12307146
		 0.54554653 0.040553689 0.54555583 0.20559454 0.45026937 0.20559984 0.40262151 0.12308213
		 0.45026022 0.040559053 0.54555207 0.076090217 0.45026398 0.084190428 0.54555196 0.07608819
		 0.54555202 0.076088548 0.45026395 0.08419019 0.45026407 0.084190965 0.5455519 0.076086521
		 0.5455519 0.076087117 0.45026398 0.084190607 0.45026389 0.084189832 0.54555202 0.076088965
		 0.45026499 0.17007852 0.54555094 0.16195458 0.45026487 0.17007875 0.54555094 0.1619525
		 0.54555106 0.16195512 0.45026484 0.17007792 0.54555076 0.16195196 0.45026508 0.17007935
		 0.45026502 0.17007869 0.54555088 0.16195208;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 218 ".vt";
	setAttr ".vt[0:165]"  1.041543961 -0.1297529 -0.051439717 0.9821465 -0.1297529 -0.05143974
		 0.95244783 -0.1297529 -8.8509164e-09 0.9821465 -0.1297529 0.051439725 1.041543961 -0.1297529 0.05143974
		 1.07124269 -0.1297529 0 1.041543961 0.1297529 -0.051439717 0.9821465 0.1297529 -0.05143974
		 0.95244783 0.1297529 -8.8509164e-09 0.9821465 0.1297529 0.051439725 1.041543961 0.1297529 0.05143974
		 1.07124269 0.1297529 0 1.011845112 -0.1297529 0 1.011845112 0.1297529 0 -1.041543961 -0.1297529 -0.051439717
		 -0.98214662 -0.1297529 -0.05143974 -0.95244771 -0.1297529 -8.8509164e-09 -0.98214662 -0.1297529 0.051439725
		 -1.041543961 -0.1297529 0.05143974 -1.071242929 -0.1297529 5.334282e-17 -1.041543961 0.1297529 -0.051439717
		 -0.98214662 0.1297529 -0.05143974 -0.95244771 0.1297529 -8.8509164e-09 -0.98214662 0.1297529 0.051439725
		 -1.041543961 0.1297529 0.05143974 -1.071242929 0.1297529 5.334282e-17 -1.01184535 -0.1297529 4.9187147e-19
		 -1.01184535 0.1297529 5.7242178e-25 -0.051439762 -0.1297529 -0.91207695 -0.051439773 -0.1297529 -0.85267943
		 -4.4651284e-08 -0.1297529 -0.8229807 0.051439691 -0.1297529 -0.85267943 0.051439699 -0.1297529 -0.91207695
		 -3.5800372e-08 -0.1297529 -0.94177574 -0.051439762 0.1297529 -0.91207695 -0.051439773 0.1297529 -0.85267943
		 -4.4651284e-08 0.1297529 -0.8229807 0.051439691 0.1297529 -0.85267943 0.051439699 0.1297529 -0.91207695
		 -3.5800372e-08 0.1297529 -0.94177574 -3.5800372e-08 -0.1297529 -0.88237816 -3.5800372e-08 0.1297529 -0.88237816
		 -0.051439762 -0.1297529 0.91838872 -0.051439773 -0.1297529 0.85899115 -4.4651284e-08 -0.1297529 0.82929254
		 0.051439691 -0.1297529 0.85899115 0.051439699 -0.1297529 0.91838872 -3.5800372e-08 -0.1297529 0.94808745
		 -0.051439762 0.1297529 0.91838872 -0.051439773 0.1297529 0.85899115 -4.4651284e-08 0.1297529 0.82929254
		 0.051439691 0.1297529 0.85899115 0.051439699 0.1297529 0.91838872 -3.5800372e-08 0.1297529 0.94808745
		 -3.5800372e-08 -0.1297529 0.88869011 -3.5800372e-08 0.1297529 0.88869011 0.56532013 -0.1297529 0.87628371
		 0.53562135 -0.1297529 0.82484388 0.47622392 -0.1297529 0.82484388 0.44652513 -0.1297529 0.87628371
		 0.47622392 -0.1297529 0.92772347 0.53562135 -0.1297529 0.92772347 0.56532013 0.1297529 0.87628371
		 0.53562135 0.1297529 0.82484388 0.47622392 0.1297529 0.82484388 0.44652513 0.1297529 0.87628371
		 0.47622392 0.1297529 0.92772347 0.53562135 0.1297529 0.92772347 0.50592256 -0.1297529 0.87628371
		 0.50592256 0.1297529 0.87628371 -0.47622395 -0.1297529 -0.92772347 -0.44652528 -0.1297529 -0.87628347
		 -0.47622395 -0.1297529 -0.82484382 -0.53562146 -0.1297529 -0.82484376 -0.56532013 -0.1297529 -0.87628371
		 -0.53562146 -0.1297529 -0.92772347 -0.47622395 0.1297529 -0.92772347 -0.44652528 0.1297529 -0.87628347
		 -0.47622395 0.1297529 -0.82484382 -0.53562146 0.1297529 -0.82484376 -0.56532013 0.1297529 -0.87628371
		 -0.53562146 0.1297529 -0.92772347 -0.50592268 -0.1297529 -0.87628371 -0.50592268 0.1297529 -0.87628371
		 -0.47622398 -0.1297529 0.92772347 -0.44652522 -0.1297529 0.87628371 -0.47622398 -0.1297529 0.82484388
		 -0.5356214 -0.1297529 0.82484388 -0.56532013 -0.1297529 0.87628371 -0.5356214 -0.1297529 0.92772347
		 -0.47622398 0.1297529 0.92772347 -0.44652522 0.1297529 0.87628371 -0.47622398 0.1297529 0.82484388
		 -0.5356214 0.1297529 0.82484388 -0.56532013 0.1297529 0.87628371 -0.5356214 0.1297529 0.92772347
		 -0.50592268 -0.1297529 0.87628371 -0.50592268 0.1297529 0.87628371 0.56532007 -0.1297529 -0.87628371
		 0.5356214 -0.1297529 -0.82484376 0.47622386 -0.1297529 -0.82484382 0.44652516 -0.1297529 -0.87628347
		 0.47622386 -0.1297529 -0.92772347 0.5356214 -0.1297529 -0.92772347 0.56532007 0.1297529 -0.87628371
		 0.5356214 0.1297529 -0.82484376 0.47622386 0.1297529 -0.82484382 0.44652516 0.1297529 -0.87628347
		 0.47622386 0.1297529 -0.92772347 0.5356214 0.1297529 -0.92772347 0.50592256 -0.1297529 -0.87628371
		 0.50592256 0.1297529 -0.87628371 -0.81560165 -0.1297529 -0.41149041 -0.76416188 -0.1297529 -0.38179162
		 -0.71272218 -0.1297529 -0.41149035 -0.71272218 -0.1297529 -0.47088787 -0.76416188 -0.1297529 -0.50058663
		 -0.81560165 -0.1297529 -0.47088787 -0.81560165 0.1297529 -0.41149041 -0.76416188 0.1297529 -0.38179162
		 -0.71272218 0.1297529 -0.41149035 -0.71272218 0.1297529 -0.47088787 -0.76416188 0.1297529 -0.50058663
		 -0.81560165 0.1297529 -0.47088787 -0.76416188 -0.1297529 -0.44118908 -0.76416188 0.1297529 -0.44118908
		 0.76962793 -0.1297529 0.50374246 0.71818823 -0.1297529 0.47404373 0.71818823 -0.1297529 0.41464627
		 0.76962799 -0.1297529 0.38494751 0.82106775 -0.1297529 0.41464627 0.82106775 -0.1297529 0.47404373
		 0.76962793 0.1297529 0.50374246 0.71818823 0.1297529 0.47404373 0.71818823 0.1297529 0.41464627
		 0.76962799 0.1297529 0.38494751 0.82106775 0.1297529 0.41464627 0.82106775 0.1297529 0.47404373
		 0.76962799 -0.1297529 0.44434506 0.76962799 0.1297529 0.44434506 -0.76416188 -0.1297529 0.50058663
		 -0.71272218 -0.1297529 0.47088787 -0.71272218 -0.1297529 0.41149035 -0.76416188 -0.1297529 0.38179162
		 -0.81560165 -0.1297529 0.41149035 -0.81560165 -0.1297529 0.47088787 -0.76416188 0.1297529 0.50058663
		 -0.71272218 0.1297529 0.47088787 -0.71272218 0.1297529 0.41149035 -0.76416188 0.1297529 0.38179162
		 -0.81560165 0.1297529 0.41149035 -0.81560165 0.1297529 0.47088787 -0.76416188 -0.1297529 0.44118908
		 -0.76416188 0.1297529 0.44118908 0.82106775 -0.1297529 -0.41464627 0.76962799 -0.1297529 -0.38494751
		 0.71818823 -0.1297529 -0.41464627 0.71818823 -0.1297529 -0.47404373 0.76962793 -0.1297529 -0.50374246
		 0.82106775 -0.1297529 -0.47404373 0.82106775 0.1297529 -0.41464627 0.76962799 0.1297529 -0.38494751
		 0.71818823 0.1297529 -0.41464627 0.71818823 0.1297529 -0.47404373 0.76962793 0.1297529 -0.50374246
		 0.82106775 0.1297529 -0.47404373;
	setAttr ".vt[166:217]" 0.76962799 -0.1297529 -0.44434506 0.76962799 0.1297529 -0.44434506
		 0.45045993 -0.073889792 -0.78021896 -0.45045945 -0.073889792 -0.78021896 -0.90092003 -0.073889792 -1.3424744e-07
		 -0.45046002 -0.073889792 0.78021896 0.45045993 -0.073889792 0.78021896 0.90091997 -0.073889792 0
		 0.45045993 0.073889792 -0.78021896 -0.45045945 0.073889792 -0.78021896 -0.90092003 0.073889792 -1.3424744e-07
		 -0.45046002 0.073889792 0.78021896 0.45045993 0.073889792 0.78021896 0.90091997 0.073889792 0
		 0.57254523 -0.073889792 -0.99167681 -0.57254463 -0.073889792 -0.99167681 -0.57254463 0.073889792 -0.99167681
		 0.57254523 0.073889792 -0.99167681 -1.14509046 -0.073889792 -2.2815803e-07 -1.14509046 0.073889792 -2.2815803e-07
		 -0.57254529 -0.073889792 0.99167681 -0.57254529 0.073889792 0.99167681 0.57254523 -0.073889792 0.99167681
		 0.57254523 0.073889792 0.99167681 1.14509058 -0.073889792 0 1.14509058 0.073889792 0
		 2.6841133e-07 0.22736159 3.9235651e-10 1.2824459e-06 -0.22736159 -1.3599278e-14 -0.90091807 0.15063386 -2.9843966e-07
		 -0.81231993 0.22736159 1.4504155e-08 -0.40616035 0.22736159 0.70349061 -0.45046002 0.15063336 0.78021866
		 -0.40616155 0.22736159 -0.70349044 -0.45045936 0.15063336 -0.78021866 0.4504593 0.15063362 -0.78021872
		 0.40616113 0.22736159 -0.70349067 0.40615848 0.22736159 0.70349067 0.45045865 0.15063362 0.78021896
		 0.81232065 0.22736159 -1.647808e-07 0.90091795 0.15063386 -1.647808e-07 -0.40616021 -0.22736159 -0.7034905
		 -0.45045939 -0.15063336 -0.78021872 -0.90091872 -0.15063386 -1.3424747e-07 -0.81231993 -0.22736159 -1.5139589e-07
		 0.81231993 -0.22736159 0 0.90091872 -0.15063383 0 0.4504593 -0.15063336 -0.78021872
		 0.40615958 -0.22736159 -0.7034905 -0.40615985 -0.22736159 0.70349067 -0.45045939 -0.15063362 0.78021872
		 0.4504593 -0.15063359 0.78021872 0.40615976 -0.22736159 0.70349067;
	setAttr -s 462 ".ed";
	setAttr ".ed[0:165]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0 7 8 0 8 9 0
		 9 10 0 10 11 0 11 6 0 0 6 0 1 7 0 2 8 0 3 9 0 4 10 0 5 11 0 12 0 1 12 1 1 12 2 1
		 12 3 1 12 4 1 12 5 1 6 13 1 7 13 1 8 13 1 9 13 1 10 13 1 11 13 1 14 15 0 15 21 0
		 20 21 0 14 20 0 15 16 0 16 22 0 21 22 0 16 17 0 17 23 0 22 23 0 17 18 0 18 24 0 23 24 0
		 18 19 0 19 25 0 24 25 0 19 14 0 25 20 0 26 14 1 26 15 1 26 16 1 26 17 1 26 18 1 26 19 1
		 21 27 1 20 27 1 22 27 1 23 27 1 24 27 1 25 27 1 28 29 0 29 30 0 30 31 0 31 32 0 32 33 0
		 33 28 0 34 35 0 35 36 0 36 37 0 37 38 0 38 39 0 39 34 0 28 34 0 29 35 0 30 36 0 31 37 0
		 32 38 0 33 39 0 40 28 1 40 29 1 40 30 1 40 31 1 40 32 1 40 33 1 34 41 1 35 41 1 36 41 1
		 37 41 1 38 41 1 39 41 1 42 43 0 43 49 0 48 49 0 42 48 0 43 44 0 44 50 0 49 50 0 44 45 0
		 45 51 0 50 51 0 45 46 0 46 52 0 51 52 0 46 47 0 47 53 0 52 53 0 47 42 0 53 48 0 54 42 1
		 54 43 1 54 44 1 54 45 1 54 46 1 54 47 1 49 55 1 48 55 1 50 55 1 51 55 1 52 55 1 53 55 1
		 56 57 0 57 58 0 58 59 0 59 60 0 60 61 0 61 56 0 62 63 0 63 64 0 64 65 0 65 66 0 66 67 0
		 67 62 0 56 62 0 57 63 0 58 64 0 59 65 0 60 66 0 61 67 0 68 56 1 68 57 1 68 58 1 68 59 1
		 68 60 1 68 61 1 62 69 1 63 69 1 64 69 1 65 69 1 66 69 1 67 69 1 70 71 0 71 77 0 76 77 0
		 70 76 0 71 72 0 72 78 0 77 78 0 72 73 0 73 79 0 78 79 0 73 74 0 74 80 0 79 80 0 74 75 0
		 75 81 0 80 81 0;
	setAttr ".ed[166:331]" 75 70 0 81 76 0 82 70 1 82 71 1 82 72 1 82 73 1 82 74 1
		 82 75 1 77 83 1 76 83 1 78 83 1 79 83 1 80 83 1 81 83 1 84 85 0 85 86 0 86 87 0 87 88 0
		 88 89 0 89 84 0 90 91 0 91 92 0 92 93 0 93 94 0 94 95 0 95 90 0 84 90 0 85 91 0 86 92 0
		 87 93 0 88 94 0 89 95 0 96 84 1 96 85 1 96 86 1 96 87 1 96 88 1 96 89 1 90 97 1 91 97 1
		 92 97 1 93 97 1 94 97 1 95 97 1 98 99 0 99 105 0 104 105 0 98 104 0 99 100 0 100 106 0
		 105 106 0 100 101 0 101 107 0 106 107 0 101 102 0 102 108 0 107 108 0 102 103 0 103 109 0
		 108 109 0 103 98 0 109 104 0 110 98 1 110 99 1 110 100 1 110 101 1 110 102 1 110 103 1
		 105 111 1 104 111 1 106 111 1 107 111 1 108 111 1 109 111 1 112 113 0 113 114 0 114 115 0
		 115 116 0 116 117 0 117 112 0 118 119 0 119 120 0 120 121 0 121 122 0 122 123 0 123 118 0
		 112 118 0 113 119 0 114 120 0 115 121 0 116 122 0 117 123 0 124 112 1 124 113 1 124 114 1
		 124 115 1 124 116 1 124 117 1 118 125 1 119 125 1 120 125 1 121 125 1 122 125 1 123 125 1
		 126 127 0 127 133 0 132 133 0 126 132 0 127 128 0 128 134 0 133 134 0 128 129 0 129 135 0
		 134 135 0 129 130 0 130 136 0 135 136 0 130 131 0 131 137 0 136 137 0 131 126 0 137 132 0
		 138 126 1 138 127 1 138 128 1 138 129 1 138 130 1 138 131 1 133 139 1 132 139 1 134 139 1
		 135 139 1 136 139 1 137 139 1 140 141 0 141 142 0 142 143 0 143 144 0 144 145 0 145 140 0
		 146 147 0 147 148 0 148 149 0 149 150 0 150 151 0 151 146 0 140 146 0 141 147 0 142 148 0
		 143 149 0 144 150 0 145 151 0 152 140 1 152 141 1 152 142 1 152 143 1 152 144 1 152 145 1
		 146 153 1 147 153 1 148 153 1 149 153 1 150 153 1 151 153 1 154 155 0 155 161 0;
	setAttr ".ed[332:461]" 160 161 0 154 160 0 155 156 0 156 162 0 161 162 0 156 157 0
		 157 163 0 162 163 0 157 158 0 158 164 0 163 164 0 158 159 0 159 165 0 164 165 0 159 154 0
		 165 160 0 166 154 1 166 155 1 166 156 1 166 157 1 166 158 1 166 159 1 161 167 1 160 167 1
		 162 167 1 163 167 1 164 167 1 165 167 1 168 169 0 169 170 0 170 171 0 171 172 0 172 173 0
		 173 168 0 174 175 0 175 176 0 176 177 0 177 178 0 178 179 0 179 174 0 168 180 1 169 181 1
		 180 181 0 175 182 1 181 182 0 174 183 1 183 182 0 180 183 0 170 184 1 181 184 0 176 185 1
		 184 185 0 182 185 0 171 186 1 184 186 0 177 187 1 186 187 0 185 187 0 172 188 1 186 188 0
		 178 189 1 188 189 0 187 189 0 173 190 1 188 190 0 179 191 1 190 191 0 189 191 0 190 180 0
		 191 183 0 194 195 0 195 198 0 198 199 0 199 194 0 194 197 0 197 196 0 196 195 0 197 203 0
		 203 202 0 202 196 0 198 201 0 201 200 0 200 199 0 201 204 0 204 205 0 205 200 0 203 205 0
		 204 202 0 206 207 0 207 212 0 212 213 0 213 206 0 206 209 0 209 208 0 208 207 0 209 214 0
		 214 215 0 215 208 0 210 211 0 211 216 0 216 217 0 217 210 0 210 213 0 212 211 0 214 217 0
		 216 215 0 192 195 1 196 192 1 206 193 1 193 209 1 198 192 1 192 201 1 202 192 1 204 192 1
		 210 193 1 193 213 1 214 193 1 193 217 1 177 197 0 194 176 0 175 199 0 200 174 0 178 203 0
		 179 205 0 169 207 0 208 170 0 173 211 0 212 168 0 171 215 0 216 172 0;
	setAttr -s 270 -ch 924 ".fc[0:269]" -type "polyFaces" 
		f 4 0 13 -7 -13
		mu 0 4 0 1 283 3
		f 4 1 14 -8 -14
		mu 0 4 289 4 5 2
		f 4 2 15 -9 -15
		mu 0 4 4 6 7 5
		f 4 3 16 -10 -16
		mu 0 4 6 8 9 7
		f 4 4 17 -11 -17
		mu 0 4 8 10 11 9
		f 4 5 12 -12 -18
		mu 0 4 10 0 3 11
		f 3 -1 -19 19
		mu 0 3 1 0 284
		f 3 -2 -20 20
		mu 0 3 4 289 285
		f 3 -3 -21 21
		mu 0 3 6 4 286
		f 3 -4 -22 22
		mu 0 3 8 6 287
		f 3 -5 -23 23
		mu 0 3 10 8 288
		f 3 -6 -24 18
		mu 0 3 0 10 12
		f 3 6 25 -25
		mu 0 3 3 283 281
		f 3 7 26 -26
		mu 0 3 2 5 280
		f 3 8 27 -27
		mu 0 3 5 7 279
		f 3 9 28 -28
		mu 0 3 7 9 278
		f 3 10 29 -29
		mu 0 3 9 11 13
		f 3 11 24 -30
		mu 0 3 11 3 282
		f 4 33 32 -32 -31
		mu 0 4 14 15 16 17
		f 4 31 36 -36 -35
		mu 0 4 17 16 18 19
		f 4 35 39 -39 -38
		mu 0 4 19 18 20 21
		f 4 38 42 -42 -41
		mu 0 4 21 20 22 361
		f 4 41 45 -45 -44
		mu 0 4 23 355 24 25
		f 4 44 47 -34 -47
		mu 0 4 25 24 15 14
		f 3 -50 48 30
		mu 0 3 17 359 14
		f 3 -51 49 34
		mu 0 3 19 358 17
		f 3 -52 50 37
		mu 0 3 21 357 19
		f 3 -53 51 40
		mu 0 3 361 356 21
		f 3 -54 52 43
		mu 0 3 25 26 23
		f 3 -49 53 46
		mu 0 3 14 360 25
		f 3 55 -55 -33
		mu 0 3 15 350 16
		f 3 54 -57 -37
		mu 0 3 16 351 18
		f 3 56 -58 -40
		mu 0 3 18 352 20
		f 3 57 -59 -43
		mu 0 3 20 353 22
		f 3 58 -60 -46
		mu 0 3 355 354 24
		f 3 59 -56 -48
		mu 0 3 24 27 15
		f 4 60 73 -67 -73
		mu 0 4 28 29 30 31
		f 4 61 74 -68 -74
		mu 0 4 29 32 33 30
		f 4 62 75 -69 -75
		mu 0 4 32 34 35 33
		f 4 63 76 -70 -76
		mu 0 4 34 36 37 35
		f 4 64 77 -71 -77
		mu 0 4 36 38 242 37
		f 4 65 72 -72 -78
		mu 0 4 253 28 31 39
		f 3 -61 -79 79
		mu 0 3 29 28 248
		f 3 -62 -80 80
		mu 0 3 32 29 249
		f 3 -63 -81 81
		mu 0 3 34 32 250
		f 3 -64 -82 82
		mu 0 3 36 34 251
		f 3 -65 -83 83
		mu 0 3 38 36 252
		f 3 -66 -84 78
		mu 0 3 28 253 40
		f 3 66 85 -85
		mu 0 3 31 30 246
		f 3 67 86 -86
		mu 0 3 30 33 245
		f 3 68 87 -87
		mu 0 3 33 35 244
		f 3 69 88 -88
		mu 0 3 35 37 243
		f 3 70 89 -89
		mu 0 3 37 242 41
		f 3 71 84 -90
		mu 0 3 39 31 247
		f 4 93 92 -92 -91
		mu 0 4 42 43 44 45
		f 4 91 96 -96 -95
		mu 0 4 45 44 46 47
		f 4 95 99 -99 -98
		mu 0 4 47 46 48 49
		f 4 98 102 -102 -101
		mu 0 4 49 48 50 51
		f 4 101 105 -105 -104
		mu 0 4 51 50 52 325
		f 4 104 107 -94 -107
		mu 0 4 53 314 43 42
		f 3 -110 108 90
		mu 0 3 45 323 42
		f 3 -111 109 94
		mu 0 3 47 322 45
		f 3 -112 110 97
		mu 0 3 49 321 47
		f 3 -113 111 100
		mu 0 3 51 320 49
		f 3 -114 112 103
		mu 0 3 325 54 51
		f 3 -109 113 106
		mu 0 3 42 324 53
		f 3 115 -115 -93
		mu 0 3 43 315 44
		f 3 114 -117 -97
		mu 0 3 44 316 46
		f 3 116 -118 -100
		mu 0 3 46 317 48
		f 3 117 -119 -103
		mu 0 3 48 318 50
		f 3 118 -120 -106
		mu 0 3 50 319 52
		f 3 119 -116 -108
		mu 0 3 314 55 43
		f 4 120 133 -127 -133
		mu 0 4 313 57 58 59
		f 4 121 134 -128 -134
		mu 0 4 57 60 61 58
		f 4 122 135 -129 -135
		mu 0 4 60 62 63 61
		f 4 123 136 -130 -136
		mu 0 4 62 64 65 63
		f 4 124 137 -131 -137
		mu 0 4 64 66 67 65
		f 4 125 132 -132 -138
		mu 0 4 66 56 307 67
		f 3 -121 -139 139
		mu 0 3 57 313 308
		f 3 -122 -140 140
		mu 0 3 60 57 309
		f 3 -123 -141 141
		mu 0 3 62 60 310
		f 3 -124 -142 142
		mu 0 3 64 62 311
		f 3 -125 -143 143
		mu 0 3 66 64 312
		f 3 -126 -144 138
		mu 0 3 56 66 68
		f 3 126 145 -145
		mu 0 3 59 58 305
		f 3 127 146 -146
		mu 0 3 58 61 304
		f 3 128 147 -147
		mu 0 3 61 63 303
		f 3 129 148 -148
		mu 0 3 63 65 302
		f 3 130 149 -149
		mu 0 3 65 67 69
		f 3 131 144 -150
		mu 0 3 67 307 306
		f 4 153 152 -152 -151
		mu 0 4 70 71 72 73
		f 4 151 156 -156 -155
		mu 0 4 73 72 74 75
		f 4 155 159 -159 -158
		mu 0 4 75 74 76 77
		f 4 158 162 -162 -161
		mu 0 4 77 76 78 79
		f 4 161 165 -165 -164
		mu 0 4 79 78 80 241
		f 4 164 167 -154 -167
		mu 0 4 81 230 71 70
		f 3 -170 168 150
		mu 0 3 73 239 70
		f 3 -171 169 154
		mu 0 3 75 238 73
		f 3 -172 170 157
		mu 0 3 77 237 75
		f 3 -173 171 160
		mu 0 3 79 236 77
		f 3 -174 172 163
		mu 0 3 241 82 79
		f 3 -169 173 166
		mu 0 3 70 240 81
		f 3 175 -175 -153
		mu 0 3 71 231 72
		f 3 174 -177 -157
		mu 0 3 72 232 74
		f 3 176 -178 -160
		mu 0 3 74 233 76
		f 3 177 -179 -163
		mu 0 3 76 234 78
		f 3 178 -180 -166
		mu 0 3 78 235 80
		f 3 179 -176 -168
		mu 0 3 230 83 71
		f 4 180 193 -187 -193
		mu 0 4 337 85 86 87
		f 4 181 194 -188 -194
		mu 0 4 85 88 89 86
		f 4 182 195 -189 -195
		mu 0 4 88 90 91 89
		f 4 183 196 -190 -196
		mu 0 4 90 92 93 91
		f 4 184 197 -191 -197
		mu 0 4 92 94 95 93
		f 4 185 192 -192 -198
		mu 0 4 94 84 331 95
		f 3 -181 -199 199
		mu 0 3 85 337 332
		f 3 -182 -200 200
		mu 0 3 88 85 333
		f 3 -183 -201 201
		mu 0 3 90 88 334
		f 3 -184 -202 202
		mu 0 3 92 90 335
		f 3 -185 -203 203
		mu 0 3 94 92 336
		f 3 -186 -204 198
		mu 0 3 84 94 96
		f 3 186 205 -205
		mu 0 3 87 86 329
		f 3 187 206 -206
		mu 0 3 86 89 328
		f 3 188 207 -207
		mu 0 3 89 91 327
		f 3 189 208 -208
		mu 0 3 91 93 326
		f 3 190 209 -209
		mu 0 3 93 95 97
		f 3 191 204 -210
		mu 0 3 95 331 330
		f 4 213 212 -212 -211
		mu 0 4 98 99 100 101
		f 4 211 216 -216 -215
		mu 0 4 101 100 102 103
		f 4 215 219 -219 -218
		mu 0 4 103 102 104 105
		f 4 218 222 -222 -221
		mu 0 4 105 104 106 265
		f 4 221 225 -225 -224
		mu 0 4 107 259 108 109
		f 4 224 227 -214 -227
		mu 0 4 109 108 99 98
		f 3 -230 228 210
		mu 0 3 101 263 98
		f 3 -231 229 214
		mu 0 3 103 262 101
		f 3 -232 230 217
		mu 0 3 105 261 103
		f 3 -233 231 220
		mu 0 3 265 260 105
		f 3 -234 232 223
		mu 0 3 109 110 107
		f 3 -229 233 226
		mu 0 3 98 264 109
		f 3 235 -235 -213
		mu 0 3 99 254 100
		f 3 234 -237 -217
		mu 0 3 100 255 102
		f 3 236 -238 -220
		mu 0 3 102 256 104
		f 3 237 -239 -223
		mu 0 3 104 257 106
		f 3 238 -240 -226
		mu 0 3 259 258 108
		f 3 239 -236 -228
		mu 0 3 108 111 99
		f 4 240 253 -247 -253
		mu 0 4 373 113 114 115
		f 4 241 254 -248 -254
		mu 0 4 113 116 117 114
		f 4 242 255 -249 -255
		mu 0 4 116 118 119 117
		f 4 243 256 -250 -256
		mu 0 4 118 120 121 119
		f 4 244 257 -251 -257
		mu 0 4 120 122 123 121
		f 4 245 252 -252 -258
		mu 0 4 122 112 367 123
		f 3 -241 -259 259
		mu 0 3 113 373 368
		f 3 -242 -260 260
		mu 0 3 116 113 369
		f 3 -243 -261 261
		mu 0 3 118 116 370
		f 3 -244 -262 262
		mu 0 3 120 118 371
		f 3 -245 -263 263
		mu 0 3 122 120 372
		f 3 -246 -264 258
		mu 0 3 112 122 124
		f 3 246 265 -265
		mu 0 3 115 114 365
		f 3 247 266 -266
		mu 0 3 114 117 364
		f 3 248 267 -267
		mu 0 3 117 119 363
		f 3 249 268 -268
		mu 0 3 119 121 362
		f 3 250 269 -269
		mu 0 3 121 123 125
		f 3 251 264 -270
		mu 0 3 123 367 366
		f 4 273 272 -272 -271
		mu 0 4 126 127 128 129
		f 4 271 276 -276 -275
		mu 0 4 129 128 130 131
		f 4 275 279 -279 -278
		mu 0 4 131 130 132 133
		f 4 278 282 -282 -281
		mu 0 4 133 132 134 301
		f 4 281 285 -285 -284
		mu 0 4 135 295 136 137
		f 4 284 287 -274 -287
		mu 0 4 137 136 127 126
		f 3 -290 288 270
		mu 0 3 129 299 126
		f 3 -291 289 274
		mu 0 3 131 298 129
		f 3 -292 290 277
		mu 0 3 133 297 131
		f 3 -293 291 280
		mu 0 3 301 296 133
		f 3 -294 292 283
		mu 0 3 137 138 135
		f 3 -289 293 286
		mu 0 3 126 300 137
		f 3 295 -295 -273
		mu 0 3 127 290 128
		f 3 294 -297 -277
		mu 0 3 128 291 130
		f 3 296 -298 -280
		mu 0 3 130 292 132
		f 3 297 -299 -283
		mu 0 3 132 293 134
		f 3 298 -300 -286
		mu 0 3 295 294 136
		f 3 299 -296 -288
		mu 0 3 136 139 127
		f 4 300 313 -307 -313
		mu 0 4 349 141 142 143
		f 4 301 314 -308 -314
		mu 0 4 141 144 145 142
		f 4 302 315 -309 -315
		mu 0 4 144 146 147 145
		f 4 303 316 -310 -316
		mu 0 4 146 148 149 147
		f 4 304 317 -311 -317
		mu 0 4 148 150 151 149
		f 4 305 312 -312 -318
		mu 0 4 150 140 343 151
		f 3 -301 -319 319
		mu 0 3 141 349 344
		f 3 -302 -320 320
		mu 0 3 144 141 345
		f 3 -303 -321 321
		mu 0 3 146 144 346
		f 3 -304 -322 322
		mu 0 3 148 146 347
		f 3 -305 -323 323
		mu 0 3 150 148 348
		f 3 -306 -324 318
		mu 0 3 140 150 152
		f 3 306 325 -325
		mu 0 3 143 142 341
		f 3 307 326 -326
		mu 0 3 142 145 340
		f 3 308 327 -327
		mu 0 3 145 147 339
		f 3 309 328 -328
		mu 0 3 147 149 338
		f 3 310 329 -329
		mu 0 3 149 151 153
		f 3 311 324 -330
		mu 0 3 151 343 342
		f 4 333 332 -332 -331
		mu 0 4 154 155 156 157
		f 4 331 336 -336 -335
		mu 0 4 157 156 158 159
		f 4 335 339 -339 -338
		mu 0 4 159 158 160 161
		f 4 338 342 -342 -341
		mu 0 4 161 160 162 277
		f 4 341 345 -345 -344
		mu 0 4 163 271 164 165
		f 4 344 347 -334 -347
		mu 0 4 165 164 155 154
		f 3 -350 348 330
		mu 0 3 157 275 154
		f 3 -351 349 334
		mu 0 3 159 274 157
		f 3 -352 350 337
		mu 0 3 161 273 159
		f 3 -353 351 340
		mu 0 3 277 272 161
		f 3 -354 352 343
		mu 0 3 165 166 163
		f 3 -349 353 346
		mu 0 3 154 276 165
		f 3 355 -355 -333
		mu 0 3 155 266 156
		f 3 354 -357 -337
		mu 0 3 156 267 158
		f 3 356 -358 -340
		mu 0 3 158 268 160
		f 3 357 -359 -343
		mu 0 3 160 269 162
		f 3 358 -360 -346
		mu 0 3 271 270 164
		f 3 359 -356 -348
		mu 0 3 164 167 155
		f 4 374 376 -379 -380
		mu 0 4 168 386 384 375
		f 4 381 383 -385 -377
		mu 0 4 387 383 173 170
		f 4 386 388 -390 -384
		mu 0 4 383 381 175 173
		f 4 391 393 -395 -389
		mu 0 4 381 379 177 175
		f 4 396 398 -400 -394
		mu 0 4 379 376 179 177
		f 4 400 379 -402 -399
		mu 0 4 376 168 375 179
		f 4 360 373 -375 -373
		mu 0 4 408 412 169 377
		f 4 -367 377 378 -376
		mu 0 4 405 401 171 385
		f 4 361 380 -382 -374
		mu 0 4 412 411 172 169
		f 4 -368 375 384 -383
		mu 0 4 404 405 385 382
		f 4 362 385 -387 -381
		mu 0 4 411 410 174 172
		f 4 -369 382 389 -388
		mu 0 4 403 404 382 380
		f 4 363 390 -392 -386
		mu 0 4 410 409 176 174
		f 4 -370 387 394 -393
		mu 0 4 402 403 380 378
		f 4 364 395 -397 -391
		mu 0 4 409 407 178 176
		f 4 -371 392 399 -398
		mu 0 4 400 402 378 374
		f 4 365 372 -401 -396
		mu 0 4 407 408 377 178
		f 4 -372 397 401 -378
		mu 0 4 401 400 374 171
		f 4 402 403 404 405
		mu 0 4 192 229 194 218
		f 4 -403 406 407 408
		mu 0 4 193 430 196 228
		f 4 -408 409 410 411
		mu 0 4 197 433 198 225
		f 4 -405 412 413 414
		mu 0 4 195 227 200 428
		f 4 -414 415 416 417
		mu 0 4 201 226 202 425
		f 4 -411 418 -417 419
		mu 0 4 199 427 203 219
		f 4 420 421 422 423
		mu 0 4 204 388 206 396
		f 4 -421 424 425 426
		mu 0 4 205 399 208 422
		f 4 -426 427 428 429
		mu 0 4 209 398 210 417
		f 4 430 431 432 433
		mu 0 4 212 421 214 394
		f 4 -431 434 -423 435
		mu 0 4 213 397 207 418
		f 4 -429 436 -433 437
		mu 0 4 211 395 215 414
		f 3 438 -409 439
		mu 0 3 221 193 228
		f 3 440 441 -425
		mu 0 3 399 391 208
		f 3 442 443 -413
		mu 0 3 227 223 200
		f 3 -440 -412 444
		mu 0 3 220 197 225
		f 3 445 -445 -420
		mu 0 3 219 216 199
		f 3 -444 -446 -416
		mu 0 3 226 224 202
		f 3 -404 -439 -443
		mu 0 3 194 229 222
		f 3 446 447 -435
		mu 0 3 397 389 207
		f 3 448 449 -437
		mu 0 3 395 393 215
		f 3 -442 -449 -428
		mu 0 3 398 392 210
		f 3 -424 -448 -441
		mu 0 3 204 396 390
		f 3 -450 -447 -434
		mu 0 3 394 217 212
		f 4 368 450 -407 451
		mu 0 4 185 432 196 430
		f 4 366 452 -415 453
		mu 0 4 183 406 195 428
		f 4 369 454 -410 -451
		mu 0 4 187 426 198 433
		f 4 370 455 -419 -455
		mu 0 4 189 424 203 427
		f 4 371 -454 -418 -456
		mu 0 4 191 429 201 425
		f 4 367 -452 -406 -453
		mu 0 4 182 431 192 218
		f 4 -362 456 -427 457
		mu 0 4 184 413 205 422
		f 4 -366 458 -436 459
		mu 0 4 180 420 213 418
		f 4 -364 460 -438 461
		mu 0 4 188 416 211 414
		f 4 -363 -458 -430 -461
		mu 0 4 186 423 209 417
		f 4 -361 -460 -422 -457
		mu 0 4 181 419 206 388
		f 4 -365 -462 -432 -459
		mu 0 4 190 415 214 421;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "700FD71E-436E-E8E2-680B-0FAF6B3C5194";
	setAttr -s 3 ".lnk";
	setAttr -s 3 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "DB920436-49DB-D987-E3A1-E58BED5A5F7E";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "491D5B0B-4325-9B80-FAD6-5C84E8D53D67";
createNode displayLayerManager -n "layerManager";
	rename -uid "FBDE3865-4C7D-106D-78CC-B387AA69DB22";
createNode displayLayer -n "defaultLayer";
	rename -uid "972FB830-4598-1C36-9621-118B166372AE";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "AA309892-4368-E1A8-F4B8-10AD29E5559B";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "E61E724D-4F6E-01F8-EA3F-818E7712227A";
	setAttr ".g" yes;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "4E804083-4002-8B37-2C34-159E19206598";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $nodeEditorPanelVisible = stringArrayContains(\"nodeEditorPanel1\", `getPanel -vis`);\n\tint    $nodeEditorWorkspaceControlOpen = (`workspaceControl -exists nodeEditorPanel1Window` && `workspaceControl -q -visible nodeEditorPanel1Window`);\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\n\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"top\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n"
		+ "            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n"
		+ "            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 359\n            -height 389\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"side\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n"
		+ "            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n"
		+ "            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 358\n            -height 388\n"
		+ "            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"front\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n"
		+ "            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n"
		+ "            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n"
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 359\n            -height 388\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 1\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 721\n            -height 821\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
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
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"Stereo\" (localizedPanelLabel(\"Stereo\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Stereo\")) -mbv $menusOkayInPanels  $panelName;\n{ string $editorName = ($panelName+\"Editor\");\n            stereoCameraView -e \n                -camera \"persp\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"wireframe\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 1\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n"
		+ "                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 32768\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 4 4 \n                -bumpResolution 4 4 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 0\n                -occlusionCulling 0\n                -shadingModel 0\n"
		+ "                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -controllers 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n"
		+ "                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 0\n                -height 0\n                -sceneRenderFilter 0\n                -displayMode \"centerEye\" \n                -viewColor 0 0 0 1 \n                -useCustomBackground 1\n                $editorName;\n            stereoCameraView -e -viewSelected 0 $editorName;\n            stereoCameraView -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName; };\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n"
		+ "\t\t\t\t-userCreated false\n\t\t\t\t-defaultImage \"vacantCell.xP:/\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 1\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 721\\n    -height 821\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 1\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 721\\n    -height 821\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "3C48B334-4E6E-DA5D-EC29-F0A189C33190";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "6C7712F4-4DEC-8934-99FF-3187DE14A4DA";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".esi" 2;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "I:/Cavalry/Maya Project Files//Env/Exports/Pipes";
	setAttr ".exf" -type "string" "PipeLargeCap_01_SM_Low";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "7151BAB3-4BE4-52CE-C377-25BF4550490D";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "5D4D5E54-4EA7-CFA6-C0E2-DD8E715442A0";
	setAttr ".pn" -type "string" "TE Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 3;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode lambert -n "Metal_TS";
	rename -uid "826F11C5-42BB-1064-FC9A-61943951ECDA";
createNode shadingEngine -n "lambert2SG";
	rename -uid "3F6C34F5-4083-A61C-947F-21A6375C8B8C";
	setAttr ".ihi" 0;
	setAttr -s 16 ".dsm";
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo1";
	rename -uid "FDB7231C-4F41-80DB-B2EC-7EB4150B1841";
createNode file -n "file1";
	rename -uid "75539854-42C1-DAFC-551C-908380F69E32";
	setAttr ".ftn" -type "string" "I:/Cavalry/Maya Project Files//Trimsheets/Metal/Texture/OcclusionRoughnessMetallic.png";
	setAttr ".cs" -type "string" "sRGB";
createNode place2dTexture -n "place2dTexture1";
	rename -uid "C5F1F734-4CD7-A78E-330F-F29DF5D6F55E";
createNode nodeGraphEditorInfo -n "hyperShadePrimaryNodeEditorSavedTabsInfo";
	rename -uid "FD428E56-48CD-0CC9-7A10-B2ADECA6F948";
	setAttr ".tgi[0].tn" -type "string" "Untitled_1";
	setAttr ".tgi[0].vl" -type "double2" -608.65145364687658 -922.6190109574618 ;
	setAttr ".tgi[0].vh" -type "double2" 628.93059898227091 922.61901095746214 ;
	setAttr -s 4 ".tgi[0].ni";
	setAttr ".tgi[0].ni[0].x" -550;
	setAttr ".tgi[0].ni[0].y" 115.71428680419922;
	setAttr ".tgi[0].ni[0].nvs" 1923;
	setAttr ".tgi[0].ni[1].x" -242.85714721679688;
	setAttr ".tgi[0].ni[1].y" 138.57142639160156;
	setAttr ".tgi[0].ni[1].nvs" 1923;
	setAttr ".tgi[0].ni[2].x" 64.285713195800781;
	setAttr ".tgi[0].ni[2].y" 138.57142639160156;
	setAttr ".tgi[0].ni[2].nvs" 1923;
	setAttr ".tgi[0].ni[3].x" 371.42855834960938;
	setAttr ".tgi[0].ni[3].y" 115.71428680419922;
	setAttr ".tgi[0].ni[3].nvs" 1923;
select -ne :time1;
	setAttr ".o" 1;
	setAttr ".unw" 1;
select -ne :hardwareRenderingGlobals;
	setAttr ".otfna" -type "stringArray" 22 "NURBS Curves" "NURBS Surfaces" "Polygons" "Subdiv Surface" "Particles" "Particle Instance" "Fluids" "Strokes" "Image Planes" "UI" "Lights" "Cameras" "Locators" "Joints" "IK Handles" "Deformers" "Motion Trails" "Components" "Hair Systems" "Follicles" "Misc. UI" "Ornaments"  ;
	setAttr ".otfva" -type "Int32Array" 22 0 1 1 1 1 1
		 1 1 1 0 0 0 0 0 0 0 0 0
		 0 0 0 0 ;
	setAttr ".fprt" yes;
select -ne :renderPartition;
	setAttr -s 3 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 6 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderUtilityList1;
select -ne :defaultRenderingList1;
select -ne :defaultTextureList1;
select -ne :initialShadingGroup;
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
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "file1.oc" "Metal_TS.c";
connectAttr "Metal_TS.oc" "lambert2SG.ss";
connectAttr "Large_CapShape.iog" "lambert2SG.dsm" -na;
connectAttr "Large_TShape.iog" "lambert2SG.dsm" -na;
connectAttr "Large_HalfShape.iog" "lambert2SG.dsm" -na;
connectAttr "Large_CornerShape.iog" "lambert2SG.dsm" -na;
connectAttr "Large_SingleShape.iog" "lambert2SG.dsm" -na;
connectAttr "Medium_CapShape.iog" "lambert2SG.dsm" -na;
connectAttr "Medium_TShape.iog" "lambert2SG.dsm" -na;
connectAttr "Medium_HalfShape.iog" "lambert2SG.dsm" -na;
connectAttr "Medium_CornerShape.iog" "lambert2SG.dsm" -na;
connectAttr "Medium_SingleShape.iog" "lambert2SG.dsm" -na;
connectAttr "Small_EndCapShape.iog" "lambert2SG.dsm" -na;
connectAttr "Small_TShape.iog" "lambert2SG.dsm" -na;
connectAttr "Small_HalfShape.iog" "lambert2SG.dsm" -na;
connectAttr "Small_CornerShape.iog" "lambert2SG.dsm" -na;
connectAttr "Small_SingleShape.iog" "lambert2SG.dsm" -na;
connectAttr "lambert2SG.msg" "materialInfo1.sg";
connectAttr "Metal_TS.msg" "materialInfo1.m";
connectAttr "file1.msg" "materialInfo1.t" -na;
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
connectAttr "place2dTexture1.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[0].dn"
		;
connectAttr "file1.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[1].dn"
		;
connectAttr "Metal_TS.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[2].dn"
		;
connectAttr "lambert2SG.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[3].dn"
		;
connectAttr "lambert2SG.pa" ":renderPartition.st" -na;
connectAttr "Metal_TS.msg" ":defaultShaderList1.s" -na;
connectAttr "place2dTexture1.msg" ":defaultRenderUtilityList1.u" -na;
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "file1.msg" ":defaultTextureList1.tx" -na;
// End of Pipes.ma
