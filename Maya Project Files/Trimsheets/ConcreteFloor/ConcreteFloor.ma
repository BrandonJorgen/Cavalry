//Maya ASCII 2022 scene
//Name: ConcreteFloor.ma
//Last modified: Mon, Mar 14, 2022 06:27:12 PM
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
fileInfo "UUID" "B824BBAA-4D81-3D94-C4E4-CF87DB345FA0";
createNode transform -s -n "persp";
	rename -uid "B9AC4C11-4B3A-02B3-AC1E-2EAC1BD313F6";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -2.5051975349648532 1.0121502695486779 9.0215695993872078 ;
	setAttr ".r" -type "double3" -6.3383527296583262 -10.200000000000353 1.0098839396450671e-16 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "2EBEE180-4395-9150-1179-4BAAB771FF82";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 9.864901473319744;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "C9DC91B4-40D8-9FD7-AD31-34A736AB769D";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 10.001000000000001 0 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "A2D1815E-4BF2-A27C-C092-2787A12E0CAE";
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
	rename -uid "F4D2B458-4AB1-FA18-60EF-AABEDF021CEA";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 10.008608486345212 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "1CD4E9EB-4D94-18CC-B512-B69623EE4FC2";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 9.9157024595050025;
	setAttr ".ow" 8.9451837545788067;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".tp" -type "double3" 0 0 9.2906026840209961 ;
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "side";
	rename -uid "20F0CF0E-488A-6FB9-EAF6-F0A3F16669EB";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.001000000000001 0 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "D2219B09-42C1-9581-4505-7C8A3021B1EA";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 9.6147896408730205;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -n "BASE";
	rename -uid "B9FFDE4B-49F0-4235-6810-92A2C97E63F0";
	setAttr ".v" no;
	setAttr ".r" -type "double3" 90.000000000000028 0 0 ;
createNode mesh -n "BASEShape" -p "BASE";
	rename -uid "D8101559-4A2D-7C9F-1A2F-1BACD5D95A61";
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
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0 0 1 0 0 1 1 1 0
		 0.66666663 1 0.66666663 0 0.33333331 1 0.33333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".vt[0:7]"  -2 0 2 2 0 2 -2 0 -2 2 0 -2 -2 0 -0.66666657
		 2 0 -0.66666657 -2 0 0.66666675 2 0 0.66666675;
	setAttr -s 10 ".ed[0:9]"  0 1 0 0 6 0 1 7 0 2 3 0 4 2 0 5 3 0 4 5 1
		 6 4 0 7 5 0 6 7 1;
	setAttr -s 3 -ch 12 ".fc[0:2]" -type "polyFaces" 
		f 4 6 5 -4 -5
		mu 0 4 4 5 3 2
		f 4 9 8 -7 -8
		mu 0 4 6 7 5 4
		f 4 0 2 -10 -2
		mu 0 4 0 1 7 6;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_A";
	rename -uid "8A1AC216-4FB4-497F-49A9-D68F1C7EE1BC";
	setAttr ".rp" -type "double3" 0 -1.3333333587646485 0 ;
	setAttr ".sp" -type "double3" 0 -1.3333333587646485 0 ;
createNode transform -n "polySurface5" -p "Trim_A";
	rename -uid "F43BBFFB-4EAB-260E-0670-BC8140F6E80A";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape7" -p "polySurface5";
	rename -uid "7594077A-4609-1294-A638-20A7BB2D0191";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.0023224263 0.33101088
		 0.16434424 0.33101088 0.16434424 0.16898908 0.0023224263 0.16898908 0.16666666 0.33333331
		 0 0.33333331 0 0.16666666 0.16666666 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  -1.99071026 -0.67595643 0.18581206 -2 -0.66666675 0.17652239
		 -1.33333349 -0.66666675 0.17652239 -1.34262311 -0.67595643 0.18581206 -1.99071026 -1.32404375 0.18581206
		 -2 -1.33333349 0.17652239 -1.34262311 -1.32404375 0.18581206 -1.33333349 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface6" -p "Trim_A";
	rename -uid "4AD1B6A5-4ECC-7454-49FD-5DABDD003A09";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface7" -p "polySurface6";
	rename -uid "F9F156DA-4F9C-7294-D6C1-FB9814737E1F";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface9" -p "polySurface7";
	rename -uid "7AB2167A-4E28-A255-3DB1-329FC256ACA3";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface11" -p "polySurface9";
	rename -uid "F0E6E1CD-4A12-C4E9-70ED-399F898E28B5";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface13" -p "polySurface11";
	rename -uid "8D3E1DEF-49E0-8949-B7D5-BF8E3D3DC68F";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface15" -p "polySurface13";
	rename -uid "D38768DD-4D04-CEC5-08E1-D387E15816ED";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface17" -p "polySurface15";
	rename -uid "36E202FF-4E2F-8311-95CC-EC9A0ECE027A";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape19" -p "polySurface17";
	rename -uid "F6DC89DF-43AB-9396-E2EF-EDBA5718DB3C";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.16898908 0.0023224263
		 0.16898909 0.16434424 0.33101088 0.16434424 0.33101088 0.0023224263 0.16666666 0.16666666
		 0.16666666 0 0.33333331 0 0.33333331 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  -1.32404375 -1.99071026 0.18581206 -1.33333349 -2 0.17652239
		 -1.33333349 -1.33333349 0.17652239 -1.32404375 -1.34262311 0.18581206 -0.67595649 -1.99071026 0.18581206
		 -0.66666681 -2 0.17652239 -0.67595649 -1.34262311 0.18581206 -0.66666681 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface18" -p "polySurface15";
	rename -uid "45CF7B13-4B06-6657-75E2-9A9C90E29F34";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface19" -p "polySurface18";
	rename -uid "61389F66-4D76-8728-927F-4B8C5CC620C2";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape21" -p "polySurface19";
	rename -uid "BCC27AC9-480F-0CA7-EC9C-C5B34595C05C";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.0023224254 0.0023224263
		 0.0023224272 0.16434424 0.16434424 0.16434424 0.16434422 0.0023224263 0 0.16666666
		 0 0 0.16666666 0 0.16666666 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  -1.99071026 -1.99071026 0.18581206 -2 -2 0.17652239
		 -2 -1.33333349 0.17652239 -1.99071026 -1.34262311 0.18581206 -1.34262311 -1.99071026 0.18581206
		 -1.33333349 -2 0.17652239 -1.34262311 -1.34262311 0.18581206 -1.33333349 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface20" -p "polySurface18";
	rename -uid "DC837512-432F-4615-9885-B8A33A04AA68";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface21" -p "polySurface20";
	rename -uid "703CDCEA-4B47-4D27-B840-99B682EFD9EF";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape23" -p "polySurface21";
	rename -uid "1112981D-496D-A29C-0E8B-B398902DA602";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.83565575 0.33101088
		 0.99767756 0.33101088 0.99767756 0.16898909 0.83565575 0.16898908 1 0.33333331 0.83333331
		 0.33333331 0.83333331 0.16666666 1 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  1.34262288 -0.67595643 0.18581206 1.33333313 -0.66666675 0.17652239
		 2 -0.66666675 0.17652239 1.99071026 -0.67595643 0.18581206 1.34262288 -1.32404375 0.18581206
		 1.33333313 -1.33333349 0.17652239 1.99071026 -1.32404375 0.18581206 2 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface22" -p "polySurface20";
	rename -uid "BF373060-4776-371E-CF9E-E1BACD19C274";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface23" -p "polySurface22";
	rename -uid "C3A967E5-4E5E-07D2-6C09-2C80F46B7845";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape25" -p "polySurface23";
	rename -uid "A40448FD-48D8-B0EE-8A61-36B404935FD3";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:3]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.66666669 0.33101088
		 0.83101088 0.33101088 0.66666669 0.16666666 0.83101088 0.16898908 0.66666669 0.16898909
		 0.66666669 0.33333331 0.83333331 0.33333331 0.83333331 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  0.66666657 -0.67595643 0.18581206 0.66666657 -0.66666675 0.17652239
		 1.33333313 -0.66666675 0.17652239 1.32404339 -0.67595643 0.18581206 0.66666657 -1.32404375 0.18581206
		 0.66666657 -1.33333349 0.17652239 1.32404339 -1.32404375 0.18581206 1.33333313 -1.33333349 0.17652239;
	setAttr -s 11 ".ed[0:10]"  0 1 0 4 0 0 5 4 0 0 3 0 3 2 0 2 1 0 3 6 0
		 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 4 -ch 16 ".fc[0:3]" -type "polyFaces" 
		f 4 -1 3 4 5
		mu 0 4 5 0 1 6
		f 4 -5 6 7 8
		mu 0 4 6 1 3 7
		f 4 -3 9 -8 10
		mu 0 4 4 2 7 3
		f 4 -4 -2 -11 -7
		mu 0 4 1 0 4 3;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface24" -p "polySurface22";
	rename -uid "24022E58-4138-F3CC-2A65-5B8E755CA25C";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface25" -p "polySurface24";
	rename -uid "2498E209-4591-8864-E013-93AA0E07FAF4";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape27" -p "polySurface25";
	rename -uid "9FC045A2-4E0C-2F84-57B0-3C840999B32F";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.50232244 0.33101088
		 0.66434425 0.33101088 0.66434425 0.16898908 0.50232244 0.16898909 0.66666669 0.33333331
		 0.5 0.33333331 0.5 0.16666666 0.66666669 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  0.0092895972 -0.67595643 0.18581206 -7.6293944e-08 -0.66666675 0.17652239
		 0.66666657 -0.66666675 0.17652239 0.65737689 -0.67595643 0.18581206 0.0092895972 -1.32404375 0.18581206
		 -7.6293944e-08 -1.33333349 0.17652239 0.65737689 -1.32404375 0.18581206 0.66666657 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface26" -p "polySurface24";
	rename -uid "B53B6C6A-4D97-FAC2-9255-BE89E4B9057D";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape28" -p "polySurface26";
	rename -uid "B055F899-4FED-8002-6987-E780FA590B1B";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.33565575 0.33101088
		 0.49767756 0.33101088 0.49767759 0.16898909 0.33565572 0.16898908 0.5 0.33333331
		 0.33333331 0.33333331 0.33333331 0.16666666 0.5 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  -0.65737706 -0.67595643 0.18581206 -0.66666681 -0.66666675 0.17652239
		 -7.6293944e-08 -0.66666675 0.17652239 -0.0092897499 -0.67595643 0.18581206 -0.65737706 -1.32404375 0.18581206
		 -0.66666681 -1.33333349 0.17652239 -0.0092897499 -1.32404375 0.18581206 -7.6293944e-08 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface16" -p "polySurface13";
	rename -uid "2EE17F83-4625-60F0-A600-F5A86C4C8C00";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape18" -p "polySurface16";
	rename -uid "06AC1CAD-46F3-7F44-41B7-19965A676658";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.33565575 0.0023224263
		 0.33565575 0.16434424 0.49767759 0.16434424 0.49767759 0.0023224263 0.33333331 0.16666666
		 0.33333331 0 0.5 0 0.5 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  -0.65737706 -1.99071026 0.18581206 -0.66666681 -2 0.17652239
		 -0.66666681 -1.33333349 0.17652239 -0.65737706 -1.34262311 0.18581206 -0.0092897499 -1.99071026 0.18581206
		 -7.6293944e-08 -2 0.17652239 -0.0092897499 -1.34262311 0.18581206 -7.6293944e-08 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface14" -p "polySurface11";
	rename -uid "617620FF-4DFA-4161-1140-56987D49B483";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape16" -p "polySurface14";
	rename -uid "EA727717-414F-8A2A-367D-80B49A5E02BF";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.50232244 0.0023224263
		 0.50232244 0.16434424 0.66434425 0.16434424 0.66434425 0.0023224263 0.5 0.16666666
		 0.5 0 0.66666669 0 0.66666669 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  0.0092895972 -1.99071026 0.18581206 -7.6293944e-08 -2 0.17652239
		 -7.6293944e-08 -1.33333349 0.17652239 0.0092895972 -1.34262311 0.18581206 0.65737689 -1.99071026 0.18581206
		 0.66666657 -2 0.17652239 0.65737689 -1.34262311 0.18581206 0.66666657 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface12" -p "polySurface9";
	rename -uid "56101AC8-4C0E-7BCB-E9E4-9897C307F362";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape14" -p "polySurface12";
	rename -uid "7C44A2B2-40CA-3BE8-400B-BBBA51168E5F";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.66898912 0.0023224263
		 0.66898912 0.16434424 0.83101088 0.16434424 0.83101094 0.0023224263 0.66666669 0.16666666
		 0.66666669 0 0.83333331 0 0.83333331 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  0.67595625 -1.99071026 0.18581206 0.66666657 -2 0.17652239
		 0.66666657 -1.33333349 0.17652239 0.67595625 -1.34262311 0.18581206 1.32404339 -1.99071026 0.18581206
		 1.33333313 -2 0.17652239 1.32404339 -1.34262311 0.18581206 1.33333313 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface10" -p "polySurface7";
	rename -uid "C1A3D5E0-4E0F-7B85-42B4-5CBE407E8904";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape12" -p "polySurface10";
	rename -uid "7775CA3C-4D84-AFDD-A457-5EBC6A8CF841";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.83565569 0.0023224354
		 0.83565569 0.16434424 0.99767756 0.16434424 0.99767756 0.0023224261 0.83333331 0.16666666
		 0.83333331 0 1 0 1 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  1.34262288 -1.99071026 0.18581206 1.33333313 -2 0.17652239
		 1.33333313 -1.33333349 0.17652239 1.34262288 -1.34262311 0.18581206 1.99071026 -1.99071026 0.18581206
		 2 -2 0.17652239 1.99071026 -1.34262311 0.18581206 2 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface8" -p "polySurface6";
	rename -uid "FE534529-4D58-A833-8EA8-60B90B174A96";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape10" -p "polySurface8";
	rename -uid "CDBFB32B-4A13-C19B-5E44-2DAC2D3742C7";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:4]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0.16898908 0.33101088
		 0.33101088 0.33101088 0.33101088 0.16898908 0.16898908 0.16898908 0.33333331 0.33333331
		 0.16666666 0.33333331 0.16666666 0.16666666 0.33333331 0.16666666;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".pt[0:7]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239;
	setAttr -s 8 ".vt[0:7]"  -1.32404375 -0.67595643 0.18581206 -1.33333349 -0.66666675 0.17652239
		 -0.66666681 -0.66666675 0.17652239 -0.67595649 -0.67595643 0.18581206 -1.32404375 -1.32404375 0.18581206
		 -1.33333349 -1.33333349 0.17652239 -0.67595649 -1.32404375 0.18581206 -0.66666681 -1.33333349 0.17652239;
	setAttr -s 12 ".ed[0:11]"  0 1 0 1 5 0 5 4 0 4 0 0 0 3 0 3 2 0 2 1 0
		 3 6 0 6 7 0 7 2 0 5 7 0 6 4 0;
	setAttr -s 5 -ch 20 ".fc[0:4]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 5 6 3
		f 4 -1 4 5 6
		mu 0 4 5 0 1 4
		f 4 -6 7 8 9
		mu 0 4 4 1 2 7
		f 4 -3 10 -9 11
		mu 0 4 3 6 7 2
		f 4 -5 -4 -12 -8
		mu 0 4 1 0 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_B";
	rename -uid "4BC689FE-40FD-DD09-FCDC-839F4F4A3A53";
	setAttr ".rp" -type "double3" 0 -7.6293945312500002e-08 0 ;
	setAttr ".sp" -type "double3" 0 -7.6293945312500002e-08 0 ;
createNode transform -n "polySurface1" -p "Trim_B";
	rename -uid "9133B147-4D3A-91D5-C4D5-869DFFB48E7D";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode transform -n "polySurface3" -p "polySurface1";
	rename -uid "4F1474EC-408C-DAF1-B729-DE80B64E2154";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape5" -p "polySurface3";
	rename -uid "EE0464CB-47D1-2B0B-1156-79B8EAC43EFD";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:11]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 17 ".uvst[0].uvsp[0:16]" -type "float2" 0.66898906 0.66434419
		 0.66898906 0.33565575 0.99767756 0.33565575 0.99767756 0.66434425 0.66666663 0.33333331
		 1 0.33333331 1 0.66666663 0.66666663 0.66666663 0.83333331 0.66666663 0.83333331
		 0.66434419 0.83333331 0.33565575 0.83333331 0.33333331 0.66666663 0.49999997 0.66898906
		 0.49999997 0.83333331 0.49999997 0.99767756 0.5 1 0.49999997;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 17 ".pt[0:16]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 
		-0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239;
	setAttr -s 17 ".vt[0:16]"  0.66666657 -0.66666675 0.17652239 0.67595625 -0.657377 0.18581206
		 1.99071026 -0.657377 0.18581206 2 -0.66666675 0.17652239 1.99071026 0.65737689 0.18581206
		 2 0.66666657 0.17652239 0.67595625 0.65737689 0.18581206 0.66666657 0.66666657 0.17652239
		 1.33333325 0.66666657 0.17652239 1.33333325 0.65737689 0.18581206 1.33333325 -0.657377 0.18581206
		 1.33333325 -0.66666675 0.17652239 0.66666657 -7.6293944e-08 0.17652239 0.67595625 -7.6293944e-08 0.18581206
		 1.33333325 -7.6293944e-08 0.18581206 1.99071026 -7.6293944e-08 0.18581206 2 -7.6293944e-08 0.17652239;
	setAttr -s 28 ".ed[0:27]"  0 1 0 1 13 0 6 7 0 7 12 0 0 11 0 3 2 0 2 10 0
		 3 16 0 5 4 0 4 15 0 5 8 0 6 9 0 8 7 0 9 4 0 10 1 0 11 3 0 8 9 1 9 14 1 10 11 1 12 0 0
		 13 6 0 14 10 1 15 2 0 16 5 0 12 13 1 13 14 1 14 15 1 15 16 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 24 20 2 3
		mu 0 4 12 13 0 7
		f 4 18 15 5 6
		mu 0 4 10 11 5 2
		f 4 27 23 8 9
		mu 0 4 15 16 6 3
		f 4 -9 10 16 13
		mu 0 4 3 6 8 9
		f 4 17 26 -10 -14
		mu 0 4 9 14 15 3
		f 4 -17 12 -3 11
		mu 0 4 9 8 7 0
		f 4 25 -18 -12 -21
		mu 0 4 13 14 9 0
		f 4 -1 4 -19 14
		mu 0 4 1 4 11 10
		f 4 0 1 -25 19
		mu 0 4 4 1 13 12
		f 4 -15 -22 -26 -2
		mu 0 4 1 10 14 13
		f 4 -27 21 -7 -23
		mu 0 4 15 14 10 2
		f 4 -6 7 -28 22
		mu 0 4 2 5 16 15;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface4" -p "polySurface1";
	rename -uid "038CC52E-40AF-D2F1-0C49-929435375DE0";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape6" -p "polySurface4";
	rename -uid "B2F88BA8-4C6B-D330-9FBD-5D83EB7DF99C";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:11]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 17 ".uvst[0].uvsp[0:16]" -type "float2" 0.33565575 0.66434419
		 0.33565575 0.33565575 0.66434419 0.33565575 0.66434425 0.66434425 0.33333331 0.33333331
		 0.66666663 0.33333331 0.66666663 0.66666663 0.33333331 0.66666663 0.49999997 0.66666663
		 0.5 0.66434419 0.49999997 0.33565575 0.49999997 0.33333331 0.66666663 0.49999997
		 0.66434419 0.5 0.5 0.49999997 0.33565575 0.49999997 0.33333331 0.49999997;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 17 ".pt[0:16]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 
		-0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239;
	setAttr -s 17 ".vt[0:16]"  -0.66666675 -0.66666675 0.17652239 -0.657377 -0.657377 0.18581206
		 0.65737689 -0.657377 0.18581206 0.66666657 -0.66666675 0.17652239 0.65737689 0.65737689 0.18581206
		 0.66666657 0.66666657 0.17652239 -0.657377 0.65737689 0.18581206 -0.66666675 0.66666657 0.17652239
		 -7.6293944e-08 0.66666657 0.17652239 -7.6293944e-08 0.65737689 0.18581206 -7.6293944e-08 -0.657377 0.18581206
		 -7.6293944e-08 -0.66666675 0.17652239 0.66666657 -7.6293944e-08 0.17652239 0.65737689 -7.6293944e-08 0.18581206
		 -7.6293944e-08 -7.6293944e-08 0.18581206 -0.657377 -7.6293944e-08 0.18581206 -0.66666675 -7.6293944e-08 0.17652239;
	setAttr -s 28 ".ed[0:27]"  0 1 0 1 15 0 6 7 0 7 16 0 0 11 0 3 2 0 2 10 0
		 3 12 0 5 4 0 4 13 0 5 8 0 6 9 0 8 7 0 9 4 0 10 1 0 11 3 0 8 9 1 9 14 1 10 11 1 12 5 0
		 13 2 0 14 10 1 15 6 0 16 0 0 12 13 1 13 14 1 14 15 1 15 16 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 0 1 27 23
		mu 0 4 4 1 15 16
		f 4 18 15 5 6
		mu 0 4 10 11 5 2
		f 4 -6 7 24 20
		mu 0 4 2 5 12 13
		f 4 -9 10 16 13
		mu 0 4 3 6 8 9
		f 4 25 21 -7 -21
		mu 0 4 13 14 10 2
		f 4 -17 12 -3 11
		mu 0 4 9 8 7 0
		f 4 -15 -22 26 -2
		mu 0 4 1 10 14 15
		f 4 -1 4 -19 14
		mu 0 4 1 4 11 10
		f 4 -25 19 8 9
		mu 0 4 13 12 6 3
		f 4 17 -26 -10 -14
		mu 0 4 9 14 13 3
		f 4 -27 -18 -12 -23
		mu 0 4 15 14 9 0
		f 4 -28 22 2 3
		mu 0 4 16 15 0 7;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface2" -p "Trim_B";
	rename -uid "BEAB55C3-4977-5A5E-F1D5-68B41CEFAC43";
	setAttr ".rp" -type "double3" 0 0 -0.17652238845825197 ;
	setAttr ".sp" -type "double3" 0 0 -0.17652238845825197 ;
createNode mesh -n "polySurfaceShape4" -p "polySurface2";
	rename -uid "B1AEAC2F-40FF-23D8-4FE8-0B8FFC700CAC";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:11]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 17 ".uvst[0].uvsp[0:16]" -type "float2" 0.0023224351 0.66434419
		 0.0023224386 0.33565575 0.33101088 0.33565575 0.33101091 0.66434425 0 0.33333331
		 0.33333331 0.33333331 0.33333331 0.66666663 0 0.66666663 0 0.49999997 0.0023224368
		 0.49999997 0.33101088 0.5 0.33333331 0.49999997 0.16666666 0.66666663 0.16666667
		 0.66434419 0.16666666 0.5 0.16666666 0.33565575 0.16666666 0.33333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 17 ".pt[0:16]" -type "float3"  0 0 -0.17652239 0 0 -0.17652239 
		0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 
		0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 
		-0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239 0 0 -0.17652239;
	setAttr -s 17 ".vt[0:16]"  -2 -0.66666675 0.17652239 -1.99071026 -0.657377 0.18581206
		 -0.67595643 -0.657377 0.18581206 -0.66666675 -0.66666675 0.17652239 -0.67595643 0.65737689 0.18581206
		 -0.66666675 0.66666657 0.17652239 -1.99071026 0.65737689 0.18581206 -2 0.66666657 0.17652239
		 -2 -7.6293944e-08 0.17652239 -1.99071026 -7.6293944e-08 0.18581206 -0.67595643 -7.6293944e-08 0.18581206
		 -0.66666675 -7.6293944e-08 0.17652239 -1.33333349 0.66666657 0.17652239 -1.33333349 0.65737689 0.18581206
		 -1.33333349 -7.6293944e-08 0.18581206 -1.33333349 -0.657377 0.18581206 -1.33333349 -0.66666675 0.17652239;
	setAttr -s 28 ".ed[0:27]"  0 1 0 1 9 0 6 7 0 7 8 0 0 16 0 3 2 0 2 15 0
		 3 11 0 5 4 0 4 10 0 5 12 0 6 13 0 8 0 0 9 6 0 10 2 0 11 5 0 8 9 1 9 14 1 10 11 1
		 12 7 0 13 4 0 14 10 1 15 1 0 16 3 0 12 13 1 13 14 1 14 15 1 15 16 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 16 13 2 3
		mu 0 4 8 9 0 7
		f 4 27 23 5 6
		mu 0 4 15 16 5 2
		f 4 18 15 8 9
		mu 0 4 10 11 6 3
		f 4 -9 10 24 20
		mu 0 4 3 6 12 13
		f 4 25 21 -10 -21
		mu 0 4 13 14 10 3
		f 4 0 1 -17 12
		mu 0 4 4 1 9 8
		f 4 26 -7 -15 -22
		mu 0 4 14 15 2 10
		f 4 -6 7 -19 14
		mu 0 4 2 5 11 10
		f 4 -25 19 -3 11
		mu 0 4 13 12 7 0
		f 4 17 -26 -12 -14
		mu 0 4 9 14 13 0
		f 4 -23 -27 -18 -2
		mu 0 4 1 15 14 9
		f 4 -1 4 -28 22
		mu 0 4 1 4 16 15;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_C";
	rename -uid "C0B44CBD-4E69-F51D-68EA-2DA7F1E4E7FE";
	setAttr ".rp" -type "double3" 0 1.3333332824707032 0 ;
	setAttr ".sp" -type "double3" 0 1.3333332824707032 0 ;
createNode mesh -n "Trim_CShape" -p "Trim_C";
	rename -uid "E0FAACBA-4DEB-AECD-7106-5A8A39E1A583";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:7]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.83333331346511841 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 15 ".uvst[0].uvsp[0:14]" -type "float2" 0 0.66666663 1 0.66666663
		 1 1 0 1 0.5 1 0.5 0.66666663 0.25 1 0.25 0.66666663 0.75 0.66666663 0.75 1 0 0.83333331
		 0.25 0.83333331 0.5 0.83333331 0.75 0.83333331 1 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 15 ".pt[0:14]" -type "float3"  0 0 -0.18116722 0 0 -0.18116722 
		0 0 -0.18116722 0 0 -0.18116722 0 0 -0.18116722 0 0 -0.18116722 0 0 -0.18116722 0 
		0 -0.18116722 0 0 -0.18116722 0 0 -0.18116722 0 0 -0.18116722 0 0 -0.18116722 0 0 
		-0.18116722 0 0 -0.18116722 0 0 -0.18116722;
	setAttr -s 15 ".vt[0:14]"  -2 0.66666657 0.18581206 2 0.66666657 0.18581206
		 2 2 0.18581206 -2 2 0.18581206 0 2 0.18581206 0 0.66666657 0.18581206 -1 2 0.18581206
		 -1 0.66666657 0.18581206 1 0.66666657 0.18581206 1 2 0.18581206 -2 1.33333325 0.18581206
		 -1 1.33333325 0.18581206 0 1.33333325 0.18581206 1 1.33333325 0.18581206 2 1.33333325 0.18581206;
	setAttr -s 22 ".ed[0:21]"  0 7 0 1 14 0 3 6 0 0 10 0 4 9 0 5 8 0 4 12 1
		 6 4 0 7 5 0 6 11 1 8 1 0 9 2 0 8 13 1 10 3 0 11 7 1 12 5 1 13 9 1 14 2 0 10 11 1
		 11 12 1 12 13 1 13 14 1;
	setAttr -s 8 -ch 32 ".fc[0:7]" -type "polyFaces" 
		f 4 6 20 16 -5
		mu 0 4 4 12 13 9
		f 4 9 19 -7 -8
		mu 0 4 6 11 12 4
		f 4 18 -10 -3 -14
		mu 0 4 10 11 6 3
		f 4 -17 21 17 -12
		mu 0 4 9 13 14 2
		f 4 0 -15 -19 -4
		mu 0 4 0 7 11 10
		f 4 -20 14 8 -16
		mu 0 4 12 11 7 5
		f 4 -21 15 5 12
		mu 0 4 13 12 5 8
		f 4 -22 -13 10 1
		mu 0 4 14 13 8 1;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "E4512187-4756-B51F-C544-4883F85B1CF1";
	setAttr -s 2 ".lnk";
	setAttr -s 2 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "49DF35DD-46B6-1E1D-881C-B9BED66BB9C2";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "98B0CBAB-48B5-E27A-BECE-91A7B5B1E6BA";
createNode displayLayerManager -n "layerManager";
	rename -uid "1F808AA2-4474-3EDF-CD58-AAA538C54EAC";
createNode displayLayer -n "defaultLayer";
	rename -uid "CBC925B5-40A1-06AC-69CA-9D8141D3D5D5";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "76E7DF93-4ED3-E919-9C2B-DBB9694C18B1";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "5800634A-4F07-86A6-25C9-F98E41D6FA55";
	setAttr ".g" yes;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "B56FDE90-4629-26CB-4DDE-F2849EF9125E";
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
		+ "            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 0\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n"
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 0\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1118\n            -height 718\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
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
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 0\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1118\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 0\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1118\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "3099ACF1-420F-7336-0176-C28E274A9968";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
createNode groupId -n "groupId39";
	rename -uid "A28433AE-40C7-2141-2371-5F8749BD7DE3";
	setAttr ".ihi" 0;
createNode groupId -n "groupId40";
	rename -uid "D9CAF66D-4F7E-0B82-6F5A-439508B4C690";
	setAttr ".ihi" 0;
createNode groupId -n "groupId41";
	rename -uid "E19AF87E-4347-0560-BBAA-52A44C05C2AA";
	setAttr ".ihi" 0;
createNode groupId -n "groupId42";
	rename -uid "7835A5FE-42E2-9DC6-5E95-73BD663C9381";
	setAttr ".ihi" 0;
createNode groupId -n "groupId43";
	rename -uid "C73EA439-4B05-961B-B56C-78955A6D87F5";
	setAttr ".ihi" 0;
createNode groupId -n "groupId44";
	rename -uid "EC575CC7-4C46-9880-F83B-0B84D17CB52D";
	setAttr ".ihi" 0;
createNode groupId -n "groupId45";
	rename -uid "C62E05D6-4D37-FB94-A83D-AC8BADF3A271";
	setAttr ".ihi" 0;
createNode groupId -n "groupId46";
	rename -uid "256DE286-4AFE-3511-020D-74AD256B808D";
	setAttr ".ihi" 0;
createNode groupId -n "groupId47";
	rename -uid "37A84792-41E5-67FB-F374-7E83A97DB7E0";
	setAttr ".ihi" 0;
createNode groupId -n "groupId48";
	rename -uid "B8C58801-4232-1F3B-93B3-60B8C3D03DB1";
	setAttr ".ihi" 0;
createNode groupId -n "groupId49";
	rename -uid "F404D231-409F-9153-B8F3-7B936ECBFAE1";
	setAttr ".ihi" 0;
createNode groupId -n "groupId50";
	rename -uid "95110A37-430E-4F06-C026-D98A19822DE4";
	setAttr ".ihi" 0;
createNode groupId -n "groupId51";
	rename -uid "BA8AF222-4CAA-79BA-A54F-639C0C8DBC85";
	setAttr ".ihi" 0;
createNode groupId -n "groupId52";
	rename -uid "FE67F47C-4E6F-CE4B-9420-DAA6BE405912";
	setAttr ".ihi" 0;
createNode groupId -n "groupId53";
	rename -uid "B567D915-4DB5-2C73-FD78-4782D5E52EDA";
	setAttr ".ihi" 0;
createNode groupId -n "groupId54";
	rename -uid "A1DB9908-4287-45C8-DEF8-0EBDF6340713";
	setAttr ".ihi" 0;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "ECD53729-458F-1599-3C38-CF81F0890298";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "I:/Cavalry/Maya Project Files//Trimsheets/ConcreteFloor";
	setAttr ".exf" -type "string" "Floor_Sheet_high";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "65C44CEE-4662-FE49-66DD-7189C1023143";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "CED8E06B-497A-7465-D5A4-4D8839D5E4C1";
	setAttr ".pn" -type "string" "TE Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 3;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
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
	setAttr -s 2 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 5 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderingList1;
select -ne :initialShadingGroup;
	setAttr -s 17 ".dsm";
	setAttr ".ro" yes;
	setAttr -s 16 ".gn";
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
connectAttr "groupId39.id" "polySurfaceShape7.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape7.iog.og[0].gco";
connectAttr "groupId40.id" "polySurfaceShape19.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape19.iog.og[0].gco";
connectAttr "groupId41.id" "polySurfaceShape21.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape21.iog.og[0].gco";
connectAttr "groupId42.id" "polySurfaceShape23.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape23.iog.og[0].gco";
connectAttr "groupId43.id" "polySurfaceShape25.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape25.iog.og[0].gco";
connectAttr "groupId44.id" "polySurfaceShape27.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape27.iog.og[0].gco";
connectAttr "groupId45.id" "polySurfaceShape28.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape28.iog.og[0].gco";
connectAttr "groupId46.id" "polySurfaceShape18.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape18.iog.og[0].gco";
connectAttr "groupId47.id" "polySurfaceShape16.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape16.iog.og[0].gco";
connectAttr "groupId48.id" "polySurfaceShape14.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape14.iog.og[0].gco";
connectAttr "groupId49.id" "polySurfaceShape12.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape12.iog.og[0].gco";
connectAttr "groupId50.id" "polySurfaceShape10.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape10.iog.og[0].gco";
connectAttr "groupId51.id" "polySurfaceShape5.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape5.iog.og[0].gco";
connectAttr "groupId52.id" "polySurfaceShape6.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape6.iog.og[0].gco";
connectAttr "groupId53.id" "polySurfaceShape4.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape4.iog.og[0].gco";
connectAttr "groupId54.id" "Trim_CShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Trim_CShape.iog.og[0].gco";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "BASEShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape7.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape19.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape21.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape23.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape25.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape27.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape28.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape18.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape16.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape14.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape12.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape10.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape5.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape6.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape4.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "Trim_CShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId39.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId40.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId41.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId42.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId43.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId44.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId45.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId46.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId47.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId48.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId49.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId50.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId51.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId52.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId53.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId54.msg" ":initialShadingGroup.gn" -na;
// End of ConcreteFloor.ma
