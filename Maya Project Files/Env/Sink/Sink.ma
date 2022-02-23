//Maya ASCII 2022 scene
//Name: Sink.ma
//Last modified: Wed, Feb 23, 2022 11:15:33 AM
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
fileInfo "UUID" "A1E39214-48BE-9F2D-6057-A28A6E99ACAA";
createNode transform -s -n "persp";
	rename -uid "60BC4341-41EB-227C-DEA2-F5B54D463977";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0.54682792628389476 5.2868162068381821 6.7293026818346151 ;
	setAttr ".r" -type "double3" -38.138352680607355 2169.3999999991306 -4.0298049210547711e-16 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "62181045-4D78-B2CB-A8C8-3A9312C680AB";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 8.3969608955667869;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".tp" -type "double3" -162.36519001997476 103.72217761051165 -22.730444222289734 ;
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "20A68E7F-43C9-A5BF-8781-A7BA79A0E0B6";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -0.46381476791272946 10.012942091178328 0 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "6A8CE2CA-4207-D3C7-6D8E-899CE4BDCAA7";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 9.0129420911783278;
	setAttr ".ow" 5.2671509095390263;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".tp" -type "double3" -46.381476791272945 100 0 ;
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "21DDEA29-45D0-7F54-24FD-87B21D7A23DD";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 10.001000000000001 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "59B483F8-4F0D-B520-04AD-6AA8C3F0F748";
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
	rename -uid "BE894357-4906-93D4-AA24-CD9645644509";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.021122615268968 0.63474205017089846 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "5D3D47B3-4A38-1E39-F5A9-3C84C50A0209";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.021122615268968;
	setAttr ".ow" 3.8043971934529743;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".tp" -type "double3" 0 63.474205017089844 0 ;
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -n "REF";
	rename -uid "AD3BDB58-4CF9-5ED9-D249-F69C470BEBB0";
	setAttr ".t" -type "double3" -0.77781890869140646 1 -1.4849233627319336 ;
	setAttr ".r" -type "double3" -90 45.000000000000007 0 ;
	setAttr ".rp" -type "double3" 0.77781890869140624 -1.4849233627319336 -1 ;
	setAttr ".rpt" -type "double3" 0 0.48492336273193359 2.4849233627319336 ;
	setAttr ".sp" -type "double3" 0.77781890869140624 -1.4849233627319336 -1 ;
createNode mesh -n "REFShape" -p "REF";
	rename -uid "739FCC9D-413A-1787-67BF-96AEFD90AAE3";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:9]";
	setAttr ".iog[0].og[1].gcl" -type "componentList" 1 "f[10:11]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 2 ".uvst";
	setAttr ".uvst[0].uvsn" -type "string" "LightMapUV";
	setAttr -s 25 ".uvst[0].uvsp[0:24]" -type "float2" 5.19921875 2 0 2
		 0 1 5.19921875 1 0.99951172 2 -1.1920929e-07 2 -1.1920929e-07 1 0.99951172 1 1.99902344
		 2 -3.19921875 2 -3.19921875 1 1.99902344 1 1.99902344 1 0.99951172 2.99902344 -5.9604645e-08
		 2.99902344 -1.1920929e-07 -2.19921875 0.99951172 -2.19921875 0.99951172 6.19921875
		 0 6.19921875 0.99951172 1.000000119209 1.99902344 2 0.99951172 2 0.99951172 1 1.99902344
		 2 0.99951172 1;
	setAttr ".uvst[1].uvsn" -type "string" "UVmap_1";
	setAttr -s 24 ".uvst[1].uvsp[0:23]" -type "float2" 0.58837891 0.99193573
		 0.58837891 0.072753906 0.76513672 0.072753906 0.76513672 0.99193573 0.95898438 0.79846191
		 0.78222656 0.79846191 0.78222656 0.62158203 0.95898438 0.62158203 0.20153809 0.99193573
		 0.20153809 0.072753906 0.37841797 0.072753906 0.37841797 0.99193573 0.95898438 0.99193573
		 0.78222656 0.99193573 0.78222656 0.81518555 0.95898438 0.81518555 0.57177734 0.99193573
		 0.39501953 0.99193573 0.39501953 0.072753906 0.57177734 0.072753906 0.18481445 0.99193573
		 0.00806427 0.99193573 0.00806427 0.072753906 0.18481445 0.072753906;
	setAttr ".cuvs" -type "string" "LightMapUV";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 8 ".vt[0:7]"  2.26274538 -3.67695284 0 -1.41421354 -1.4495849e-06 0
		 -1.41421354 -1.4495849e-06 -1 2.26274538 -3.67695284 -1 2.96985149 -2.96984529 0
		 2.96985149 -2.96984529 -1 -0.70710737 0.70710611 0 -0.70710748 0.70710599 -1;
	setAttr -s 18 ".ed[0:17]"  0 1 0 1 2 0 2 0 0 3 0 0 2 3 0 4 0 0 3 4 0
		 5 4 0 3 5 0 6 4 0 5 6 0 7 6 0 5 7 0 1 6 0 7 1 0 7 2 0 0 6 0 2 5 0;
	setAttr -s 36 ".n[0:35]" -type "float3"  -0.70710677 -0.70710677 0 -0.70710677
		 -0.70710677 0 -0.70710677 -0.70710677 0 -0.70710677 -0.70710677 0 -0.70710677 -0.70710677
		 0 -0.70710677 -0.70710677 0 0.70710677 -0.70710677 0 0.70710677 -0.70710677 0 0.70710677
		 -0.70710677 0 0.70710677 -0.70710677 0 0.70710677 -0.70710677 0 0.70710677 -0.70710677
		 0 0.70710677 0.70710677 0 0.70710677 0.70710677 0 0.70710677 0.70710677 0 0.70710677
		 0.70710677 0 0.70710677 0.70710677 0 0.70710677 0.70710677 0 -0.70710677 0.70710677
		 0 -0.70710677 0.70710677 0 -0.70710677 0.70710677 0 -0.70710677 0.70710677 0 -0.70710677
		 0.70710677 0 -0.70710677 0.70710677 0 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 -1
		 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1;
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
		mu 0 3 20 21 22
		mu 1 3 12 13 14
		f 3 -2 -15 15
		mu 0 3 12 23 24
		mu 1 3 15 12 14
		f 3 -14 -1 16
		mu 0 3 13 14 15
		mu 1 3 16 17 18
		f 3 -10 -17 -6
		mu 0 3 16 13 15
		mu 1 3 19 16 18
		f 3 -9 -5 17
		mu 0 3 17 18 2
		mu 1 3 20 21 22
		f 3 -13 -18 -16
		mu 0 3 19 17 2
		mu 1 3 23 20 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr -s 2 ".pd";
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".pd[1]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SCALE";
	rename -uid "A3DF239D-40C4-14E0-F2AF-58B8271C8136";
	setAttr ".t" -type "double3" -3.527629454111362 0.5 0 ;
	setAttr ".s" -type "double3" 1 2 1 ;
	setAttr ".rp" -type "double3" 0 -0.5 0 ;
	setAttr ".sp" -type "double3" 0 -0.5 0 ;
createNode mesh -n "SCALEShape" -p "SCALE";
	rename -uid "9F971E1F-428F-0C73-7877-488F567EE76A";
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
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.375 0 0.625 0 0.375
		 0.25 0.625 0.25 0.375 0.5 0.625 0.5 0.375 0.75 0.625 0.75 0.375 1 0.625 1 0.875 0
		 0.875 0.25 0.125 0 0.125 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".vt[0:7]"  -0.5 -0.5 0.5 0.5 -0.5 0.5 -0.5 0.5 0.5 0.5 0.5 0.5
		 -0.5 0.5 -0.5 0.5 0.5 -0.5 -0.5 -0.5 -0.5 0.5 -0.5 -0.5;
	setAttr -s 12 ".ed[0:11]"  0 1 0 2 3 0 4 5 0 6 7 0 0 2 0 1 3 0 2 4 0
		 3 5 0 4 6 0 5 7 0 6 0 0 7 1 0;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 5 -2 -5
		mu 0 4 0 1 3 2
		f 4 1 7 -3 -7
		mu 0 4 2 3 5 4
		f 4 2 9 -4 -9
		mu 0 4 4 5 7 6
		f 4 3 11 -1 -11
		mu 0 4 6 7 9 8
		f 4 -12 -10 -8 -6
		mu 0 4 1 10 11 3
		f 4 10 4 6 8
		mu 0 4 12 0 2 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SinkMeshes";
	rename -uid "335E6B8F-4AE0-F4BD-D6C1-52BC5C1FCAE6";
createNode transform -n "Faucet" -p "SinkMeshes";
	rename -uid "EA9AEE7D-47F2-8FE4-B90B-0F82C49E3258";
createNode transform -n "Base" -p "Faucet";
	rename -uid "964EDB5C-4ECE-01C6-7882-659D801BDEB1";
	setAttr ".rp" -type "double3" 0 5.0391642503200278e-09 1.9704809517406828e-09 ;
	setAttr ".sp" -type "double3" 0 5.0391642503200278e-09 1.9704809517406828e-09 ;
createNode mesh -n "BaseShape" -p "Base";
	rename -uid "715CECBE-47A8-8A9D-C506-31AA342E51E5";
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
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 23 ".uvst[0].uvsp[0:22]" -type "float2" 0.375 0 0.625 0 0.375
		 0.25 0.625 0.25 0.375 0.5 0.625 0.5 0.375 0.75 0.625 0.75 0.875 0 0.875 0.25 0.125
		 0 0.125 0.25 0.25 0.25 0.375 0.375 0.625 0.375 0.75 0.25 0.75 0 0.25 0 0.5 0 0.5
		 0.75 0.5 0.5 0.5 0.375 0.5 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 17 ".pt[0:16]" -type "float3"  0 0.5 1.9704809e-09 0 0.5 
		1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 1.9704809e-09 
		0 0.5 1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 1.9704809e-09 0 
		0.5 1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 
		1.9704809e-09 0 0.5 1.9704809e-09 0 0.5 1.9704809e-09;
	setAttr -s 17 ".vt[0:16]"  -0.16026536 -0.5 0.058820762 0.16026536 -0.5 0.058820762
		 -0.16026536 -0.47473115 0.058820762 0.16026536 -0.47473115 0.058820762 -0.16026536 -0.47473115 -0.058820762
		 0.16026536 -0.47473115 -0.058820762 -0.16026536 -0.5 -0.058820762 0.16026536 -0.5 -0.058820762
		 -0.18973011 -0.47473115 0 0.18973011 -0.47473115 0 0.18973011 -0.5 0 -0.18973011 -0.5 0
		 0 -0.5 0.058820762 0 -0.5 -0.058820762 0 -0.47473115 -0.058820762 0 -0.47473115 0
		 0 -0.47473115 0.058820762;
	setAttr -s 28 ".ed[0:27]"  0 12 0 2 16 0 4 14 0 6 13 0 0 2 0 1 3 0 2 8 0
		 3 9 0 4 6 0 5 7 0 6 11 0 7 10 0 8 4 0 9 5 0 10 1 0 11 0 0 8 15 1 9 10 1 11 8 1 12 1 0
		 13 7 0 14 5 0 15 9 1 16 3 0 13 14 1 14 15 1 15 16 1 16 12 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 27 19 5 -24
		mu 0 4 22 18 1 3
		f 4 25 22 13 -22
		mu 0 4 20 21 14 5
		f 4 24 21 9 -21
		mu 0 4 19 20 5 7
		f 4 17 -12 -10 -14
		mu 0 4 15 16 8 9
		f 4 10 18 12 8
		mu 0 4 10 17 12 11
		f 4 26 23 7 -23
		mu 0 4 21 22 3 14
		f 4 -15 -18 -8 -6
		mu 0 4 1 16 15 3
		f 4 -19 15 4 6
		mu 0 4 12 17 0 2
		f 4 2 -25 -4 -9
		mu 0 4 4 20 19 6
		f 4 16 -26 -3 -13
		mu 0 4 13 21 20 4
		f 4 1 -27 -17 -7
		mu 0 4 2 22 21 13
		f 4 0 -28 -2 -5
		mu 0 4 0 18 22 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Pipe" -p "Faucet";
	rename -uid "883EDEF3-48FF-13F7-C9F1-7C8B712B7A7C";
	setAttr ".rp" -type "double3" -0.0036048990590788321 5.039164241438243e-09 5.7932617139044853e-08 ;
	setAttr ".sp" -type "double3" -0.0036048990590788321 5.0391644546010639e-09 5.7932617139044853e-08 ;
createNode mesh -n "PipeShape" -p "Pipe";
	rename -uid "0A44CBF4-4AC9-954C-BC37-2E974E3C86E7";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.84375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 51 ".uvst[0].uvsp[0:50]" -type "float2" 0.375 0.3125 0.41666666
		 0.3125 0.45833331 0.3125 0.49999997 0.3125 0.54166663 0.3125 0.58333331 0.3125 0.625
		 0.3125 0.375 0.68843985 0.41666666 0.68843985 0.45833331 0.68843985 0.49999997 0.68843985
		 0.54166663 0.68843985 0.58333331 0.68843985 0.625 0.68843985 0.57812506 0.70843351
		 0.42187503 0.70843351 0.34375 0.84375 0.421875 0.97906649 0.578125 0.97906649 0.65625
		 0.84375 0.5 0.83749998 0.578125 0.97906649 0.421875 0.97906649 0.34375 0.84375 0.42187503
		 0.70843351 0.57812506 0.70843351 0.65625 0.84375 0.578125 0.97906649 0.421875 0.97906649
		 0.34375 0.84375 0.42187503 0.70843351 0.57812506 0.70843351 0.65625 0.84375 0.578125
		 0.97906649 0.421875 0.97906649 0.34375 0.84375 0.42187503 0.70843351 0.57812506 0.70843351
		 0.65625 0.84375 0.578125 0.97906649 0.421875 0.97906649 0.34375 0.84375 0.42187503
		 0.70843351 0.57812506 0.70843351 0.65625 0.84375 0.578125 0.97906649 0.421875 0.97906649
		 0.34375 0.84375 0.42187503 0.70843351 0.57812506 0.70843351 0.65625 0.84375;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 43 ".pt[0:42]" -type "float3"  -0.23587519 1.0000001 0.4023138 
		0.22867003 1.0000001 0.4023138 0.46094495 1.0000001 1.2152105e-06 0.22867003 1.0000001 
		-0.40231022 -0.23587519 1.0000001 -0.40231022 -0.46815476 1.0000001 1.2152105e-06 
		-0.23587519 -0.89608401 0.4023138 0.22867003 -0.89608401 0.4023138 0.46094495 -0.89608401 
		1.2152105e-06 0.22867003 -0.89608401 -0.40231022 -0.23587519 -0.89608401 -0.40231022 
		-0.46815476 -0.89608401 1.2152105e-06 -0.23587519 -2.6015527 -1.2476925 0.22867003 
		-2.6015482 -1.2476925 0.46094495 -2.1992252 -1.2476925 0.22867003 -1.7969044 -1.2476925 
		-0.23587519 -1.7969115 -1.2476925 -0.46815476 -2.1992369 -1.2476925 -0.23587519 -2.6015527 
		-2.5228109 0.22867003 -2.6015482 -2.5228109 0.46094495 -2.1992252 -2.5228109 0.22867003 
		-1.7969044 -2.5228109 -0.23587519 -1.7969115 -2.5228109 -0.46815476 -2.1992369 -2.5228109 
		-0.23587517 -1.1668214 -3.8291714 0.22867003 -1.1668208 -3.8291669 -0.0036048992 
		-1.166821 -3.4268484 0.46094495 -1.1668216 -3.4268439 0.22866994 -1.1668216 -3.0245228 
		-0.23587519 -1.166822 -3.0245297 -0.46815476 -1.1668216 -3.4268556 -0.2358747 -1.9941024 
		-0.171069 0.22867054 -1.9941001 -0.17106964 0.46094543 -1.7362056 -0.42895809 0.22867046 
		-1.4783119 -0.68684518 -0.23587477 -1.4783157 -0.68684441 -0.46815431 -1.7362115 
		-0.42895675 -0.2358747 -2.0372772 -3.3255856 0.22867052 -2.0372746 -3.3255835 0.46094495 
		-1.7905304 -3.0788386 0.22866951 -1.5437863 -2.8320942 -0.23587568 -1.5437903 -2.8320978 
		-0.46815476 -1.7905362 -3.0788445;
	setAttr -s 43 ".vt[0:42]"  0.245 -1 -0.42436278 -0.24500488 -1 -0.42436278
		 -0.49000975 -1 -1.2207031e-06 -0.24500488 -1 0.42435914 0.245 -1 0.42435914 0.49000975 -1 -1.2207031e-06
		 0.245 1 -0.42436278 -0.24500488 1 -0.42436278 -0.49000975 1 -1.2207031e-06 -0.24500488 1 0.42435914
		 0.245 1 0.42435914 0.49000975 1 -1.2207031e-06 0.245 2.79893804 1.31607294 -0.24500488 2.79893303 1.31607294
		 -0.49000975 2.37456059 1.31607294 -0.24500488 1.95019042 1.31607294 0.245 1.9501977 1.31607294
		 0.49000975 2.37457275 1.31607294 0.245 2.79893804 2.66107512 -0.24500488 2.79893303 2.66107512
		 -0.49000975 2.37456059 2.66107512 -0.24500488 1.95019042 2.66107512 0.245 1.9501977 2.66107512
		 0.49000975 2.37457275 2.66107512 0.24499996 1.28557527 4.039031506 -0.24500488 1.28557467 4.03902626
		 7.2759575e-14 1.28557491 3.61465883 -0.49000975 1.28557551 3.61465383 -0.2450048 1.28557551 3.19028354
		 0.245 1.28557587 3.19029093 0.49000975 1.28557551 3.61466622 0.24499947 2.15819573 0.18044458
		 -0.24500541 2.15819335 0.18044527 -0.49001026 1.88616502 0.45246741 -0.24500534 1.61413729 0.72448814
		 0.24499954 1.61414123 0.72448736 0.49000928 1.88617122 0.45246604 0.24499947 2.20373702 3.50784636
		 -0.2450054 2.2037344 3.50784397 -0.49000975 1.94346714 3.247576 -0.24500433 1.68320012 2.98730874
		 0.24500051 1.68320417 2.98731256 0.49000975 1.94347322 3.24758244;
	setAttr -s 84 ".ed[0:83]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 1
		 7 8 1 8 9 1 9 10 1 10 11 1 11 6 1 0 6 1 1 7 1 2 8 1 3 9 1 4 10 1 5 11 1 6 31 1 7 32 1
		 12 13 1 8 33 1 13 14 1 9 34 1 14 15 1 10 35 1 15 16 1 11 36 1 16 17 1 17 12 1 12 18 1
		 13 19 1 18 19 1 14 20 1 19 20 1 15 21 1 20 21 1 16 22 1 21 22 1 17 23 1 22 23 1 23 18 1
		 18 37 1 19 38 1 24 25 0 25 26 1 24 26 1 20 39 1 25 27 0 27 26 1 21 40 1 27 28 0 28 26 1
		 22 41 1 28 29 0 29 26 1 23 42 1 29 30 0 30 26 1 30 24 0 31 12 1 32 13 1 33 14 1 34 15 1
		 35 16 1 36 17 1 31 32 1 32 33 1 33 34 1 34 35 1 35 36 1 36 31 1 37 24 1 38 25 1 39 27 1
		 40 28 1 41 29 1 42 30 1 37 38 1 38 39 1 39 40 1 40 41 1 41 42 1 42 37 1;
	setAttr -s 42 -ch 162 ".fc[0:41]" -type "polyFaces" 
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
		mu 0 4 5 6 13 12
		f 3 44 45 -47
		mu 0 3 33 34 20
		f 3 48 49 -46
		mu 0 3 34 35 20
		f 3 51 52 -50
		mu 0 3 35 36 20
		f 3 54 55 -53
		mu 0 3 36 37 20
		f 3 57 58 -56
		mu 0 3 37 38 20
		f 3 59 46 -59
		mu 0 3 38 33 20
		f 4 66 61 -21 -61
		mu 0 4 39 40 22 21
		f 4 67 62 -23 -62
		mu 0 4 40 41 23 22
		f 4 68 63 -25 -63
		mu 0 4 41 42 24 23
		f 4 69 64 -27 -64
		mu 0 4 42 43 25 24
		f 4 70 65 -29 -65
		mu 0 4 43 44 26 25
		f 4 71 60 -30 -66
		mu 0 4 44 39 21 26
		f 4 20 31 -33 -31
		mu 0 4 21 22 28 27
		f 4 22 33 -35 -32
		mu 0 4 22 23 29 28
		f 4 24 35 -37 -34
		mu 0 4 23 24 30 29
		f 4 26 37 -39 -36
		mu 0 4 24 25 31 30
		f 4 28 39 -41 -38
		mu 0 4 25 26 32 31
		f 4 29 30 -42 -40
		mu 0 4 26 21 27 32
		f 4 78 73 -45 -73
		mu 0 4 45 46 34 33
		f 4 79 74 -49 -74
		mu 0 4 46 47 35 34
		f 4 80 75 -52 -75
		mu 0 4 47 48 36 35
		f 4 81 76 -55 -76
		mu 0 4 48 49 37 36
		f 4 82 77 -58 -77
		mu 0 4 49 50 38 37
		f 4 83 72 -60 -78
		mu 0 4 50 45 33 38
		f 4 6 19 -67 -19
		mu 0 4 18 17 40 39
		f 4 7 21 -68 -20
		mu 0 4 17 16 41 40
		f 4 8 23 -69 -22
		mu 0 4 16 15 42 41
		f 4 9 25 -70 -24
		mu 0 4 15 14 43 42
		f 4 10 27 -71 -26
		mu 0 4 14 19 44 43
		f 4 11 18 -72 -28
		mu 0 4 19 18 39 44
		f 4 32 43 -79 -43
		mu 0 4 27 28 46 45
		f 4 34 47 -80 -44
		mu 0 4 28 29 47 46
		f 4 36 50 -81 -48
		mu 0 4 29 30 48 47
		f 4 38 53 -82 -51
		mu 0 4 30 31 49 48
		f 4 40 56 -83 -54
		mu 0 4 31 32 50 49
		f 4 41 42 -84 -57
		mu 0 4 32 27 45 50;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Handle" -p "Faucet";
	rename -uid "1F4093D9-4FDB-070C-CE2B-1CB88E8711D9";
	setAttr ".rp" -type "double3" 0.12347543345191213 0.025268864902445461 5.7932617139044853e-08 ;
	setAttr ".sp" -type "double3" 0.12347543345191213 0.025268864902445669 5.7932617139044853e-08 ;
createNode mesh -n "HandleShape" -p "Handle";
	rename -uid "90BE70F8-4131-E30E-362A-AAA38EC5D4F7";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 21 ".uvst[0].uvsp[0:20]" -type "float2" 0.375 0.3125 0.41666666
		 0.3125 0.45833331 0.3125 0.49999997 0.3125 0.54166663 0.3125 0.58333331 0.3125 0.625
		 0.3125 0.375 0.68843985 0.41666666 0.68843985 0.45833331 0.68843985 0.49999997 0.68843985
		 0.54166663 0.68843985 0.58333331 0.68843985 0.625 0.68843985 0.57812506 0.70843351
		 0.42187503 0.70843351 0.34375 0.84375 0.421875 0.97906649 0.578125 0.97906649 0.65625
		 0.84375 0.5 0.83749998;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 13 ".pt[0:12]" -type "float3"  -0.35791394 1.025269 0.83379042 
		0.60486442 1.025269 0.8337906 1.0862536 1.025269 2.0139777e-07 0.60486466 1.025269 
		-0.83379036 -0.35791367 1.025269 -0.83379042 -0.83930284 1.025269 5.793262e-08 -0.35791394 
		-0.45708245 0.83379042 0.60486442 -0.45708245 0.8337906 1.0862536 -0.45708245 2.0139777e-07 
		0.60486466 -0.45708245 -0.83379036 -0.35791367 -0.45708245 -0.83379042 -0.83930284 
		-0.45708245 5.793262e-08 0.12347544 -0.45708245 5.7932617e-08;
	setAttr -s 13 ".vt[0:12]"  0.50000024 -1.000000238419 -0.86602533 -0.49999985 -1.000000238419 -0.86602557
		 -1 -1.000000238419 -1.4901161e-07 -0.50000012 -1.000000238419 0.86602539 0.49999997 -1.000000238419 0.86602545
		 1 -1.000000238419 -3.4051298e-15 0.50000024 0.53966022 -0.86602533 -0.49999985 0.53966022 -0.86602557
		 -1 0.53966022 -1.4901161e-07 -0.50000012 0.53966022 0.86602539 0.49999997 0.53966022 0.86602545
		 1 0.53966022 -3.4051298e-15 0 0.53966022 0;
	setAttr -s 24 ".ed[0:23]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 0 6 1 1 7 1 2 8 1 3 9 1 4 10 1 5 11 1 6 12 1 7 12 1
		 8 12 1 9 12 1 10 12 1 11 12 1;
	setAttr -s 12 -ch 42 ".fc[0:11]" -type "polyFaces" 
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
		mu 0 4 5 6 13 12
		f 3 6 19 -19
		mu 0 3 18 17 20
		f 3 7 20 -20
		mu 0 3 17 16 20
		f 3 8 21 -21
		mu 0 3 16 15 20
		f 3 9 22 -22
		mu 0 3 15 14 20
		f 3 10 23 -23
		mu 0 3 14 19 20
		f 3 11 18 -24
		mu 0 3 19 18 20;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Handle1" -p "Faucet";
	rename -uid "F9E91344-4A3F-9AEC-4894-32B03F1EE8D8";
	setAttr ".rp" -type "double3" -0.1292694484332523 0.025268864902445461 5.7932617139044853e-08 ;
	setAttr ".sp" -type "double3" -0.1292694484332523 0.025268864902445669 5.7932617139044853e-08 ;
createNode mesh -n "Handle1Shape" -p "Handle1";
	rename -uid "B6096FA9-4897-AE6D-1679-16B1E09096EC";
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
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 21 ".uvst[0].uvsp[0:20]" -type "float2" 0.375 0.3125 0.41666666
		 0.3125 0.45833331 0.3125 0.49999997 0.3125 0.54166663 0.3125 0.58333331 0.3125 0.625
		 0.3125 0.375 0.68843985 0.41666666 0.68843985 0.45833331 0.68843985 0.49999997 0.68843985
		 0.54166663 0.68843985 0.58333331 0.68843985 0.625 0.68843985 0.57812506 0.70843351
		 0.42187503 0.70843351 0.34375 0.84375 0.421875 0.97906649 0.578125 0.97906649 0.65625
		 0.84375 0.5 0.83749998;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 13 ".pt[0:12]" -type "float3"  -0.61065882 1.025269 0.83379042 
		0.35211954 1.025269 0.8337906 0.83350885 1.025269 2.0139787e-07 0.3521198 1.025269 
		-0.83379036 -0.61065853 1.025269 -0.83379042 -1.0920477 1.025269 5.7932731e-08 -0.61065882 
		-0.45708245 0.83379042 0.35211954 -0.45708245 0.8337906 0.83350885 -0.45708245 2.0139787e-07 
		0.3521198 -0.45708245 -0.83379036 -0.61065853 -0.45708245 -0.83379042 -1.0920477 
		-0.45708245 5.7932731e-08 -0.12926945 -0.45708245 5.7932731e-08;
	setAttr -s 13 ".vt[0:12]"  0.50000024 -1.000000238419 -0.86602533 -0.49999985 -1.000000238419 -0.86602557
		 -1 -1.000000238419 -1.4901173e-07 -0.50000012 -1.000000238419 0.86602539 0.49999997 -1.000000238419 0.86602545
		 1 -1.000000238419 -1.1539473e-13 0.50000024 0.53966022 -0.86602533 -0.49999985 0.53966022 -0.86602557
		 -1 0.53966022 -1.4901173e-07 -0.50000012 0.53966022 0.86602539 0.49999997 0.53966022 0.86602545
		 1 0.53966022 -1.1539473e-13 0 0.53966022 -1.1709744e-13;
	setAttr -s 24 ".ed[0:23]"  0 1 0 1 2 0 2 3 0 3 4 0 4 5 0 5 0 0 6 7 0
		 7 8 0 8 9 0 9 10 0 10 11 0 11 6 0 0 6 1 1 7 1 2 8 1 3 9 1 4 10 1 5 11 1 6 12 1 7 12 1
		 8 12 1 9 12 1 10 12 1 11 12 1;
	setAttr -s 12 -ch 42 ".fc[0:11]" -type "polyFaces" 
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
		mu 0 4 5 6 13 12
		f 3 6 19 -19
		mu 0 3 18 17 20
		f 3 7 20 -20
		mu 0 3 17 16 20
		f 3 8 21 -21
		mu 0 3 16 15 20
		f 3 9 22 -22
		mu 0 3 15 14 20
		f 3 10 23 -23
		mu 0 3 14 19 20
		f 3 11 18 -24
		mu 0 3 19 18 20;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Sink" -p "SinkMeshes";
	rename -uid "8BCEF876-478E-E46C-1A88-01A1E3CE96C4";
createNode mesh -n "SinkShape" -p "Sink";
	rename -uid "E88B51B8-4FA1-C347-6292-FDA78981551B";
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
	setAttr ".pv" -type "double2" 0.25037281215190887 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 105 ".uvst[0].uvsp[0:104]" -type "float2" 0.5 1 0.5 0.75 0.4375
		 0.75 0.5625 1 0.4375 0.375 0.5 0.375 0.5625 0.375 0.5 0.875 0.37499997 0.2577225
		 0.375 0.37499994 0.36893532 0.23915361 0.36800218 0.0088341534 0.37604293 0.23826553
		 0.37605453 1 0.375 0.99742985 0.375 0.87631375 0.62394547 0 0.75 0 0.63199776 0.0088340985
		 0.6239686 0.24682797 0.625 0.2577225 0.625 0.375 0.25 0.25 0.75 0.25 0.125 0.0066912174
		 0.125 0 0.25 0 0.62394547 0.75 0.625 0.75109547 0.625 0.87393433 0.5625 0.23813516
		 0.5625 0 0.62396866 0.23839588 0.62394547 0.875 0.5625 0.75 0.75 0.24258517 0.875
		 0.0066912533 0.24783893 0.0069981813 0.125 0.24119575 0.43749997 0.23813517 0.4375
		 0 0.5 0 0.37605453 1.44355e-08 0.37605453 0.75 0.4375 0.875 0.5 0.23813516 0.75216109
		 0.0069981813 0.5625 0.875 0.62394547 1 0.37605453 0.875 0.4375 1 0.25 0.24258515
		 0.375 0.25 0.63106471 0.23915361 0.125 0.25 0.875 0.25 0.875 0.24119577 0.5625 0.25
		 0.625 0.25 0.625 0.375 0.625 0.5 0.5625 0.5 0.625 0.5 0.375 0.375 0.375 0.5 0.5 0.5
		 0.5 0.5 0.5 0.5 0.4375 0.5 0.4375 0.25 0.5 0.25 0.4375 0.5 0.4375 0.5 0.4375 0.5
		 0.375 0.5 0.4375 0.25 0.375 0.25 0.5625 0.5 0.5625 0.5 0.5625 0.5 0.5 0.5 0.5 0.25
		 0.5625 0.25 0.375 0.375 0.375 0.25 0.625 0.375 0.625 0.25 0.5625 0.25 0.625 0.25202182
		 0.62489593 0.49290162 0.62425435 0.5 0.4375 0.25 0.5 0.25 0.4375 0.25 0.37556875
		 0.25085092 0.5 0.25 0.5625 0.25 0.375 0.375 0.375 0.2520445 0.625 0.375 0.62441903
		 0.25085896 0.625 0.375 0.37510699 0.49270231 0.37574562 0.5 0.375 0.375;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 83 ".vt[0:82]"  -2.25400639 0.0094453143 0.72352678 2.25400639 0.0094453143 0.72352678
		 2.25400639 0.0094453143 0.26469842 -2.25400639 0.0094453143 0.26469842 0 0.36525795 0
		 0 0.0094453143 0.26469842 0 0.0094453143 0.72352678 0 -0.09081997 0.71854478 0 -0.36525795 0
		 -1.45021713 0.36525795 0 -1.45021498 0.0094453143 0.26469842 -1.45021498 0.0094453143 0.72352678
		 -1.45021713 -0.09081997 0.71854478 -1.45021713 -0.36525795 0 1.45021713 0.36525795 0
		 1.4502151 0.0094453143 0.26469842 1.4502151 0.0094453143 0.72352678 1.45021713 -0.09081997 0.71854478
		 1.45021713 -0.36525795 0 -2.25400639 0.0094453143 0.42416883 -1.45021498 0.0094453143 0.42416883
		 0 0.0094453143 0.42416883 1.4502151 0.0094453143 0.42416883 2.25400639 0.0094453143 0.42416883
		 1.45021713 -0.28147346 0.42416736 0 -0.28147346 0.42416736 -1.45021713 -0.28147346 0.42416736
		 -2.58709049 0.34547073 0.82195723 -2.56811953 0.34385064 0.84206748 -2.56811953 0.36525795 0.82589602
		 -1.45021701 0.36525795 0.82564878 -1.45021713 0.34361282 0.84199989 -2.567909 -0.09081997 0.71854478
		 -2.58709049 -0.078640014 0.70206487 2.58709049 -0.078640014 0.70206487 2.567909 -0.09081997 0.71854478
		 2.56833029 0.34408844 0.84213507 2.58709049 0.34547073 0.82195723 2.56833029 0.36525795 0.82614326
		 -2.567909 0.36525795 0.42416823 -2.58709049 0.34607631 0.42416799 2.567909 0.36525795 0.42416823
		 2.58709049 0.34607631 0.42416799 -2.567909 -0.36525795 0 -2.58709049 -0.34570569 0
		 -2.567909 -0.28147346 0.42416736 -2.58709049 -0.26336971 0.41683412 2.58709049 -0.34570569 0
		 2.567909 -0.36525795 0 2.58709049 -0.26336971 0.41683412 2.567909 -0.28147346 0.42416736
		 0 0.34361282 0.84199989 0 0.36525795 0.82564878 1.45021701 0.36525795 0.82564878
		 1.45021713 0.34361282 0.84199989 -2.58709049 0.33953139 0 -2.57848716 0.36525795 0
		 2.57848716 0.36525795 0 2.58709049 0.33953139 0 -2.50969243 0.35481605 0.78988373
		 -2.52881145 0.36525795 0.80635017 -1.45021665 0.3519983 0.78934234 -1.45021677 0.36525795 0.80539215
		 2.50947523 0.35452247 0.78982735 2.52913094 0.36525795 0.80675608 2.51048732 0.35588971 0.42416883
		 2.5290792 0.36525795 0.42416871 -2.50947523 0.35452247 0.19839793 -2.52913094 0.36525795 0.18146923
		 -1.45021665 0.36525795 0.18283312 -1.45021665 0.3519983 0.19888292 -2.51048732 0.35588971 0.42416883
		 -2.5290792 0.36525795 0.42416871 0 0.3519983 0.19888292 0 0.36525795 0.18283312 1.45021665 0.36525795 0.18283312
		 1.45021665 0.3519983 0.19888292 0 0.3519983 0.78934234 0 0.36525795 0.80539215 1.45021665 0.3519983 0.78934234
		 1.45021677 0.36525795 0.80539215 2.50969243 0.35481605 0.19834155 2.52881145 0.36525795 0.18187508;
	setAttr -s 158 ".ed[0:157]"  0 11 0 1 23 0 3 10 0 0 19 0 4 14 0 5 15 0
		 6 16 0 7 17 0 8 18 0 5 21 1 7 25 1 9 4 0 10 5 0 11 6 0 12 7 0 13 8 0 10 20 1 12 26 1
		 14 57 0 15 2 0 16 1 0 18 48 0 15 22 1 17 24 1 19 3 0 20 11 1 21 6 1 22 16 1 23 2 0
		 24 18 1 25 8 1 26 13 1 19 20 1 20 21 1 21 22 1 22 23 1 24 25 1 25 26 1 43 13 0 55 44 0
		 56 9 0 56 39 0 58 47 0 27 29 0 29 39 0 39 40 1 40 27 0 28 27 0 27 33 0 33 32 1 32 28 0
		 29 28 0 28 31 0 31 30 1 30 29 0 31 51 0 51 52 1 52 30 0 33 46 0 46 45 1 45 32 0 34 35 1
		 35 50 0 50 49 1 49 34 0 34 37 0 37 36 0 36 35 0 36 38 0 38 53 0 53 54 1 54 36 0 38 37 0
		 37 42 0 42 41 1 41 38 0 55 40 0 42 58 0 57 41 0 44 43 0 43 45 0 46 44 0 48 47 0 47 49 0
		 50 48 0 51 54 0 53 52 0 54 17 1 17 35 0 50 24 1 42 49 1 46 40 1 31 12 1 7 51 1 32 12 0
		 26 45 1 56 55 0 58 57 0 59 60 0 60 62 0 62 61 1 61 59 0 59 71 1 71 72 1 72 60 1 62 78 0
		 78 77 1 77 61 0 63 64 0 64 66 1 66 65 1 65 63 1 63 79 0 79 80 1 80 64 0 66 82 1 82 81 0
		 81 65 1 67 68 0 68 72 1 71 67 1 67 70 0 70 69 1 69 68 0 70 73 0 73 74 1 74 69 0 73 76 0
		 76 75 1 75 74 0 76 81 0 82 75 0 78 80 0 79 77 0 16 79 1 63 1 0 23 65 1 81 2 0 76 15 1
		 71 19 1 3 67 0 74 4 1 9 69 1 5 73 1 70 10 1 11 61 1 77 6 1 56 68 1 0 59 0 75 14 1
		 80 53 1 38 64 1 82 57 1 62 30 1 52 78 1 60 29 1 72 39 1 41 66 1;
	setAttr -s 76 -ch 302 ".fc[0:75]" -type "polyFaces" 
		f 4 22 35 28 -20
		mu 0 4 79 6 59 62
		f 4 16 33 -10 -13
		mu 0 4 73 4 5 67
		f 4 37 31 15 -31
		mu 0 4 7 44 2 1
		f 4 32 -17 -3 -25
		mu 0 4 83 4 73 64
		f 4 9 34 -23 -6
		mu 0 4 67 5 6 79
		f 4 36 30 8 -30
		mu 0 4 47 7 1 34
		f 4 0 -26 -33 -4
		mu 0 4 76 69 4 83
		f 4 -34 25 13 -27
		mu 0 4 5 4 69 81
		f 4 -35 26 6 -28
		mu 0 4 6 5 81 57
		f 4 -36 27 20 1
		mu 0 4 59 6 57 86
		f 4 10 -37 -24 -8
		mu 0 4 0 7 47 3
		f 4 17 -38 -11 -15
		mu 0 4 50 44 7 0
		f 4 43 44 45 46
		mu 0 4 8 98 104 9
		f 4 47 48 49 50
		mu 0 4 12 10 11 42
		f 4 51 52 53 54
		mu 0 4 98 12 39 93
		f 4 -54 55 56 57
		mu 0 4 93 39 45 92
		f 4 -50 58 59 60
		mu 0 4 13 14 15 49
		f 4 61 62 63 64
		mu 0 4 18 16 17 46
		f 4 -62 65 66 67
		mu 0 4 16 18 53 32
		f 4 68 69 70 71
		mu 0 4 32 19 96 30
		f 4 72 73 74 75
		mu 0 4 88 20 21 99
		f 4 76 -46 -42 96
		mu 0 4 38 51 22 54
		f 4 78 -75 77 97
		mu 0 4 55 23 35 56
		f 4 79 80 -60 81
		mu 0 4 24 25 26 37
		f 4 82 83 -64 84
		mu 0 4 27 28 29 33
		f 4 -57 85 -71 86
		mu 0 4 92 45 30 96
		f 4 87 88 -68 -72
		mu 0 4 30 31 16 32
		f 4 89 29 21 -85
		mu 0 4 33 47 34 27
		f 4 90 -84 -43 -78
		mu 0 4 35 46 36 56
		f 4 -82 91 -77 39
		mu 0 4 24 37 51 38
		f 4 92 14 93 -56
		mu 0 4 39 40 41 45
		f 4 94 -93 -53 -51
		mu 0 4 42 40 39 12
		f 4 -81 38 -32 95
		mu 0 4 49 43 2 44
		f 4 -94 7 -88 -86
		mu 0 4 45 41 31 30
		f 4 -65 -91 -74 -66
		mu 0 4 18 46 35 53
		f 4 23 -90 -63 -89
		mu 0 4 3 47 33 48
		f 4 -96 -18 -95 -61
		mu 0 4 49 44 50 13
		f 4 -92 -59 -49 -47
		mu 0 4 51 37 11 10
		f 3 -48 -52 -44
		mu 0 3 52 12 98
		f 3 -67 -73 -69
		mu 0 3 32 53 19
		f 4 98 99 100 101
		mu 0 4 84 94 91 75
		f 4 -99 102 103 104
		mu 0 4 94 84 63 97
		f 4 -101 105 106 107
		mu 0 4 75 91 95 70
		f 4 108 109 110 111
		mu 0 4 58 100 101 85
		f 4 -109 112 113 114
		mu 0 4 100 58 82 87
		f 4 -111 115 116 117
		mu 0 4 85 101 89 60
		f 4 118 119 -104 120
		mu 0 4 74 102 97 63
		f 4 -119 121 122 123
		mu 0 4 102 74 68 71
		f 4 -123 124 125 126
		mu 0 4 71 68 80 65
		f 4 -126 127 128 129
		mu 0 4 65 80 61 77
		f 4 -129 130 -117 131
		mu 0 4 77 61 60 89
		f 4 -107 132 -114 133
		mu 0 4 70 95 87 82
		f 4 134 -113 135 -21
		mu 0 4 57 82 58 86
		f 4 136 -118 137 -29
		mu 0 4 59 85 60 62
		f 4 -131 138 19 -138
		mu 0 4 60 61 79 62
		f 4 -121 139 24 140
		mu 0 4 74 63 83 64
		f 4 141 -12 142 -127
		mu 0 4 65 66 72 71
		f 4 143 -125 144 12
		mu 0 4 67 80 68 73
		f 4 145 -108 146 -14
		mu 0 4 69 75 70 81
		f 4 -124 -143 -41 147
		mu 0 4 102 71 72 103
		f 4 -145 -122 -141 2
		mu 0 4 73 68 74 64
		f 4 -102 -146 -1 148
		mu 0 4 84 75 69 76
		f 4 149 -5 -142 -130
		mu 0 4 77 78 66 65
		f 4 -139 -128 -144 5
		mu 0 4 79 61 80 67
		f 4 -147 -134 -135 -7
		mu 0 4 81 70 82 57
		f 4 -140 -103 -149 3
		mu 0 4 83 63 84 76
		f 4 -112 -137 -2 -136
		mu 0 4 58 85 59 86
		f 4 150 -70 151 -115
		mu 0 4 87 96 88 100
		f 4 152 -19 -150 -132
		mu 0 4 89 90 78 77
		f 4 153 -58 154 -106
		mu 0 4 91 93 92 95
		f 4 -55 -154 -100 155
		mu 0 4 98 93 91 94
		f 4 -155 -87 -151 -133
		mu 0 4 95 92 96 87
		f 4 156 -45 -156 -105
		mu 0 4 97 104 98 94
		f 4 -76 157 -110 -152
		mu 0 4 88 99 101 100
		f 4 -116 -158 -79 -153
		mu 0 4 89 101 99 90
		f 4 -148 41 -157 -120
		mu 0 4 102 103 104 97;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "3F0C79F5-4ADF-5053-7D9D-849F786C617A";
	setAttr -s 4 ".lnk";
	setAttr -s 4 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "3452544C-4777-F063-B818-F6BA9E16EA5A";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "4840E19A-40EC-B211-45DC-2DA6C88C1D73";
createNode displayLayerManager -n "layerManager";
	rename -uid "83A77175-436A-0C47-BFBF-AE8937A21851";
	setAttr -s 2 ".dli[1]"  1;
	setAttr -s 2 ".dli";
createNode displayLayer -n "defaultLayer";
	rename -uid "4BAEAD45-462B-23DF-4AD3-0A94708B7EF5";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "2FFBE5CE-4F2F-47D5-5E18-56A7AF15674C";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "C7ACCCAB-454B-1333-8363-38820E18113A";
	setAttr ".g" yes;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "E2DCF392-44A6-6A74-9727-65A991E23A88";
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
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1319\n            -height 718\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
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
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n\t\t\t\t-userCreated false\n\t\t\t\t-defaultImage \"vacantCell.xP:/\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1319\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1319\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "416556BD-4054-0DB3-971B-98BB95A4E224";
	setAttr ".b" -type "string" "playbackOptions -min 0 -max 120 -ast 0 -aet 200 ";
	setAttr ".st" 6;
createNode phong -n "M_DarkBlueGrey";
	rename -uid "4C8A9EB5-4029-EDA6-6A30-70AD33DA4847";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SinkSG";
	rename -uid "69F564B7-4E25-4731-A442-059155FD2E0B";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo1";
	rename -uid "46BCC3D4-4845-5EB2-4205-DD8723B51434";
createNode phong -n "WorldGridMaterial";
	rename -uid "E3DC932C-4ADC-2C31-9FED-B49D77957B5E";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SinkSG1";
	rename -uid "CADA2032-47C0-1B46-6ADF-D687A2A63905";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo2";
	rename -uid "53148830-47ED-70C1-1613-88AB52742EEF";
createNode groupId -n "groupId1";
	rename -uid "CD288D8A-48A0-A69D-14E3-D28532F4E114";
	setAttr ".ihi" 0;
createNode groupId -n "groupId2";
	rename -uid "56C4C42C-4138-3EBF-EACA-0694C11CCAC8";
	setAttr ".ihi" 0;
createNode displayLayer -n "layer1";
	rename -uid "A952B8BC-40B4-2846-E690-6BAFFA9E07D1";
	setAttr ".dt" 1;
	setAttr ".do" 1;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "9F491D44-45A6-5968-9E44-409AE96E1EA4";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".esi" 2;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "I:/Cavalry/Maya Project Files/Env/Exports/Sink";
	setAttr ".exf" -type "string" "Sink_01_SM_Low";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "E0440264-46C9-84A2-7752-6888848C72F9";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "9DF4913E-4698-C7D8-94DE-13A3BB18BF51";
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
	setAttr -s 6 ".dsm";
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
connectAttr "layer1.di" "REF.do";
connectAttr "groupId1.id" "REFShape.iog.og[0].gid";
connectAttr "SinkSG.mwc" "REFShape.iog.og[0].gco";
connectAttr "groupId2.id" "REFShape.iog.og[1].gid";
connectAttr "SinkSG1.mwc" "REFShape.iog.og[1].gco";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SinkSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SinkSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SinkSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SinkSG1.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "M_DarkBlueGrey.oc" "SinkSG.ss";
connectAttr "groupId1.msg" "SinkSG.gn" -na;
connectAttr "REFShape.iog.og[0]" "SinkSG.dsm" -na;
connectAttr "SinkSG.msg" "materialInfo1.sg";
connectAttr "M_DarkBlueGrey.msg" "materialInfo1.m";
connectAttr "WorldGridMaterial.oc" "SinkSG1.ss";
connectAttr "groupId2.msg" "SinkSG1.gn" -na;
connectAttr "REFShape.iog.og[1]" "SinkSG1.dsm" -na;
connectAttr "SinkSG1.msg" "materialInfo2.sg";
connectAttr "WorldGridMaterial.msg" "materialInfo2.m";
connectAttr "layerManager.dli[1]" "layer1.id";
connectAttr "SinkSG.pa" ":renderPartition.st" -na;
connectAttr "SinkSG1.pa" ":renderPartition.st" -na;
connectAttr "M_DarkBlueGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial.msg" ":defaultShaderList1.s" -na;
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "SCALEShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "SinkShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Handle1Shape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "HandleShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "PipeShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "BaseShape.iog" ":initialShadingGroup.dsm" -na;
// End of Sink.ma
