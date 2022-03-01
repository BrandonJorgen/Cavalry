//Maya ASCII 2022 scene
//Name: SecurityBuilding_01.ma
//Last modified: Tue, Mar 01, 2022 09:55:19 AM
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
fileInfo "osv" "Windows 10 Enterprise v2009 (Build: 19042)";
fileInfo "UUID" "CD9E7CBD-4517-3EE0-F0D0-E28CDF978424";
fileInfo "license" "education";
createNode transform -s -n "persp";
	rename -uid "7E5B5A27-48AE-EA5A-8388-EE9A73DD6438";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 5.167557592837956 17.261579357815219 5.6095133404377355 ;
	setAttr ".r" -type "double3" -22.538352247893055 28020.999999987958 -6.1753777779075821e-15 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "1C148592-4001-5C4D-7E05-419120AF7B5C";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 7.6712095396958437;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".tp" -type "double3" -919.8911746774811 1577.4267101281525 495.12089871806154 ;
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "FDD7D001-4AD0-7DC9-D133-8FB57039406B";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -9.7623940133864888 41.488030637490809 1.9600169865926274 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "A25F30D3-4797-D948-FE7F-D29C35D1C5F5";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 32.200897537458708;
	setAttr ".ow" 46.659962666550904;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".tp" -type "double3" -976.2394013386488 928.7133100032097 196.00169865926279 ;
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "804FE35C-4276-35B1-B076-2C9E1DBAEDB1";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -13.368635189697208 2.4512862213009892 46.182336808027934 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "30426A69-4EED-67CD-284F-0D877A55FA2F";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 43.532547074141213;
	setAttr ".ow" 18.49124090432538;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".tp" -type "double3" -2456.6045347380978 657.92703247070312 264.97897338867188 ;
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "side";
	rename -uid "81C47920-4230-6C76-5D91-C19C6EB43340";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 29.749053555729606 1.169286152741007 -3.7383431409599801 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "4855F3EA-4A6B-A7D5-7162-789F0B94B753";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 13.349053922298172;
	setAttr ".ow" 35.360595750528709;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".tp" -type "double3" 1639.9999633431435 -60.004393072378349 -1169.9999640725214 ;
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -n "SecurityBuilding_old_grp";
	rename -uid "BD64E60C-45E6-83A0-0672-EDBBF7B02A2A";
createNode transform -n "ReferenceObjects_grp" -p "SecurityBuilding_old_grp";
	rename -uid "AED1893F-4308-844D-8A74-D5A671E8F615";
	setAttr ".rp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
	setAttr ".sp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
createNode transform -n "Staircase_Platform" -p "ReferenceObjects_grp";
	rename -uid "3D42FBC4-47DE-4FCB-520F-BC81B5155E61";
	setAttr ".rp" -type "double3" -9.4163248615646129 4.5742672729492186 5.5512139892578123 ;
	setAttr ".sp" -type "double3" -9.4163248615646129 4.5742672729492186 5.5512139892578123 ;
createNode mesh -n "Staircase_PlatformShape" -p "Staircase_Platform";
	rename -uid "60E96D52-4234-71D4-0B98-DB86D5E61B3B";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape1" -p "Staircase_Platform";
	rename -uid "2676D326-43F2-7331-1542-AEA1C8C148CE";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 24 ".uvst[0].uvsp[0:23]" -type "float2" 0.6353662 0.47442624
		 0.4578959 0.47444037 0.45786771 0.11896301 0.63533795 0.11894891 0.45789737 0.29635045
		 0.48202896 0.11167015 0.45789468 0.65253037 0.45789605 0.47444046 0.81461465 0.4744432
		 0.81461328 0.65253311 0.10117736 0.47443771 0.10117593 0.65252763 0.43376297 0.83721066
		 0.10117865 0.29634771 0.45792416 0.82991779 0.28045395 0.82993191 0.28042573 0.47445446
		 0.28039747 0.11897709 0.43371147 0.47444379 0.43365997 0.11167702 0.48208046 0.47443694
		 0.81461602 0.29635322 0.48213196 0.83720386 0.63539445 0.82990372;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  -12.39890671 4.57426739 8.54668045 -6.39891052 4.57426739 8.54668045
		 -12.39890671 4.97426796 8.54668045 -6.39891052 4.97426796 8.54668045 -12.39890671 4.97426796 5.55121422
		 -6.39891052 4.97426796 5.55121422 -12.39890671 4.57426739 5.55121422 -6.39891052 4.57426739 5.55121422
		 -9.39890766 4.57426739 8.54668045 -9.39890766 4.57426739 5.55121422 -9.39890766 4.97426796 5.55121422
		 -9.39890766 4.97426796 8.54668045 -12.39890671 4.97426796 7.048947811 -9.39890766 4.97426796 7.048947811
		 -6.39891052 4.97426796 7.048947811 -12.39890671 4.57426739 7.048947811 -9.39890766 4.57426739 7.048947811
		 -6.39891052 4.57426739 7.048947811;
	setAttr -s 27 ".ed[0:26]"  0 8 0 2 11 0 4 10 0 6 9 0 2 12 0 3 14 0 4 6 0
		 5 7 0 6 15 0 7 17 0 8 1 0 9 7 0 10 5 0 11 3 0 8 16 1 9 10 1 10 13 1 12 4 0 13 11 1
		 14 5 0 12 13 1 13 14 1 15 0 0 16 9 1 17 1 0 15 16 1 16 17 1;
	setAttr -s 10 -ch 40 ".fc[0:9]" -type "polyFaces" 
		f 4 16 21 19 -13
		mu 0 4 0 1 2 3
		f 4 15 12 7 -12
		mu 0 4 20 18 19 5
		f 4 14 26 24 -11
		mu 0 4 6 7 8 9
		f 4 25 -15 -1 -23
		mu 0 4 10 7 6 11
		f 4 2 -16 -4 -7
		mu 0 4 12 18 20 22
		f 4 20 -17 -3 -18
		mu 0 4 14 1 0 23
		f 4 1 -19 -21 -5
		mu 0 4 15 16 1 14
		f 4 -22 18 13 5
		mu 0 4 2 1 16 17
		f 4 3 -24 -26 -9
		mu 0 4 13 4 7 10
		f 4 -27 23 11 9
		mu 0 4 8 7 4 21;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Staircase_Platform1" -p "ReferenceObjects_grp";
	rename -uid "DE9D263D-4A75-FFB0-2D30-6399E7ECD5A3";
	setAttr ".rp" -type "double3" -9.4163248615646129 9.9742669677734384 5.5512139892578123 ;
	setAttr ".sp" -type "double3" -9.4163248615646129 9.9742669677734384 5.5512139892578123 ;
createNode mesh -n "Staircase_Platform1Shape" -p "Staircase_Platform1";
	rename -uid "1BA0AB2F-496E-4593-35D4-468BEFF52573";
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
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape2" -p "Staircase_Platform1";
	rename -uid "E6EC50E3-4F85-C1F5-FA82-3DBD7744B54C";
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
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 28 ".uvst[0].uvsp[0:27]" -type "float2" 0.60306436 0.47443271
		 0.45789593 0.47444037 0.07161355 0.50019515 0.60304904 0.18365675 0.45787859 0.32754773
		 0.7521084 0.32751292 0.75212574 0.47440565 0.45789599 0.47444046 0.1636488 0.32758248
		 0.16366613 0.4744752 1.037028313 0.50018877 0.45791125 0.76521647 0.31274283 0.7652241
		 0.31272751 0.47444803 0.31271219 0.18367201 -0.12123632 0.44869208 0.45791334 0.62133312
		 0.16368353 0.62136793 0.071613178 0.44869083 0.75214314 0.62129843 0.45788062 0.18366438
		 0.26446319 0.50019389 0.65074575 0.50019133 0.65074545 0.44868696 0.26446283 0.44868952
		 -0.12123595 0.50019646 1.037027955 0.44868439 0.60307974 0.76520884;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  -12.39890671 9.97426796 8.54668045 -6.39891052 9.97426796 8.54668045
		 -12.39890671 10.37426758 8.54668045 -6.39891052 10.37426758 8.54668045 -12.39890671 10.37426758 5.55121422
		 -6.39891052 10.37426758 5.55121422 -12.39890671 9.97426796 5.55121422 -6.39891052 9.97426796 5.55121422
		 -9.39890766 9.97426796 8.54668045 -9.39890766 9.97426796 5.55121422 -9.39890766 10.37426758 5.55121422
		 -9.39890766 10.37426758 8.54668045 -12.39890671 10.37426758 7.048947811 -9.39890766 10.37426758 7.048947811
		 -6.39891052 10.37426758 7.048947811 -6.39891052 9.97426796 7.048947811 -9.39890766 9.97426796 7.048947811
		 -12.39890671 9.97426796 7.048947811;
	setAttr -s 29 ".ed[0:28]"  0 8 0 2 11 0 4 10 0 6 9 0 1 3 0 2 12 0 3 14 0
		 4 6 0 5 7 0 6 17 0 7 15 0 8 1 0 9 7 0 10 5 0 11 3 0 8 16 1 9 10 1 10 13 1 12 4 0
		 13 11 1 14 5 0 15 1 0 16 9 1 17 0 0 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 17 25 20 -14
		mu 0 4 0 1 20 3
		f 4 16 13 8 -13
		mu 0 4 23 22 21 24
		f 4 27 22 12 10
		mu 0 4 6 7 4 5
		f 4 26 -11 -9 -21
		mu 0 4 2 18 24 21
		f 4 3 -23 28 -10
		mu 0 4 8 4 7 9
		f 4 2 -17 -4 -8
		mu 0 4 10 22 23 26
		f 4 24 -18 -3 -19
		mu 0 4 11 1 0 27
		f 4 1 -20 -25 -6
		mu 0 4 12 13 1 11
		f 4 -26 19 14 6
		mu 0 4 20 1 13 14
		f 4 -22 -27 -7 -5
		mu 0 4 15 18 2 25
		f 4 15 -28 21 -12
		mu 0 4 16 7 6 19
		f 4 -29 -16 -1 -24
		mu 0 4 9 7 16 17;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SB_TopFloor_grp" -p "SecurityBuilding_old_grp";
	rename -uid "F09B806C-4DF4-F4EE-71A4-1987045BCDDE";
	setAttr ".rp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
	setAttr ".sp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
createNode transform -n "Topfloor_Platform" -p "SB_TopFloor_grp";
	rename -uid "E0CEB667-49A2-24D4-BD94-DEB957182203";
	setAttr ".rp" -type "double3" 12.378876953125003 13.77426513671875 -8.5487915039062514 ;
	setAttr ".sp" -type "double3" 12.378876953125003 13.77426513671875 -8.5487915039062514 ;
createNode mesh -n "Topfloor_PlatformShape" -p "Topfloor_Platform";
	rename -uid "DCD26217-453B-58F6-D94F-D197871E0500";
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
	setAttr ".pv" -type "double2" 0.50098386001919015 0.47525074624947439 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape3" -p "Topfloor_Platform";
	rename -uid "DAA2F1DF-499D-D0CF-9B18-70AAECA4F4AB";
	setAttr -k off ".v";
	setAttr ".io" yes;
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
	setAttr ".pv" -type "double2" 0.50098386001919015 0.47525074624947439 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 39 ".uvst[0].uvsp[0:38]" -type "float2" 0.27692842 0.28962976
		 0.27691507 0.46502221 0.1433177 0.46501201 0.14333108 0.28961957 0.27690145 0.64323616
		 0.43770856 0.61669546 0.43768847 0.75895345 0.14330411 0.64322603 0.77247572 0.46505994
		 0.6777072 0.46505272 0.67772061 0.28966027 0.77248907 0.28966749 0.48295712 0.47257981
		 0.48300064 0.24067417 0.47804332 0.61670125 0.47802317 0.75895911 0.43279135 0.70820677
		 0.4829129 0.70821607 0.67769361 0.64326674 0.54412323 0.28965008 0.54410988 0.46504259
		 0.41051245 0.4650324 0.4105258 0.28963989 0.54409629 0.64325655 0.41049886 0.64324641
		 0.43774873 0.33217964 0.41049764 0.6592409 0.47806334 0.47444329 0.47808343 0.33218533
		 0.67769241 0.65926129 0.47810352 0.1899274 0.54409504 0.65925109 0.43772864 0.47443756
		 0.27690026 0.65923077 0.14330289 0.65922052 0.43283558 0.47257045 0.43287909 0.24066474
		 0.77246213 0.64327401 0.43776888 0.18992174;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 31 ".vt[0:30]"  1.10108888 13.77426529 -0.74871033 12.37887669 13.77426529 -0.74871033
		 1.10108888 13.77426529 -8.54879189 12.37887669 13.77426529 -8.54879189 1.10108888 13.77426529 -1.086259127
		 12.37887669 13.77426529 -1.086259127 -0.89891112 13.77426529 -1.086259127 -0.89891112 13.77426529 -8.54879189
		 -0.89891112 12.9742651 -1.086259127 -0.89891112 12.9742651 -8.54879189 1.10108888 12.97486115 -0.74871033
		 12.37887669 12.97486115 -0.74871033 -0.89891112 12.9742651 -4.84729862 -0.89891112 13.77426529 -4.84729862
		 1.10108888 13.77426529 -4.84729862 12.37887669 13.77426529 -4.84729862 6.73998308 13.77426529 -8.54879189
		 6.73998308 13.77426529 -4.84729862 6.73998308 13.77426529 -1.086259127 6.73998308 13.77426529 -0.74871033
		 6.73998308 12.97486115 -0.74871033 9.55943012 13.77426529 -8.54879189 9.55943012 13.77426529 -4.84729862
		 9.55943012 13.77426529 -1.086259127 9.55943012 13.77426529 -0.74871033 9.55943012 12.97486115 -0.74871033
		 3.9205358 13.77426529 -8.54879189 3.9205358 13.77426529 -4.84729862 3.9205358 13.77426529 -1.086259127
		 3.9205358 13.77426529 -0.74871033 3.9205358 12.97486115 -0.74871033;
	setAttr -s 50 ".ed[0:49]"  0 29 0 0 4 0 1 5 0 2 26 0 4 14 0 5 15 0 4 28 1
		 4 6 0 2 7 0 6 13 0 6 8 0 7 9 0 8 12 0 0 10 0 1 11 0 10 30 0 12 9 0 13 7 0 14 2 0
		 15 3 0 12 13 1 13 14 1 14 27 1 16 21 0 17 22 1 18 23 1 19 24 0 20 25 0 16 17 1 17 18 1
		 18 19 1 19 20 1 21 3 0 22 15 1 23 5 1 24 1 0 25 11 0 21 22 1 22 23 1 23 24 1 24 25 1
		 26 16 0 27 17 1 28 18 1 29 19 0 30 20 0 26 27 1 27 28 1 28 29 1 29 30 1;
	setAttr -s 20 -ch 80 ".fc[0:19]" -type "polyFaces" 
		f 4 37 33 19 -33
		mu 0 4 0 1 2 3
		f 4 39 35 2 -35
		mu 0 4 4 33 34 7
		f 4 21 18 8 -18
		mu 0 4 8 9 10 11
		f 4 20 17 11 -17
		mu 0 4 12 35 36 13
		f 4 -36 40 36 -15
		mu 0 4 6 5 14 15
		f 4 9 -21 -13 -11
		mu 0 4 16 35 12 17
		f 4 4 -22 -10 -8
		mu 0 4 18 9 8 37
		f 4 38 34 5 -34
		mu 0 4 1 4 7 2
		f 4 46 42 -29 -42
		mu 0 4 19 20 21 22
		f 4 47 43 -30 -43
		mu 0 4 20 23 24 21
		f 4 48 44 -31 -44
		mu 0 4 23 31 26 24
		f 4 -32 -45 49 45
		mu 0 4 27 32 25 28
		f 4 28 24 -38 -24
		mu 0 4 22 21 1 0
		f 4 29 25 -39 -25
		mu 0 4 21 24 4 1
		f 4 30 26 -40 -26
		mu 0 4 24 26 33 4
		f 4 -41 -27 31 27
		mu 0 4 14 5 32 27
		f 4 22 -47 -4 -19
		mu 0 4 9 20 19 10
		f 4 6 -48 -23 -5
		mu 0 4 18 23 20 9
		f 4 0 -49 -7 -2
		mu 0 4 29 31 23 18
		f 4 -50 -1 13 15
		mu 0 4 28 25 38 30;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Topfloor_divider" -p "SB_TopFloor_grp";
	rename -uid "D7E87335-4CB2-EE88-ACA4-3D8520EFC216";
	setAttr ".rp" -type "double3" 10.043101887620779 12.974539794921876 5.0457815551757816 ;
	setAttr ".sp" -type "double3" 10.043101887620779 12.974539794921876 5.0457815551757816 ;
createNode mesh -n "Topfloor_dividerShape" -p "Topfloor_divider";
	rename -uid "90F0B49B-4634-DFB7-B29E-EB8F550E4536";
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
	setAttr ".pv" -type "double2" 0.25 0.125 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape4" -p "Topfloor_divider";
	rename -uid "4B6B4CFB-45CB-C755-4B41-30AC7CB17D50";
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
	setAttr ".pv" -type "double2" 0.25 0.125 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 80 ".uvst[0].uvsp[0:79]" -type "float2" 0.45789558 0.60791534
		 0.45789605 0.47444049 0.28712893 0.47441128 0.28376326 0.60791475 0.28376421 0.34096485
		 0.45786577 0.64529717 0.45789587 0.47444037 0.4578965 0.34096545 0.45792598 0.30358371
		 0.6320287 0.34096605 0.6320278 0.607916 0.62866306 0.47446975 0.62862194 0.71508861
		 0.4578549 0.71505934 0.28708774 0.71503019 0.11636178 0.47438213 0.1163206 0.71500099
		 0.11640293 0.23376304 0.1096319 0.34096423 0.45783564 0.816154 0.45795608 0.13272692
		 0.69870144 0.13276932 0.80616009 0.60791659 0.79943019 0.47449896 0.79938906 0.71511781
		 0.2170905 0.81611156 0.2171206 0.64525473 0.21715072 0.47439793 0.21718082 0.30354127
		 0.21721093 0.13268448 0.80616021 0.57794803 0.80616015 0.59249008 0.63202786 0.59248948
		 0.63202786 0.57794744 0.45789564 0.59248883 0.4578957 0.57794684 0.80616045 0.50210774
		 0.80616039 0.51664978 0.6320281 0.51664919 0.63202816 0.50210714 0.4578959 0.51664853
		 0.45789593 0.50210655 0.10963175 0.37093276 0.10963185 0.35639086 0.28376415 0.35639146
		 0.28376406 0.37093338 0.45789644 0.35639206 0.45789641 0.37093398 0.10963152 0.44677299
		 0.10963156 0.43223107 0.28376386 0.43223166 0.28376383 0.44677359 0.45789617 0.43223226
		 0.45789614 0.44677418 0.63202864 0.35639265 0.63202858 0.37093458 0.80616099 0.35639328
		 0.80616093 0.37093517 0.6320284 0.43223289 0.63202834 0.44677478 0.80616069 0.43223348
		 0.80616063 0.44677541 0.28376362 0.51664793 0.28376362 0.50210595 0.10963129 0.51664734
		 0.10963131 0.50210536 0.28376332 0.59248823 0.28376335 0.57794625 0.10963102 0.59248763
		 0.10963109 0.57794565 0.62870425 0.23385069 0.45793721 0.23382145 0.69867134 0.30362615
		 0.80616105 0.34096667 0.69861114 0.64533961 0.69864124 0.4744828 0.28717008 0.23379228
		 0.10963093 0.60791415 0.69858098 0.81619632 0.79947138 0.23387989;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 70 ".vt[0:69]"  8.45876122 12.97453976 5.045782089 12.40108967 12.97453976 5.045782089
		 8.45876122 18.57027626 5.045782089 12.40108967 18.57027626 5.045782089 8.45876122 18.57027626 4.84912252
		 12.40108967 18.57027626 4.84912252 8.45876122 12.97453976 4.84912252 12.40108967 12.97453976 4.84912252
		 12.40108967 15.77240753 4.84912252 8.45876122 15.77240753 4.84912252 8.45876122 15.77240753 5.045782089
		 12.40108967 15.77240753 5.045782089 10.42992687 12.97453976 5.045782089 10.42992687 15.77240753 5.045782089
		 10.42992687 18.57027626 5.045782089 12.40108967 17.17134094 5.045782089 10.42992687 17.17134094 5.045782089
		 8.45876122 17.17134094 5.045782089 8.45876122 17.17134094 4.84912252 12.40108967 17.17134094 4.84912252
		 12.40108967 14.37347412 4.84912252 8.45876122 14.37347412 4.84912252 8.45876122 14.37347412 5.045782089
		 10.42992687 14.37347412 5.045782089 12.40108967 14.37347412 5.045782089 10.42992687 18.57027626 4.84912252
		 10.42992687 17.17134094 4.84912252 10.42992687 15.77240753 4.84912252 10.42992687 14.37347412 4.84912252
		 10.42992687 12.97453976 4.84912252 8.45876122 12.97453976 5.16971493 8.37615299 12.97453976 5.2523241
		 8.37615299 14.37347412 5.2523241 8.45876122 14.37347412 5.16971493 7.88369799 12.97453976 5.2523241
		 7.80108929 12.97453976 5.16971493 7.80108929 14.37347412 5.16971493 7.88369799 14.37347412 5.2523241
		 8.45876122 18.57027626 4.72518873 8.37615299 18.57027626 4.64258051 8.37615299 17.17134094 4.64258051
		 8.45876122 17.17134094 4.72518873 7.88369799 18.57027626 4.64258051 7.80108929 18.57027626 4.72518873
		 7.80108929 17.17134094 4.72518873 7.88369799 17.17134094 4.64258051 8.45876122 15.77240753 4.72518873
		 8.37615299 15.77240753 4.64258051 8.45876122 14.37347412 4.72518873 8.37615299 14.37347412 4.64258051
		 7.88369799 15.77240753 4.64258051 7.80108929 15.77240753 4.72518873 7.88369799 14.37347412 4.64258051
		 7.80108929 14.37347412 4.72518873 7.88369799 15.77240753 5.2523241 7.80108929 15.77240753 5.16971493
		 7.88369799 17.17134094 5.2523241 7.80108929 17.17134094 5.16971493 8.45876122 15.77240753 5.16971493
		 8.37615299 15.77240753 5.2523241 8.45876122 17.17134094 5.16971493 8.37615299 17.17134094 5.2523241
		 8.37615299 18.57027626 5.2523241 8.45876122 18.57027626 5.16971493 7.80108929 18.57027626 5.16971493
		 7.88369799 18.57027626 5.2523241 8.37615299 12.97453976 4.64258051 8.45876122 12.97453976 4.72518873
		 7.80108929 12.97453976 4.72518873 7.88369799 12.97453976 4.64258051;
	setAttr -s 121 ".ed[0:120]"  0 12 0 2 14 0 4 25 0 6 29 0 0 22 0 1 24 0
		 4 18 0 5 19 0 0 30 0 2 63 0 4 38 0 6 67 0 8 20 0 9 21 0 10 17 0 11 15 0 8 27 1 10 13 1
		 12 1 0 13 11 1 14 3 0 12 23 1 13 16 1 15 3 0 16 14 1 17 2 0 18 9 0 19 8 0 15 16 1
		 16 17 1 18 26 1 20 7 0 21 6 0 22 10 0 23 13 1 24 11 0 20 28 1 22 23 1 23 24 1 25 5 0
		 26 19 1 27 9 1 28 21 1 29 7 0 25 26 1 26 27 1 27 28 1 28 29 1 31 34 0 39 42 0 62 65 0
		 64 43 0 66 69 0 68 35 0 31 30 0 30 33 0 33 32 1 32 31 0 33 58 0 58 59 1 59 32 0 35 34 0
		 34 37 0 37 36 1 36 35 0 37 54 0 54 55 1 55 36 0 39 38 0 38 41 0 41 40 1 40 39 0 41 46 0
		 46 47 1 47 40 0 43 42 0 42 45 0 45 44 1 44 43 0 45 50 0 50 51 1 51 44 0 46 48 0 48 49 1
		 49 47 0 48 67 0 67 66 0 66 49 0 50 52 0 52 53 1 53 51 0 52 69 0 69 68 0 68 53 0 54 56 0
		 56 57 1 57 55 0 56 65 0 65 64 0 64 57 0 58 60 0 60 61 1 61 59 0 60 63 0 63 62 0 62 61 0
		 54 59 1 61 56 1 45 40 1 47 50 1 58 10 1 17 60 1 41 18 1 9 46 1 57 44 1 51 55 1 21 48 1
		 49 52 1 53 36 1 37 32 1 33 22 1;
	setAttr -s 52 -ch 208 ".fc[0:51]" -type "polyFaces" 
		f 4 17 22 29 -15
		mu 0 4 71 1 2 76
		f 4 30 45 41 -27
		mu 0 4 74 5 6 75
		f 4 -42 46 42 -14
		mu 0 4 75 6 8 72
		f 4 37 34 -18 -34
		mu 0 4 70 11 1 71
		f 4 -35 38 35 -20
		mu 0 4 1 11 12 13
		f 4 28 -23 19 15
		mu 0 4 14 2 1 13
		f 4 -25 -29 23 -21
		mu 0 4 15 2 14 16
		f 4 -30 24 -2 -26
		mu 0 4 76 2 15 17
		f 4 2 44 -31 -7
		mu 0 4 78 19 5 74
		f 4 -43 47 -4 -33
		mu 0 4 72 8 20 21
		f 4 0 21 -38 -5
		mu 0 4 79 23 11 70
		f 4 -39 -22 18 5
		mu 0 4 12 11 23 24
		f 4 -45 39 7 -41
		mu 0 4 5 19 25 26
		f 4 -46 40 27 16
		mu 0 4 6 5 26 27
		f 4 -47 -17 12 36
		mu 0 4 8 6 27 28
		f 4 -48 -37 31 -44
		mu 0 4 20 8 28 29
		f 4 54 55 56 57
		mu 0 4 30 31 32 33
		f 4 -57 58 59 60
		mu 0 4 33 32 34 35
		f 4 61 62 63 64
		mu 0 4 36 37 38 39
		f 4 -64 65 66 67
		mu 0 4 39 38 40 41
		f 4 68 69 70 71
		mu 0 4 42 43 44 45
		f 4 -71 72 73 74
		mu 0 4 45 44 46 47
		f 4 75 76 77 78
		mu 0 4 48 49 50 51
		f 4 -78 79 80 81
		mu 0 4 51 50 52 53
		f 4 -74 82 83 84
		mu 0 4 47 46 54 55
		f 4 -84 85 86 87
		mu 0 4 55 54 56 57
		f 4 -81 88 89 90
		mu 0 4 53 52 58 59
		f 4 -90 91 92 93
		mu 0 4 59 58 60 61
		f 4 -67 94 95 96
		mu 0 4 41 40 62 63
		f 4 -96 97 98 99
		mu 0 4 63 62 64 65
		f 4 -60 100 101 102
		mu 0 4 35 34 66 67
		f 4 -102 103 104 105
		mu 0 4 67 66 68 69
		f 4 106 -103 107 -95
		mu 0 4 40 35 67 62
		f 4 108 -75 109 -80
		mu 0 4 50 45 47 52
		f 4 110 14 111 -101
		mu 0 4 34 0 3 66
		f 4 112 26 113 -73
		mu 0 4 44 4 7 46
		f 4 114 -82 115 -97
		mu 0 4 63 51 53 41
		f 4 -114 13 116 -83
		mu 0 4 46 7 9 54
		f 4 -110 -85 117 -89
		mu 0 4 52 47 55 58
		f 4 -116 -91 118 -68
		mu 0 4 41 53 59 39
		f 4 119 -61 -107 -66
		mu 0 4 38 33 35 40
		f 4 120 33 -111 -59
		mu 0 4 32 10 0 34
		f 4 -112 25 9 -104
		mu 0 4 66 3 77 68
		f 4 -108 -106 50 -98
		mu 0 4 62 67 69 64
		f 4 -100 51 -79 -115
		mu 0 4 63 65 48 51
		f 4 -72 -109 -77 -50
		mu 0 4 42 45 50 49
		f 4 6 -113 -70 -11
		mu 0 4 18 4 44 43
		f 4 -117 32 11 -86
		mu 0 4 54 9 73 56
		f 4 -118 -88 52 -92
		mu 0 4 58 55 57 60
		f 4 -119 -94 53 -65
		mu 0 4 39 59 61 36
		f 4 -58 -120 -63 -49
		mu 0 4 30 33 38 37
		f 4 4 -121 -56 -9
		mu 0 4 22 10 32 31;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "topfloor_wall" -p "SB_TopFloor_grp";
	rename -uid "89185F83-48CE-59A7-8CF1-F3BA12DFA237";
	setAttr ".rp" -type "double3" 1.1010888671875001 12.97486328125 8.5466796875000011 ;
	setAttr ".sp" -type "double3" 1.1010888671875001 12.97486328125 8.5466796875000011 ;
createNode mesh -n "topfloor_wallShape" -p "topfloor_wall";
	rename -uid "53E30406-4E19-AA55-D9CF-91B0AF10B286";
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
	setAttr ".pv" -type "double2" 0.024852598551660776 0.56250935792922974 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape5" -p "topfloor_wall";
	rename -uid "FEEAE7CC-4A59-110C-55B6-1E961165415B";
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
	setAttr ".pv" -type "double2" 0.024852598551660776 0.56250935792922974 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 116 ".uvst[0].uvsp[0:115]" -type "float2" 0.59689778 0.4828487
		 0.51755071 0.48283547 0.51757002 0.36737701 0.59691709 0.36739028 0.31812143 0.59896004
		 0.39790601 0.5989641 0.3979001 0.71505928 0.31811553 0.71505523 0.41822243 0.48281887
		 0.31889427 0.4828023 0.31891352 0.36734384 0.41824168 0.36736041 0.49778199 0.59896922
		 0.59765786 0.59897429 0.59765196 0.71506935 0.49777609 0.71506441 0.59687847 0.59830713
		 0.51753139 0.5982939 0.41820318 0.59827733 0.3188749 0.59826076 0.51751214 0.71375239
		 0.59685922 0.71376562 0.41818386 0.71373582 0.31885564 0.71371919 0.31893277 0.25188538
		 0.41826099 0.25190195 0.51758927 0.25191855 0.46896544 0.74397343 0.5451774 0.74397212
		 0.39792371 0.25067881 0.39791781 0.36677396 0.31813323 0.36676991 0.31813908 0.25067475
		 0.49779969 0.2506839 0.49779379 0.36677903 0.59767562 0.25068897 0.59766972 0.36678416
		 0.59766382 0.48287919 0.49778789 0.48287413 0.39791191 0.482869 0.31812727 0.48286501
		 0.451011 0.74397373 0.40499783 0.54533315 0.44683355 0.60920751 0.45100868 0.60920745
		 0.41826379 0.2351318 0.4049927 0.42952502 0.31893557 0.2351152 0.40498769 0.31706715
		 0.51758975 0.24895948 0.46478796 0.60920721 0.46896309 0.60920715 0.46478567 0.47444093
		 0.46896079 0.47444087 0.44683123 0.47444126 0.45100638 0.47444117 0.46478102 0.20490845
		 0.41879362 0.48458162 0.46895847 0.33967459 0.46478334 0.33967465 0.49417943 0.48075739
		 0.49417928 0.4845846 0.56685889 0.48076025 0.56685871 0.48458746 0.41879442 0.46429613
		 0.42150056 0.46812347 0.45100403 0.33967489 0.4468289 0.33967498 0.49418008 0.46429908
		 0.49417993 0.46812633 0.56685948 0.46430194 0.56685936 0.46812919 0.54517043 0.33967328
		 0.34893239 0.48457888 0.37061691 0.33967629 0.37061459 0.20195778 0.41879296 0.50119209
		 0.34893176 0.50118935 0.34893388 0.44768292 0.41879508 0.44768569 0.49418074 0.44768864
		 0.5668602 0.4476915 0.49417862 0.50119507 0.56685805 0.50119793 0.54517508 0.60920578
		 0.54517275 0.47443956 0.37062156 0.60920882 0.37061924 0.47444257 0.4016515 0.63181859
		 0.31813997 0.23381148 0.51080537 0.6318137 0.51080209 0.542081 0.39792454 0.23381622
		 0.51079637 0.42952031 0.49780053 0.2338206 0.5107913 0.31706244 0.5155282 0.31706226
		 0.34893319 0.46429336 0.44682652 0.20195647 0.4510017 0.20490867 0.42150006 0.48075452
		 0.46895608 0.20195608 0.54516804 0.20195477 0.40025973 0.54198313 0.46479031 0.74397349
		 0.37062389 0.7439751 0.44683594 0.74692607 0.52054834 0.25191903 0.59693635 0.25193182
		 0.59767646 0.23382565 0.51553321 0.4295201 0.51553893 0.541978 0.51554221 0.63181353
		 0.40025473 0.4295252 0.40024978 0.31706735 0.51759207 0.23514839;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 97 ".vt[0:96]"  -0.8989113 12.97486305 8.5466795 1.10108876 12.97486305 8.5466795
		 -0.8989113 18.57027626 8.5466795 1.10108876 18.57027626 8.5466795 -0.8989113 18.57027626 -0.74870974
		 1.10108876 18.57027626 -0.74870974 -0.8989113 12.97486305 -0.74870974 1.10108876 12.97486305 -0.74870974
		 1.10108876 18.57027626 -1.14580321 -0.8989113 16.97324753 8.5466795 1.10108876 16.97324753 8.5466795
		 -0.8989113 16.97324753 -0.74870974 12.035534859 18.57027626 -0.74870974 12.035534859 18.57027626 -1.14580321
		 12.40108871 18.57027626 -0.74870974 12.40108871 17.032806396 -0.74870974 12.40108871 17.032806396 -1.14580321
		 12.40108871 18.57027626 -1.14580321 12.40108871 13.77426529 -1.14580321 12.40108871 13.77426529 -0.74870974
		 -0.8989113 14.97405529 8.5466795 -0.8989113 14.97405529 -0.74870974 1.10108876 14.97405529 -0.74870974
		 1.10108876 14.97405529 8.5466795 1.10108876 18.57027626 3.89898491 1.10108876 16.97324753 3.89898491
		 1.10108876 14.97405529 3.89898491 1.10108876 12.97486305 3.89898491 1.10108876 18.57027626 6.2228322
		 1.10108876 16.97324753 6.2228322 1.10108876 14.97405529 6.2228322 1.10108876 12.97486305 6.2228322
		 1.10108876 12.97486305 1.57513797 1.10108876 14.97405529 1.57513797 1.10108876 16.97324753 1.57513797
		 1.10108876 18.57027626 1.57513797 -0.8989113 18.57027626 3.89898491 -0.8989113 16.97324753 3.89898491
		 -0.8989113 14.97405529 3.89898491 -0.8989113 12.97486305 3.89898491 -0.8989113 12.97486305 1.57513797
		 -0.8989113 14.97405529 1.57513797 -0.8989113 16.97324753 1.57513797 -0.8989113 18.57027626 1.57513797
		 -0.8989113 18.57027626 6.2228322 -0.8989113 16.97324753 6.2228322 -0.8989113 14.97405529 6.2228322
		 -0.8989113 12.97486305 6.2228322 6.53853273 18.57027626 -0.74870974 6.53853273 18.57027626 -1.14580321
		 9.25725555 18.57027626 -0.74870974 9.25725555 18.57027626 -1.14580321 3.81981087 18.57027626 -0.74870974
		 3.81981087 18.57027626 -1.14580321 12.40108871 15.37375736 -0.74870974 12.40108871 15.37375736 -1.14580321
		 1.10108876 16.97324753 -1.08624506 1.041530609 17.032806396 -1.14580321 1.041530609 14.97405529 -1.14580321
		 1.10108876 14.97405529 -1.08624506 1.10108876 16.97324753 -0.74870974 1.10108876 16.97324753 -0.80826724
		 1.10108876 17.032806396 -0.74870974 3.81981087 17.032806396 -0.74870974 3.81981087 16.97324753 -0.80826724
		 3.81981087 16.97324753 -1.08624506 3.81981087 17.032806396 -1.14580321 11.97597694 16.97324753 -0.80826724
		 12.035534859 17.032806396 -0.74870974 12.035534859 15.37375736 -0.74870974 11.97597694 15.37375736 -0.80826724
		 12.035534859 17.032806396 -1.14580321 11.97597694 16.97324753 -1.08624506 11.97597694 15.37375736 -1.08624506
		 12.035534859 15.37375736 -1.14580321 1.041530609 12.97486305 -1.14580321 1.10108876 12.97486305 -1.08624506
		 6.53853273 16.97324753 -0.80826724 6.53853273 17.032806396 -0.74870974 9.25725555 17.032806396 -0.74870974
		 9.25725555 16.97324753 -0.80826724 6.53853273 17.032806396 -1.14580321 6.53853273 16.97324753 -1.08624506
		 9.25725555 16.97324753 -1.08624506 9.25725555 17.032806396 -1.14580321 12.035534859 13.77426529 -0.74870974
		 11.97597694 13.77426529 -0.80826724 11.97597694 13.77426529 -1.08624506 12.035534859 13.77426529 -1.14580321
		 -0.83936721 18.57027626 -1.14580321 -0.8989113 18.57027626 -1.086258531 -0.8989113 16.97324753 -1.08624506
		 -0.83938128 16.97507477 -1.14580321 -0.8989113 14.97405529 -1.086258531 -0.83936721 14.97405529 -1.14580321
		 -0.8989113 12.97486305 -1.086258531 -0.83936721 12.97486305 -1.14580321;
	setAttr -s 166 ".ed[0:165]"  0 20 0 1 23 0 2 44 0 3 28 0 4 11 1 5 62 0
		 6 40 0 7 32 0 4 90 0 7 76 0 6 95 0 9 2 0 10 3 0 11 21 1 10 29 1 11 42 1 5 52 0 8 53 0
		 12 14 0 14 15 0 13 17 0 17 16 0 16 55 0 15 54 0 20 9 0 21 6 1 22 7 1 23 10 0 20 46 1
		 22 33 1 24 35 0 25 34 1 26 30 1 27 31 0 24 25 1 25 26 1 26 27 1 28 24 0 29 25 1 30 23 1
		 31 1 0 28 29 1 29 30 1 30 31 1 32 27 0 33 26 1 34 60 1 35 5 0 32 33 1 33 34 1 34 35 1
		 36 43 0 37 45 1 38 41 1 39 47 0 36 37 1 37 38 1 38 39 1 40 39 0 41 21 1 42 37 1 43 4 0
		 40 41 1 41 42 1 42 43 1 44 36 0 45 9 1 46 38 1 47 0 0 44 45 1 45 46 1 46 47 1 48 50 0
		 49 51 0 50 12 0 51 13 0 52 48 0 53 49 0 54 19 0 55 18 0 60 22 1 60 62 1 61 60 1 85 19 0
		 86 87 0 88 18 0 56 57 0 57 66 0 66 65 1 65 56 0 56 59 0 59 58 1 58 57 0 59 76 0 76 75 0
		 75 58 0 62 61 0 61 64 0 64 63 1 63 62 0 64 77 0 77 78 1 78 63 0 66 81 0 81 82 1 82 65 0
		 67 68 0 68 79 0 79 80 1 80 67 0 67 70 0 70 69 1 69 68 0 70 86 0 86 85 0 85 69 0 71 72 0
		 72 83 0 83 84 1 84 71 0 71 74 0 74 73 1 73 72 0 74 88 0 88 87 0 87 73 0 77 80 0 79 78 0
		 81 84 0 83 82 0 8 57 1 59 22 1 50 79 1 68 12 1 80 83 1 72 67 0 84 51 1 13 71 1 68 15 1
		 16 71 1 70 73 1 74 55 1 54 69 1 56 61 0 52 63 1 78 48 1 64 65 1 82 77 1 66 53 1 49 81 1
		 89 8 0 96 75 0 90 89 0 89 92 0 92 91 1 91 90 0 92 94 0 94 93 1 93 91 0 94 96 0 96 95 0
		 95 93 0 91 11 1 21 93 1 57 92 1 94 58 1;
	setAttr -s 70 -ch 281 ".fc[0:69]" -type "polyFaces" 
		f 4 34 31 50 -31
		mu 0 4 0 1 2 3
		f 4 69 66 11 2
		mu 0 4 4 5 6 7
		f 4 36 -45 48 45
		mu 0 4 8 9 10 11
		f 4 71 68 0 28
		mu 0 4 12 13 14 15
		f 4 70 -29 24 -67
		mu 0 4 5 12 15 6
		f 4 35 -46 49 -32
		mu 0 4 1 8 11 2
		f 4 41 38 -35 -38
		mu 0 4 16 17 1 0
		f 4 42 -33 -36 -39
		mu 0 4 17 18 8 1
		f 4 43 -34 -37 32
		mu 0 4 18 19 9 8
		f 4 14 -42 -4 -13
		mu 0 4 20 17 16 21
		f 4 -40 -43 -15 -28
		mu 0 4 22 18 17 20
		f 4 -41 -44 39 -2
		mu 0 4 23 19 18 22
		f 4 -49 -8 -27 29
		mu 0 4 11 10 24 25
		f 4 -50 -30 -81 -47
		mu 0 4 2 11 25 26
		f 5 -51 46 81 -6 -48
		mu 0 5 3 2 26 107 108
		f 4 15 64 61 4
		mu 0 4 29 30 31 32
		f 4 -60 63 -16 13
		mu 0 4 33 34 30 29
		f 4 6 62 59 25
		mu 0 4 35 36 34 33
		f 4 -63 58 -58 53
		mu 0 4 34 36 37 38
		f 4 -64 -54 -57 -61
		mu 0 4 30 34 38 39
		f 4 -65 60 -56 51
		mu 0 4 31 30 39 40
		f 4 55 52 -70 65
		mu 0 4 40 39 5 4
		f 4 56 -68 -71 -53
		mu 0 4 39 38 12 5
		f 4 57 54 -72 67
		mu 0 4 38 37 13 12
		f 4 86 87 88 89
		mu 0 4 41 106 43 44
		f 4 -87 90 91 92
		mu 0 4 42 103 113 46
		f 4 -92 93 94 95
		mu 0 4 46 113 114 48
		f 4 96 97 98 99
		mu 0 4 27 104 50 51
		f 4 -99 100 101 102
		mu 0 4 51 50 52 53
		f 4 -89 103 104 105
		mu 0 4 44 43 54 55
		f 4 106 107 108 109
		mu 0 4 56 101 58 59
		f 4 -107 110 111 112
		mu 0 4 57 100 60 61
		f 4 -112 113 114 115
		mu 0 4 61 60 62 63
		f 4 116 117 118 119
		mu 0 4 98 99 66 67
		f 4 -117 120 121 122
		mu 0 4 65 64 68 69
		f 4 -122 123 124 125
		mu 0 4 69 68 70 71
		f 4 -102 126 -109 127
		mu 0 4 53 52 59 58
		f 4 -105 128 -119 129
		mu 0 4 55 54 67 66
		f 4 131 26 9 -94
		mu 0 4 45 25 24 47
		f 4 132 -108 133 -75
		mu 0 4 72 58 101 102
		f 4 134 -118 135 -110
		mu 0 4 59 66 99 56
		f 4 136 75 137 -120
		mu 0 4 67 74 75 98
		f 4 -134 138 -20 -19
		mu 0 4 73 57 76 77
		f 4 -138 20 21 139
		mu 0 4 64 97 78 79
		f 4 140 -126 -85 -114
		mu 0 4 60 69 71 62
		f 4 141 79 -86 -124
		mu 0 4 68 80 81 70
		f 4 142 -116 83 -79
		mu 0 4 82 61 63 83
		f 5 143 82 80 -132 -91
		mu 0 5 115 49 26 25 45
		f 4 144 -103 145 -77
		mu 0 4 84 51 53 85
		f 4 146 -106 147 -101
		mu 0 4 50 44 55 52
		f 4 148 77 149 -104
		mu 0 4 43 86 87 54
		f 4 -146 -128 -133 -73
		mu 0 4 85 53 58 72
		f 4 -148 -130 -135 -127
		mu 0 4 52 55 66 59
		f 4 -150 73 -137 -129
		mu 0 4 54 87 74 67
		f 4 5 -100 -145 -17
		mu 0 4 28 27 51 84
		f 4 -98 -144 -90 -147
		mu 0 4 50 104 41 44
		f 4 -131 17 -149 -88
		mu 0 4 106 105 86 43
		f 4 -139 -113 -143 -24
		mu 0 4 76 57 61 82
		f 4 -136 -123 -141 -111
		mu 0 4 100 65 69 60
		f 4 -140 22 -142 -121
		mu 0 4 64 79 80 68
		f 3 -83 -97 -82
		mu 0 3 26 49 107
		f 4 152 153 154 155
		mu 0 4 112 90 91 111
		f 4 -155 156 157 158
		mu 0 4 111 91 93 110
		f 4 -158 159 160 161
		mu 0 4 110 93 95 96
		f 4 162 -5 8 -156
		mu 0 4 92 29 32 89
		f 4 -26 163 -162 -11
		mu 0 4 35 33 94 109
		f 4 -164 -14 -163 -159
		mu 0 4 94 33 29 92
		f 4 -154 150 130 164
		mu 0 4 91 90 88 42
		f 4 165 -96 -152 -160
		mu 0 4 93 46 48 95
		f 4 -165 -93 -166 -157
		mu 0 4 91 42 46 93;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "topfloor_wall3" -p "SB_TopFloor_grp";
	rename -uid "728B3BC5-4D31-540F-0845-7C87D8191AD8";
	setAttr ".rp" -type "double3" -5.9989111328125002 12.974543457031251 1.3512091064453129 ;
	setAttr ".sp" -type "double3" -5.9989111328125002 12.974543457031251 1.3512091064453129 ;
createNode mesh -n "topfloor_wallShape3" -p "topfloor_wall3";
	rename -uid "0032D031-4734-C266-5DD4-97BF1140374D";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.25 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape6" -p "topfloor_wall3";
	rename -uid "61AF400A-4668-34AC-5C95-A5BAA7E2423E";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.25 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 85 ".uvst[0].uvsp[0:84]" -type "float2" 0.544447 0.5470227
		 0.54107028 0.55657107 0.30914688 0.5565533 0.14868173 0.46088207 0.3003917 0.45269811
		 0.30328953 0.46089685 0.54108059 0.42383593 0.54107988 0.4333846 0.30915636 0.43336681
		 0.3091571 0.42381817 0.14279118 0.43335405 0.14279193 0.42380542 0.14288116 0.49613756
		 0.31590199 0.5154916 0.30328694 0.48795444 0.30038756 0.49615258 0.54107416 0.50596023
		 0.54444945 0.51550919 0.30915397 0.46488035 0.3091532 0.47442901 0.14278808 0.47441626
		 0.14278877 0.46486759 0.54107738 0.46489811 0.54107672 0.47444677 0.44446868 0.59545386
		 0.77291083 0.45274329 0.43633085 0.40355384 0.44446802 0.40067697 0.47946113 0.60120761
		 0.76711023 0.48799872 0.47132331 0.40067685 0.47946042 0.40355372 0.14279434 0.39229193
		 0.14286751 0.63897878 0.30040532 0.30985689 0.30037385 0.63899386 0.77292442 0.30990207
		 0.403723 0.74298108 0.40372247 0.60120791 0.47946155 0.74298084 0.5120703 0.60120749
		 0.51207083 0.74298072 0.40372181 0.40355396 0.51206958 0.40355361 0.45789808 0.45271313
		 0.45791173 0.30987191 0.61541808 0.30988699 0.61540449 0.45272821 0.45789734 0.46091163
		 0.61250508 0.46092647 0.45789471 0.48796916 0.61250246 0.48798394 0.45789391 0.49616766
		 0.61540031 0.49618274 0.45788029 0.63900888 0.61538661 0.63902396 0.40372109 0.20590013
		 0.4363302 0.20590004 0.44446737 0.20590001 0.4713226 0.20589989 0.4794597 0.20589986
		 0.51206893 0.20589975 0.7729938 0.55658889 0.77300394 0.4238537 0.77300322 0.43340236
		 0.77300078 0.4649159 0.773 0.47446451 0.77299762 0.50597805 0.7729969 0.51552665
		 0.77299446 0.54704022 0.77290654 0.49619776 0.77289295 0.63903898 0.43633211 0.74298096
		 0.43633157 0.60120773 0.76711285 0.46094126 0.47132397 0.5954538 0.30915082 0.50594246
		 0.14278561 0.50592977 0.14289892 0.30984187 0.14288527 0.45268309 0.31589958 0.54700518
		 0.14867914 0.48793966 0.54108286 0.39232242 0.30915952 0.39230466 0.77300632 0.39234021;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 70 ".vt[0:69]"  -5.9989109 18.57426834 1.69121516 -6.398911 18.57426834 1.69121516
		 -5.9989109 18.57426834 8.21120548 -6.398911 18.57426834 8.21120453 -5.9989109 17.096036911 8.55121136
		 -5.9989109 18.57426834 8.55121136 -6.398911 17.096036911 8.55121231 -6.398911 18.57426834 8.55121231
		 -5.9989109 12.97426796 8.55121136 -6.398911 12.97426796 8.55121231 -5.9989109 12.97454357 1.69121516
		 -6.058905125 12.97454357 1.75120926 -6.058905125 17.036043167 1.75120926 -5.9989109 17.096036911 1.69121516
		 -6.058905125 12.97454357 1.3512094 -5.9989109 12.97454357 1.41120327 -5.9989109 17.096036911 1.41120327
		 -6.058905125 17.096036911 1.3512094 -6.398911 17.096036911 1.69121516 -6.33891726 17.036043167 1.75120926
		 -6.33891726 12.97454357 1.75120926 -6.398911 12.97454357 1.69121516 -6.33891726 17.096036911 1.35120928
		 -6.398911 17.096036911 1.41120327 -6.398911 12.97454357 1.41120327 -6.33891726 12.97454357 1.35120928
		 -5.9989109 18.57426834 1.41120327 -6.058905125 18.57426834 1.3512094 -6.33891726 18.57426834 1.35120928
		 -6.398911 18.57426834 1.41120327 -6.058905125 17.036043167 8.15121174 -5.9989109 17.096036911 8.21120548
		 -6.398911 17.096036911 8.21120453 -6.33891726 17.036043167 8.15121174 -6.058905125 12.97426796 8.15121174
		 -5.9989109 12.97426796 8.21120548 -6.398911 12.97426796 8.21120453 -6.33891726 12.97426796 8.15121174
		 -5.9989109 18.57426834 4.9512105 -5.9989109 17.096036911 4.9512105 -6.058905125 17.036043167 4.95121098
		 -6.33891726 17.036043167 4.9512105 -6.398911 17.096036911 4.9512105 -6.398911 18.57426834 4.9512105
		 -5.9989109 18.57426834 3.32121277 -5.9989109 17.096036911 3.32121301 -6.058905125 17.036043167 3.35121012
		 -6.33891726 17.036043167 3.35121012 -6.398911 17.096036911 3.32121301 -6.398911 18.57426834 3.32121277
		 -5.9989109 18.57426834 6.58120775 -5.9989109 17.096036911 6.58120775 -6.058905125 17.036043167 6.55121088
		 -6.33891726 17.036043167 6.55121088 -6.398911 17.096036911 6.58120775 -6.398911 18.57426834 6.58120775
		 -5.9989109 15.035151482 8.55121136 -5.9989109 15.035151482 8.21120548 -6.058905125 15.0051546097 8.15121174
		 -6.33891726 15.0051546097 8.15121174 -6.398911 15.035151482 8.21120453 -6.398911 15.035151482 8.55121231
		 -5.9989109 15.035290718 1.69121516 -5.9989109 15.035289764 1.41120327 -6.058905125 15.035289764 1.3512094
		 -6.33891726 15.035289764 1.35120928 -6.398911 15.035289764 1.41120327 -6.398911 15.035290718 1.69121516
		 -6.33891726 15.0052928925 1.75120926 -6.058905125 15.0052928925 1.75120926;
	setAttr -s 123 ".ed[0:122]"  0 26 0 1 29 0 0 44 0 1 49 0 2 5 0 4 5 0 3 7 0
		 6 7 0 4 56 0 6 61 0 10 15 0 20 11 0 21 24 0 25 14 0 27 28 0 34 37 0 35 8 0 36 9 0
		 11 10 0 10 62 0 13 12 0 12 69 0 13 45 0 31 30 0 30 52 0 15 14 0 14 64 0 17 16 1 16 63 0
		 17 27 0 27 26 0 26 16 0 18 19 0 19 47 0 33 32 0 32 54 0 18 67 0 21 20 0 20 68 0 22 23 1
		 23 29 0 29 28 0 28 22 0 22 65 0 25 24 0 24 66 0 31 57 0 35 34 0 34 58 0 33 59 0 37 36 0
		 36 60 0 16 13 1 18 23 1 22 17 1 12 19 0 0 13 1 18 1 1 30 33 0 2 31 1 32 3 1 4 31 1
		 32 6 1 38 50 0 39 51 0 40 46 0 41 53 0 42 48 0 43 55 0 38 39 1 39 40 1 40 41 1 41 42 1
		 42 43 1 44 38 0 45 39 0 46 12 0 47 41 0 48 18 0 49 43 0 44 45 1 45 46 1 46 47 1 47 48 1
		 48 49 1 50 2 0 51 31 0 52 40 0 53 33 0 54 42 0 55 3 0 50 51 1 51 52 1 52 53 1 53 54 1
		 54 55 1 56 8 0 57 35 0 58 30 0 59 37 0 60 32 0 61 9 0 56 57 1 57 58 1 58 59 1 59 60 1
		 60 61 1 62 13 0 63 15 0 64 17 0 65 25 0 66 23 0 67 21 0 68 19 0 69 11 0 62 63 1 63 64 1
		 64 65 1 65 66 1 66 67 1 67 68 1 68 69 1 69 62 1;
	setAttr -s 53 -ch 212 ".fc[0:52]" -type "polyFaces" 
		f 4 122 107 20 21
		mu 0 4 0 1 2 80
		f 4 -21 22 81 76
		mu 0 4 3 79 4 5
		f 4 116 109 27 28
		mu 0 4 6 7 8 9
		f 4 -28 29 30 31
		mu 0 4 9 8 10 11
		f 4 32 33 83 78
		mu 0 4 12 81 14 15
		f 4 -33 36 120 113
		mu 0 4 13 76 16 17
		f 4 39 40 41 42
		mu 0 4 18 19 20 21
		f 4 -40 43 118 111
		mu 0 4 19 18 22 23
		f 4 -24 46 103 98
		mu 0 4 24 73 26 27
		f 4 -35 49 105 100
		mu 0 4 28 75 30 31
		f 4 -108 115 -29 52
		mu 0 4 83 82 6 9
		f 4 53 -112 119 -37
		mu 0 4 76 19 23 16
		f 4 -110 117 -44 54
		mu 0 4 8 7 22 18
		f 4 -114 121 -22 55
		mu 0 4 13 17 0 80
		f 4 -53 -32 -1 56
		mu 0 4 83 9 11 32
		f 4 -55 -43 -15 -30
		mu 0 4 8 18 21 10
		f 4 -54 57 1 -41
		mu 0 4 19 76 77 20
		f 4 -56 -77 82 -34
		mu 0 4 81 3 5 14
		f 4 -57 2 80 -23
		mu 0 4 79 78 34 4
		f 4 -58 -79 84 -4
		mu 0 4 33 12 15 35
		f 4 -60 4 -6 61
		mu 0 4 73 72 37 38
		f 4 -61 62 7 -7
		mu 0 4 39 28 40 41
		f 4 -59 -99 104 -50
		mu 0 4 75 24 27 30
		f 4 -62 8 102 -47
		mu 0 4 73 38 42 26
		f 4 -63 -101 106 -10
		mu 0 4 40 28 31 43
		f 4 -70 63 91 -65
		mu 0 4 44 45 46 47
		f 4 -71 64 92 87
		mu 0 4 48 44 47 49
		f 4 -72 -88 93 -67
		mu 0 4 50 48 49 51
		f 4 -73 66 94 89
		mu 0 4 52 50 51 53
		f 4 -74 -90 95 -69
		mu 0 4 54 52 53 55
		f 4 -81 74 69 -76
		mu 0 4 4 34 45 44
		f 4 -82 75 70 65
		mu 0 4 5 4 44 48
		f 4 -83 -66 71 -78
		mu 0 4 14 5 48 50
		f 4 -84 77 72 67
		mu 0 4 15 14 50 52
		f 4 -85 -68 73 -80
		mu 0 4 35 15 52 54
		f 4 -92 85 59 -87
		mu 0 4 47 46 36 25
		f 4 -93 86 23 24
		mu 0 4 49 47 25 74
		f 4 -94 -25 58 -89
		mu 0 4 51 49 74 29
		f 4 -95 88 34 35
		mu 0 4 53 51 29 70
		f 4 -96 -36 60 -91
		mu 0 4 55 53 70 71
		f 4 -103 96 -17 -98
		mu 0 4 26 42 56 57
		f 4 -104 97 47 48
		mu 0 4 27 26 57 58
		f 4 -105 -49 15 -100
		mu 0 4 30 27 58 59
		f 4 -106 99 50 51
		mu 0 4 31 30 59 60
		f 4 -107 -52 17 -102
		mu 0 4 43 31 60 61
		f 4 -116 -20 10 -109
		mu 0 4 6 82 84 63
		f 4 25 26 -117 108
		mu 0 4 63 64 7 6
		f 4 -118 -27 -14 -111
		mu 0 4 22 7 64 65
		f 4 -119 110 44 45
		mu 0 4 23 22 65 66
		f 4 -120 -46 -13 -113
		mu 0 4 16 23 66 67
		f 4 -121 112 37 38
		mu 0 4 17 16 67 68
		f 4 -122 -39 11 -115
		mu 0 4 0 17 68 69
		f 4 18 19 -123 114
		mu 0 4 69 62 1 0;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "topfloor_wall2" -p "SB_TopFloor_grp";
	rename -uid "D962298B-49B4-07B8-8ACA-67BEA2227204";
	setAttr ".rp" -type "double3" -8.8989111328125006 12.974543457031251 1.751209106445313 ;
	setAttr ".sp" -type "double3" -8.8989111328125006 12.974543457031251 1.751209106445313 ;
createNode mesh -n "topfloor_wallShape2" -p "topfloor_wall2";
	rename -uid "A3743648-4FE4-243A-3EBA-E996247B1FD1";
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
	setAttr ".pv" -type "double2" 0.375 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape7" -p "topfloor_wall2";
	rename -uid "99461884-4628-CFCF-6BC3-71BA9AD6FBCB";
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
	setAttr ".pv" -type "double2" 0.375 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 51 ".uvst[0].uvsp[0:50]" -type "float2" 0.40232936 0.35731116
		 0.4152506 0.36187944 0.41525474 0.67571652 0.48405534 0.19061068 0.49988246 0.47444287
		 0.48403901 0.4800432 0.4578945 0.36187866 0.47081569 0.36187851 0.47081983 0.6757158
		 0.45789865 0.67571598 0.47082281 0.90083998 0.45790163 0.90084016 0.41592607 0.1794042
		 0.35968959 0.66658062 0.43175226 0.48004022 0.4159095 0.4744381 0.34676439 0.36188033
		 0.35968551 0.35731173 0.51346368 0.67571521 0.52638483 0.67571503 0.52638787 0.90083927
		 0.51346666 0.90083945 0.5134595 0.36187792 0.52638072 0.36187774 0.41525775 0.90084076
		 0.13989496 0.17938864 0.7759136 0.47445831 0.13987833 0.47442266 0.77589703 0.76949215
		 0.49986583 0.76947665 0.48402286 0.76947582 0.43173599 0.76947284 0.41589296 0.769472
		 0.13986185 0.76945639 0.41524646 0.048042107 0.45789033 0.048041549 0.47081152 0.04804137
		 0.51345539 0.048040826 0.52637655 0.048040655 0.56902045 0.048040088 0.35968143 0.04804286
		 0.40232524 0.048042271 0.56902456 0.36187738 0.34676021 0.048043031 0.34676853 0.67571741
		 0.56902874 0.67571449 0.56903172 0.90083867 0.77593011 0.17942438 0.49989897 0.17940888
		 0.40233344 0.66658008 0.43176851 0.19060776;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 42 ".vt[0:41]"  -9.2389183 18.57426834 1.75120914 -9.2389183 18.57426834 1.35120916
		 -12.39891148 18.57426834 1.75120914 -12.39891148 18.57426834 1.35120916 -9.2389183 12.97454357 1.75120914
		 -9.29891205 12.97454357 1.69121504 -9.29891205 17.036043167 1.69121504 -9.2389183 17.096036911 1.75120914
		 -8.89891148 12.97454357 1.69121504 -8.95890522 12.97454357 1.75120914 -8.95890522 17.096036911 1.75120914
		 -8.89891148 17.096036911 1.69121504 -9.2389183 17.096036911 1.35120916 -9.29891205 17.036043167 1.41120315
		 -9.29891205 12.97454357 1.41120315 -9.2389183 12.97454357 1.35120916 -8.89891148 17.096036911 1.41120315
		 -8.95890522 17.096036911 1.35120916 -8.95890522 12.97454357 1.35120916 -8.89891148 12.97454357 1.41120315
		 -8.95890522 18.57426834 1.75120914 -8.89891148 18.57426834 1.69121504 -8.89891148 18.57426834 1.41120315
		 -8.95890522 18.57426834 1.35120916 -12.39891148 17.036043167 1.69121504 -12.39891148 17.096036911 1.75120914
		 -12.39891148 17.096036911 1.35120916 -12.39891148 17.036043167 1.41120315 -10.81891441 18.57426834 1.75120914
		 -10.81891441 17.096036911 1.75120914 -10.84891129 17.036043167 1.69121504 -10.84891129 17.036043167 1.41120315
		 -10.81891441 17.096036911 1.35120916 -10.81891441 18.57426834 1.35120916 -9.2389183 15.035290718 1.75120914
		 -8.95890522 15.035289764 1.75120914 -8.89891148 15.035289764 1.69121504 -8.89891148 15.035289764 1.41120315
		 -8.95890522 15.035289764 1.35120916 -9.2389183 15.035290718 1.35120916 -9.29891205 15.0052928925 1.41120315
		 -9.29891205 15.0052928925 1.69121504;
	setAttr -s 73 ".ed[0:72]"  0 20 0 1 23 0 0 28 0 1 33 0 4 9 0 14 5 0
		 15 18 0 19 8 0 21 22 0 24 27 0 25 2 0 26 3 0 5 4 0 4 34 0 7 6 0 6 41 0 7 29 0 25 24 0
		 24 30 0 9 8 0 8 36 0 11 10 1 10 35 0 11 21 0 21 20 0 20 10 0 12 13 0 13 31 0 27 26 0
		 26 32 0 12 39 0 15 14 0 14 40 0 16 17 1 17 23 0 23 22 0 22 16 0 16 37 0 19 18 0 18 38 0
		 10 7 1 12 17 1 16 11 1 6 13 0 0 7 1 12 1 1 28 2 0 29 25 0 30 6 0 31 27 0 32 12 0
		 33 3 0 28 29 1 29 30 1 30 31 1 31 32 1 32 33 1 34 7 0 35 9 0 36 11 0 37 19 0 38 17 0
		 39 15 0 40 13 0 41 5 0 34 35 1 35 36 1 36 37 1 37 38 1 38 39 1 39 40 1 40 41 1 41 34 1;
	setAttr -s 31 -ch 124 ".fc[0:30]" -type "polyFaces" 
		f 4 72 57 14 15
		mu 0 4 0 1 2 49
		f 4 -15 16 53 48
		mu 0 4 3 48 4 5
		f 4 66 59 21 22
		mu 0 4 6 7 8 9
		f 4 -22 23 24 25
		mu 0 4 9 8 10 11
		f 4 26 27 55 50
		mu 0 4 12 50 14 15
		f 4 -27 30 70 63
		mu 0 4 13 44 16 17
		f 4 33 34 35 36
		mu 0 4 18 19 20 21
		f 4 -34 37 68 61
		mu 0 4 19 18 22 23
		f 4 -58 65 -23 40
		mu 0 4 2 1 6 9
		f 4 41 -62 69 -31
		mu 0 4 45 19 23 42
		f 4 -60 67 -38 42
		mu 0 4 8 7 22 18
		f 4 -64 71 -16 43
		mu 0 4 13 17 0 49
		f 4 -41 -26 -1 44
		mu 0 4 2 9 11 24
		f 4 -43 -37 -9 -24
		mu 0 4 8 18 21 10
		f 4 -42 45 1 -35
		mu 0 4 19 45 46 20
		f 4 -44 -49 54 -28
		mu 0 4 50 3 5 14
		f 4 -45 2 52 -17
		mu 0 4 48 47 26 4
		f 4 -46 -51 56 -4
		mu 0 4 25 12 15 27
		f 4 -53 46 -11 -48
		mu 0 4 4 26 28 29
		f 4 -54 47 17 18
		mu 0 4 5 4 29 30
		f 4 -55 -19 9 -50
		mu 0 4 14 5 30 31
		f 4 -56 49 28 29
		mu 0 4 15 14 31 32
		f 4 -57 -30 11 -52
		mu 0 4 27 15 32 33
		f 4 -66 -14 4 -59
		mu 0 4 6 1 34 35
		f 4 19 20 -67 58
		mu 0 4 35 36 7 6
		f 4 -68 -21 -8 -61
		mu 0 4 22 7 36 37
		f 4 -69 60 38 39
		mu 0 4 23 22 37 38
		f 4 -70 -40 -7 -63
		mu 0 4 42 23 38 39
		f 4 -71 62 31 32
		mu 0 4 17 16 43 40
		f 4 -72 -33 5 -65
		mu 0 4 0 17 40 41
		f 4 12 13 -73 64
		mu 0 4 41 34 1 0;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "topfloor_floor" -p "SB_TopFloor_grp";
	rename -uid "C6700CCE-452D-46CC-EF3E-E3BF770A69B8";
	setAttr ".rp" -type "double3" -12.399130859375001 12.97486328125 -8.5518499755859398 ;
	setAttr ".sp" -type "double3" -12.399130859375001 12.97486328125 -8.5518499755859398 ;
createNode mesh -n "topfloor_floorShape" -p "topfloor_floor";
	rename -uid "A949501A-459C-950D-4893-1492BEBBE830";
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
	setAttr ".pv" -type "double2" 0.65271618962287903 0.57979901880025864 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape8" -p "topfloor_floor";
	rename -uid "2B356FF3-4E0A-E60B-3276-98BB555D64F5";
	setAttr -k off ".v";
	setAttr ".io" yes;
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
	setAttr ".pv" -type "double2" 0.65271618962287903 0.57979901880025864 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 117 ".uvst[0].uvsp[0:116]" -type "float2" 0.54605013 0.20020449
		 0.54605263 0.32535487 0.44976431 0.32535678 0.44976175 0.20020646 0.36160427 0.20020825
		 0.36160684 0.32535863 0.27344936 0.32536042 0.27344686 0.20021003 0.27345568 0.63956118
		 0.36161309 0.63955933 0.36161536 0.74867654 0.27345788 0.74867833 0.5460552 0.4505052
		 0.45142484 0.36381686 0.44976842 0.53044051 0.44976687 0.45050716 0.27345181 0.45051074
		 0.3616094 0.45050895 0.36161095 0.5304423 0.27345347 0.53044409 0.39882061 0.37720007
		 0.39881125 0.42933112 0.33971834 0.42932057 0.33972773 0.37718946 0.3987985 0.50049537
		 0.33970559 0.50048482 0.50585747 0.73278439 0.46439034 0.46143591 0.45136487 0.68267822
		 0.45138568 0.57205588 0.59937465 0.65027988 0.6928829 0.65028995 0.40436804 0.73277348
		 0.40437698 0.65025878 0.69289106 0.57474315 0.59938282 0.57473302 0.59939098 0.49918616
		 0.69289923 0.49919626 0.50587457 0.57472295 0.40438515 0.57471198 0.40439326 0.49916512
		 0.50588268 0.49917608 0.31361508 0.73276371 0.31362402 0.650249 0.31363219 0.5747022
		 0.31364042 0.49915531 0.31364632 0.44417846 0.40439922 0.44418827 0.40442437 0.2112481
		 0.31367147 0.21123832 0.31367981 0.13359153 0.40443271 0.13360134 0.54867733 0.21126367
		 0.54868567 0.13361692 0.62081218 0.1336247 0.62080377 0.21127145 0.64234096 0.32535291
		 0.64233845 0.20020252 0.64234358 0.45050329 0.64234513 0.53043658 0.46442705 0.26620263
		 0.40435916 0.81528813 0.31360626 0.81527835 0.51700622 0.37722129 0.51699692 0.42935228
		 0.45790404 0.42934179 0.4579134 0.37721062 0.51698422 0.50051653 0.45789129 0.50050598
		 0.5760991 0.37723178 0.57608974 0.42936295 0.57607698 0.50052714 0.57606423 0.57169139
		 0.51697147 0.57168072 0.4578785 0.57167023 0.39878571 0.57165956 0.33969286 0.57164907
		 0.54865885 0.38208643 0.54866892 0.28891036 0.62079543 0.28891817 0.62078536 0.3820942
		 0.40440589 0.38207084 0.31365299 0.38206106 0.31366307 0.288885 0.40441597 0.28889477
		 0.22286223 0.73275387 0.22285332 0.81526852 0.22287117 0.65023923 0.22287931 0.57469237
		 0.22288747 0.49914554 0.2228934 0.44416866 0.22290011 0.38205126 0.22291018 0.28887522
		 0.22291856 0.2112285 0.22292696 0.13358174 0.62077862 0.4442116 0.54865217 0.44420382
		 0.47652566 0.44419605 0.47653234 0.38207865 0.47654241 0.28890258 0.47655082 0.21125589
		 0.47655916 0.13360912 0.69293863 0.13363248 0.69293028 0.21127924 0.69292188 0.28892595
		 0.6929118 0.38210198 0.69290507 0.44421941 0.44977069 0.63955766 0.44977283 0.74867475
		 0.54605681 0.53043854 0.45140648 0.46143353 0.45144314 0.26620018 0.4643696 0.57205832
		 0.46434879 0.68268067 0.4644087 0.36381927 0.50586635 0.65026981 0.50584859 0.81529909;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 107 ".vt[0:106]"  -12.39913082 12.97486305 1.74321592 -6.39553976 12.97486305 1.74321592
		 -12.39913082 12.97486305 -8.55185032 -6.39553976 12.97486305 -8.55185032 -0.89891112 12.97486305 1.74321592
		 -0.89891112 12.97486305 -8.55185032 -6.39553976 12.97486305 8.5466795 -0.89891112 12.97486305 8.5466795
		 -12.39913082 12.97486305 -0.74871033 -6.39553976 12.97486305 -0.74871033 -0.89891112 12.97486305 -0.74871033
		 1.10108888 12.97486305 1.74321592 1.10108888 12.97486305 -0.74871033 1.10108888 12.97486305 8.5466795
		 12.39991188 12.97486305 1.74321592 12.39991188 12.97486305 -0.74871033 12.39991188 12.97486305 8.5466795
		 -12.39913082 12.57559776 1.74321592 -6.39553976 12.57559776 1.74321592 -6.39553976 12.57559776 8.5466795
		 -12.39913082 12.57559776 -8.55185032 -6.39553976 12.57559776 -8.55185032 -0.89891112 12.57559776 1.74321592
		 -0.89891112 12.57559776 8.5466795 -0.89891112 12.57559776 -8.55185032 -12.39913082 12.57559776 -1.94886172
		 -6.39553976 12.57559776 -1.94886172 -0.89891112 12.57559776 -1.94886172 1.10108888 12.57559776 -1.94886172
		 1.10108888 12.57559776 -8.55185032 12.39991188 12.57559776 -1.94886172 12.39991188 12.57559776 -8.55185032
		 1.10108888 12.57559776 8.54667759 12.39991188 12.57559776 8.54667759 -12.39913082 12.97486305 -4.65028048
		 -6.39553976 12.97486305 -4.65028048 -0.89891112 12.97486305 -4.65028048 -9.39733505 12.97486305 -8.55185032
		 -9.39733505 12.97486305 -4.65028048 -9.39733505 12.97486305 -0.74871033 -9.39733505 12.97486305 1.74321592
		 -9.39733505 12.57559776 1.74321592 -9.39733505 12.57559776 -1.94886172 -9.39733505 12.57559776 -8.55185032
		 -3.64722538 12.97486305 -8.55185032 -3.64722538 12.97486305 -4.65028048 -3.64722538 12.97486305 -0.74871033
		 -3.64722538 12.97486305 1.74321592 -3.64722538 12.97486305 8.5466795 -0.89891112 12.97486305 5.14494896
		 -3.64722538 12.97486305 5.14494896 -6.39553976 12.97486305 5.14494896 -6.39553976 12.57559776 5.14494896
		 -0.89891112 12.57559776 5.14494896 6.75050068 12.97486305 -0.74871033 6.75050068 12.97486305 1.74321592
		 6.75050068 12.97486305 8.5466795 3.9257946 12.97486305 -0.74871033 3.9257946 12.97486305 1.74321592
		 3.9257946 12.97486305 8.5466795 9.57520485 12.97486305 -0.74871033 9.57520485 12.97486305 1.74321592
		 9.57520485 12.97486305 8.5466795 1.10108888 12.97486305 5.14494896 3.9257946 12.97486305 5.14494896
		 6.75050068 12.97486305 5.14494896 9.57520485 12.97486305 5.14494896 12.39991188 12.97486305 5.14494896
		 6.75050068 12.57559776 8.54667759 6.75050068 12.57559776 -1.94886172 6.75050068 12.57559776 -8.55185032
		 -12.39913082 12.57559776 -5.25035667 -9.39733505 12.57559776 -5.25035667 -6.39553976 12.57559776 -5.25035667
		 -0.89891112 12.57559776 -5.25035667 1.10108888 12.57559776 -5.25035667 6.75050068 12.57559776 -5.25035667
		 12.39991188 12.57559776 -5.25035667 3.36085439 12.57559776 8.54667759 3.36085439 12.57559776 -1.94886172
		 3.36085439 12.57559776 -5.25035667 3.36085439 12.57559776 -8.55185032 9.57520485 12.57559776 8.54667759
		 9.57520485 12.57559776 -1.94886172 9.57520485 12.57559776 -5.25035667 9.57520485 12.57559776 -8.55185032
		 -3.64722538 12.57559776 8.5466795 -3.64722538 12.57559776 5.14494896 -3.64722538 12.57559776 1.74321592
		 -3.64722538 12.57559776 -1.94886172 -3.64722538 12.57559776 -5.25035667 -3.64722538 12.57559776 -8.55185032
		 1.10108888 12.57559776 3.29890752 3.36085439 12.57559776 3.29890752 6.75050068 12.57559776 3.29890752
		 9.57520485 12.57559776 3.29890752 12.39991188 12.57559776 3.29890752 12.39991188 12.57559776 5.92279291
		 9.57520485 12.57559776 5.92279291 6.75050068 12.57559776 5.92279291 3.36085439 12.57559776 5.92279291
		 1.10108888 12.57559776 5.92279291 1.10108888 12.57559776 0.6750226 3.36085439 12.57559776 0.6750226
		 6.75050068 12.57559776 0.6750226 9.57520485 12.57559776 0.6750226 12.39991188 12.57559776 0.6750226;
	setAttr -s 179 ".ed";
	setAttr ".ed[0:165]"  0 40 0 0 8 0 1 9 0 2 37 0 1 47 0 3 44 0 4 10 0 1 51 0
		 4 49 0 6 48 0 8 34 0 9 35 0 10 36 0 8 39 1 9 46 1 11 12 0 11 63 0 11 58 0 12 57 0
		 14 15 0 13 59 0 14 67 0 0 17 0 1 18 0 17 41 0 6 19 0 18 52 0 17 25 0 18 26 0 20 43 0
		 18 88 0 19 86 0 22 53 0 21 91 0 22 27 0 25 71 0 26 73 0 27 74 0 25 42 1 26 89 1 27 28 0
		 24 29 0 28 75 0 28 79 1 29 81 0 30 77 0 28 102 0 32 78 0 34 2 0 35 3 0 36 5 0 34 38 1
		 35 45 1 37 3 0 38 35 1 39 9 1 40 1 0 41 18 0 42 26 1 43 21 0 37 38 1 38 39 1 39 40 1
		 40 41 1 41 42 1 42 72 1 44 5 0 45 36 1 46 10 1 47 4 0 48 7 0 44 45 1 45 46 1 46 47 1
		 47 50 1 49 7 0 50 48 1 51 6 0 52 19 0 53 23 0 49 50 1 50 51 1 51 52 1 52 87 1 54 60 0
		 55 61 0 56 62 0 54 55 1 55 65 1 57 54 0 58 55 0 59 56 0 57 58 1 58 64 1 60 15 0 61 14 0
		 62 16 0 60 61 1 61 66 1 63 13 0 64 59 1 65 56 1 66 62 1 67 16 0 63 64 1 64 65 1 65 66 1
		 66 67 1 68 82 0 69 83 1 70 85 0 68 99 1 69 76 1 71 20 0 72 43 1 73 21 0 74 24 0 75 29 0
		 76 70 1 77 31 0 71 72 1 72 73 1 73 90 1 74 75 1 75 80 1 76 84 1 78 68 0 79 69 1 80 76 1
		 81 70 0 78 100 1 79 80 1 80 81 1 82 33 0 83 30 1 84 77 1 85 31 0 82 98 1 83 84 1
		 84 85 1 86 23 0 87 53 1 88 22 0 89 27 1 90 74 1 91 24 0 86 87 1 87 88 1 88 89 1 89 90 1
		 90 91 1 30 106 0 92 101 0 93 103 1 94 104 1 95 105 1 96 97 0 92 93 1 93 94 1 94 95 1
		 95 96 1 97 33 0 98 95 1 99 94 1 100 93 1 101 32 0;
	setAttr ".ed[166:178]" 97 98 1 98 99 1 99 100 1 100 101 1 102 92 0 103 79 1
		 104 69 1 105 83 1 106 96 0 102 103 1 103 104 1 104 105 1 105 106 1;
	setAttr -s 74 -ch 296 ".fc[0:73]" -type "polyFaces" 
		f 4 60 54 49 -54
		mu 0 4 0 1 2 3
		f 4 71 67 50 -67
		mu 0 4 4 5 6 7
		f 4 80 76 70 -76
		mu 0 4 8 9 10 11
		f 4 62 56 2 -56
		mu 0 4 12 109 14 15
		f 4 -69 73 69 6
		mu 0 4 16 17 18 19
		f 4 97 95 19 -95
		mu 0 4 20 21 22 23
		f 4 98 107 -22 -96
		mu 0 4 21 24 25 22
		f 4 -57 63 57 -24
		mu 0 4 110 13 114 27
		f 4 -78 82 78 -26
		mu 0 4 28 29 112 113
		f 4 -58 64 58 -29
		mu 0 4 115 26 32 33
		f 4 146 141 79 -141
		mu 0 4 34 35 36 37
		f 4 148 143 -35 -143
		mu 0 4 38 39 40 41
		f 4 -59 65 121 -37
		mu 0 4 33 32 42 43
		f 4 -144 149 144 -38
		mu 0 4 40 39 44 45
		f 4 37 123 -43 -41
		mu 0 4 40 45 46 47
		f 4 138 135 -46 -135
		mu 0 4 48 49 50 51
		f 4 160 156 166 162
		mu 0 4 52 53 54 55
		f 4 61 55 11 -55
		mu 0 4 1 12 15 2
		f 4 -68 72 68 12
		mu 0 4 6 5 17 16
		f 4 51 -61 -4 -49
		mu 0 4 56 1 0 57
		f 4 13 -62 -52 -11
		mu 0 4 58 12 1 56
		f 4 0 -63 -14 -2
		mu 0 4 59 109 12 58
		f 4 -64 -1 22 24
		mu 0 4 114 13 111 60
		f 4 -65 -25 27 38
		mu 0 4 32 26 116 61
		f 4 120 -66 -39 35
		mu 0 4 62 42 32 61
		f 4 -50 52 -72 -6
		mu 0 4 3 2 5 4
		f 4 -73 -53 -12 14
		mu 0 4 17 5 2 15
		f 4 -74 -15 -3 4
		mu 0 4 18 17 15 14
		f 4 -77 81 77 9
		mu 0 4 10 9 107 108
		f 4 -70 74 -81 -9
		mu 0 4 19 18 9 8
		f 4 -82 -75 -5 7
		mu 0 4 107 9 18 14
		f 4 -83 -8 23 26
		mu 0 4 112 29 110 27
		f 4 -142 147 142 32
		mu 0 4 36 35 38 41
		f 4 92 90 -88 -90
		mu 0 4 63 64 65 66
		f 4 93 105 -89 -91
		mu 0 4 64 67 68 65
		f 4 -16 17 -93 -19
		mu 0 4 69 70 64 63
		f 4 16 104 -94 -18
		mu 0 4 70 71 67 64
		f 4 87 85 -98 -85
		mu 0 4 66 65 21 20
		f 4 88 106 -99 -86
		mu 0 4 65 68 24 21
		f 4 -105 99 20 -101
		mu 0 4 67 71 72 73
		f 4 -106 100 91 -102
		mu 0 4 68 67 73 74
		f 4 -107 101 86 -103
		mu 0 4 24 68 74 75
		f 4 -108 102 96 -104
		mu 0 4 25 24 75 76
		f 4 158 -164 168 164
		mu 0 4 77 78 79 80
		f 4 131 128 -113 -128
		mu 0 4 81 82 83 84
		f 4 -115 -121 113 29
		mu 0 4 85 42 62 86
		f 4 -122 114 59 -116
		mu 0 4 43 42 85 87
		f 4 -145 150 145 -117
		mu 0 4 45 44 88 89
		f 4 -124 116 41 -118
		mu 0 4 46 45 89 90
		f 4 -129 132 129 -119
		mu 0 4 83 82 91 92
		f 4 -136 139 136 -120
		mu 0 4 50 49 93 94
		f 4 169 -153 157 -165
		mu 0 4 80 95 96 77
		f 4 42 124 -132 -44
		mu 0 4 47 46 82 81
		f 4 -133 -125 117 44
		mu 0 4 91 82 46 90
		f 4 159 -163 167 163
		mu 0 4 78 52 55 79
		f 4 112 125 -139 -110
		mu 0 4 84 83 49 48
		f 4 -140 -126 118 110
		mu 0 4 93 49 83 92
		f 4 -79 83 -147 -32
		mu 0 4 31 30 35 34
		f 4 -148 -84 -27 30
		mu 0 4 38 35 30 115
		f 4 28 39 -149 -31
		mu 0 4 115 33 39 38
		f 4 -150 -40 36 122
		mu 0 4 44 39 33 43
		f 4 -151 -123 115 33
		mu 0 4 88 44 43 87
		f 4 -158 -171 175 -154
		mu 0 4 77 96 97 98
		f 4 176 -155 -159 153
		mu 0 4 98 99 78 77
		f 4 177 -156 -160 154
		mu 0 4 99 100 52 78
		f 4 178 174 -161 155
		mu 0 4 100 101 53 52
		f 4 -167 161 -134 137
		mu 0 4 55 54 102 103
		f 4 -168 -138 -109 111
		mu 0 4 79 55 103 104
		f 4 -169 -112 -127 130
		mu 0 4 80 79 104 105
		f 4 -166 -170 -131 -48
		mu 0 4 106 95 80 105
		f 4 -176 -47 43 -172
		mu 0 4 98 97 47 81
		f 4 127 -173 -177 171
		mu 0 4 81 84 99 98
		f 4 109 -174 -178 172
		mu 0 4 84 48 100 99
		f 4 134 151 -179 173
		mu 0 4 48 51 101 100;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SB_MiddleFloor_grp" -p "SecurityBuilding_old_grp";
	rename -uid "450EAD6F-49A1-31CD-DE45-39BD0684C310";
	setAttr ".rp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
	setAttr ".sp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
createNode transform -n "MiddleFloor_Wall" -p "SB_MiddleFloor_grp";
	rename -uid "22C5E01B-409F-EFEF-002B-9598A033C837";
	setAttr ".rp" -type "double3" -0.89891113281250046 7.5744897460937501 8.5512097167968744 ;
	setAttr ".sp" -type "double3" -0.89891113281250046 7.5744897460937501 8.5512097167968744 ;
createNode mesh -n "MiddleFloor_WallShape" -p "MiddleFloor_Wall";
	rename -uid "6972F598-457D-3DED-6F64-8DA5A4291D00";
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
	setAttr ".pv" -type "double2" 0.625 0.625 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape9" -p "MiddleFloor_Wall";
	rename -uid "C657031A-4DD4-30D2-B4E6-7ABA38BADE70";
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
	setAttr ".pv" -type "double2" 0.625 0.625 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 83 ".uvst[0].uvsp[0:82]" -type "float2" 0.45353007 0.48400584
		 0.35076368 0.4839893 0.35078108 0.3757816 0.45354748 0.37579811 0.56208849 0.48057792
		 0.46237522 0.63924682 0.48855886 0.4683094 0.57782483 0.58129555 0.6632874 0.47882694
		 0.66327024 0.5813098 0.56502521 0.48402378 0.56504261 0.37581608 0.57786041 0.36762521
		 0.66330588 0.36763942 0.46237302 0.55136454 0.4272337 0.46830645 0.3480522 0.63924968
		 0.34805 0.5513674 0.49238846 0.36761099 0.34804723 0.44150552 0.46237025 0.44150263
		 0.3855212 0.47878072 0.38553971 0.36759317 0.56774586 0.55136192 0.35370347 0.46830294
		 0.56774306 0.44149998 0.38550413 0.58126354 0.56500781 0.59223151 0.45351267 0.59221357
		 0.35074627 0.592197 0.4534952 0.70042127 0.5649904 0.70043921 0.35072887 0.7004047
		 0.35079855 0.26757392 0.45356488 0.26759046 0.56506008 0.2676084 0.17182364 0.47874513
		 0.2786724 0.47876292 0.27865535 0.58124572 0.17180657 0.58122796 0.27869093 0.36757541
		 0.17184214 0.36755762 0.46236748 0.33164069 0.34804446 0.33164358 0.34804171 0.22178164
		 0.4623647 0.22177877 0.56774032 0.33163804 0.56773758 0.22177611 0.4578954 0.46998483
		 0.45788187 0.36507136 0.56835032 0.36505711 0.5683639 0.46997064 0.45791006 0.58380949
		 0.56837857 0.58379525 0.34742683 0.46999907 0.34741336 0.3650856 0.34744149 0.58382374
		 0.67881882 0.3650429 0.67883235 0.4699564 0.67884701 0.583781 0.45356685 0.25525448
		 0.74396682 0.47884038 0.74398541 0.36765286 0.56506205 0.25527245 0.35080051 0.25523794
		 0.35080159 0.24844164 0.46237743 0.7271018 0.56775028 0.72709918 0.23697306 0.58383793
		 0.23694493 0.36509979 0.23695843 0.47001332 0.34805441 0.72710472 0.49236995 0.47879848
		 0.49235287 0.5812813 0.42723313 0.48057148 0.3537029 0.48056796 0.57784188 0.47881272
		 0.48855826 0.4805744 0.56208909 0.46831289 0.56774807 0.6392442 0.74394977 0.58132321
		 0.45356792 0.24845815 0.56506312 0.24847612;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 69 ".vt[0:68]"  -0.89891112 7.57448959 8.55120945 1.10108888 7.57448959 8.55120945
		 -0.89891112 9.97253513 8.55120945 1.10108888 9.97253513 8.55120945 1.10108888 9.97253513 -1.54886293
		 1.10108888 7.57448959 -1.54886293 -0.89891112 9.97253513 -1.94886291 -0.89891112 7.57448959 -1.94886291
		 -2.89829111 9.97253513 -1.54886293 -2.89829111 7.57448959 -1.54886293 -2.89829111 9.97253513 -1.94886291
		 -2.89829111 7.57448959 -1.94886291 -0.89891112 12.57426643 8.55120945 1.10108888 12.57426643 8.55120945
		 1.10108888 12.57426643 -1.54886293 -0.89891112 12.57426643 -1.94886291 -2.89829111 12.57426643 -1.94886291
		 -2.89829111 12.57426643 -1.54886293 -4.89829111 9.97253513 -1.54886293 -4.89829111 9.97253513 -1.94886291
		 -4.89829111 12.57426643 -1.54886293 -4.89829111 12.57426643 -1.94886291 -12.39891148 9.97253513 -1.54886293
		 -12.39891148 9.97253513 -1.94886291 -12.39891148 12.57426643 -1.54886293 -12.39891148 12.57426643 -1.94886291
		 -4.89829111 7.57448959 -1.54886293 -4.89829111 7.57448959 -1.94886291 -12.39891148 7.57448959 -1.54886293
		 -12.39891148 7.57448959 -1.94886291 1.10108888 12.57426643 3.5011735 1.10108888 9.97253513 3.5011735
		 1.10108888 7.57448959 3.5011735 1.10108888 12.57426643 6.026191235 1.10108888 9.97253513 6.026191235
		 1.10108888 7.57448959 6.026191235 1.10108888 7.57448959 0.9761548 1.10108888 9.97253513 0.9761548
		 1.10108888 12.57426643 0.9761548 -9.89870453 7.57448959 -1.94886291 -9.89870453 9.97253513 -1.94886291
		 -9.89870453 12.57426643 -1.94886291 -7.3984971 7.57448959 -1.94886291 -7.3984971 9.97253513 -1.94886291
		 -7.3984971 12.57426643 -1.94886291 -9.89870453 12.57426643 -1.54886293 -9.89870453 9.97253513 -1.54886293
		 -9.89870453 7.57448959 -1.54886293 -7.3984971 12.57426643 -1.54886293 -7.3984971 9.97253513 -1.54886293
		 -7.3984971 7.57448959 -1.54886293 -0.89891112 7.57448959 3.5011735 -0.89891112 9.97253513 3.5011735
		 -0.89891112 12.57426643 3.5011735 -0.89891112 7.57448959 0.9761548 -0.89891112 9.97253513 0.9761548
		 -0.89891112 12.57426643 0.9761548 -0.89891112 7.57448959 6.026191235 -0.89891112 9.97253513 6.026191235
		 -0.89891112 12.57426643 6.026191235 -0.89891112 9.97253513 -1.54886293 -0.89891112 7.57448959 -1.54886293
		 1.10108888 9.97253513 -1.83672178 0.98894793 9.97253513 -1.94886291 0.98894793 7.57448959 -1.94886291
		 1.10108888 7.57448959 -1.83672178 -0.89891112 12.57426643 -1.54886293 1.10108888 12.57426643 -1.83672178
		 0.98894793 12.57426643 -1.94886291;
	setAttr -s 111 ".ed[0:110]"  0 2 0 1 3 0 2 58 1 3 34 1 4 5 1 5 36 0 5 65 0
		 7 64 0 6 7 1 8 9 0 6 10 1 8 10 0 7 11 0 10 11 0 9 11 0 2 12 0 3 13 0 4 14 1 13 33 0
		 12 59 0 14 67 0 6 15 1 15 68 0 10 16 0 15 16 0 8 17 1 8 18 0 10 19 0 18 19 0 17 20 0
		 18 20 1 16 21 0 19 21 1 18 49 0 19 43 0 20 48 0 22 24 0 21 44 0 23 25 0 18 26 0 19 27 0
		 26 27 0 22 28 0 26 50 0 23 29 0 27 42 0 30 38 0 31 37 1 32 35 0 30 31 1 31 32 1 33 30 0
		 34 31 1 35 1 0 33 34 1 34 35 1 36 32 0 37 4 1 38 14 0 36 37 1 37 38 1 39 29 0 40 23 0
		 39 40 1 41 25 0 40 41 1 42 39 0 43 40 0 42 43 1 44 41 0 43 44 1 45 24 0 46 22 0 45 46 1
		 47 28 0 46 47 1 48 45 0 49 46 0 48 49 1 50 47 0 49 50 1 51 57 0 52 55 1 53 56 0 51 52 1
		 52 53 1 54 51 0 56 66 0 54 55 1 55 56 1 57 0 0 58 52 1 59 53 0 57 58 1 58 59 1 61 54 0
		 61 9 0 66 17 0 66 60 0 61 60 0 62 63 1 63 68 0 68 67 0 67 62 0 62 65 0 65 64 0 64 63 0
		 6 63 1 55 60 1 62 4 1 60 8 1;
	setAttr -s 43 -ch 172 ".fc[0:42]" -type "polyFaces" 
		f 4 50 -57 59 -48
		mu 0 4 0 1 2 3
		f 4 -10 11 13 -15
		mu 0 4 4 77 6 78
		f 4 8 12 -14 -11
		mu 0 4 8 9 7 76
		f 4 49 47 60 -47
		mu 0 4 10 0 3 11
		f 4 10 23 -25 -22
		mu 0 4 8 76 12 13
		f 4 -12 26 28 -28
		mu 0 4 6 77 74 15
		f 4 25 29 -31 -27
		mu 0 4 5 16 17 14
		f 4 -24 27 32 -32
		mu 0 4 12 76 72 18
		f 4 30 35 78 -34
		mu 0 4 14 17 19 20
		f 4 -33 34 70 -38
		mu 0 4 18 72 21 22
		f 4 -29 39 41 -41
		mu 0 4 15 74 75 24
		f 4 33 80 -44 -40
		mu 0 4 14 20 25 23
		f 4 -35 40 45 68
		mu 0 4 21 72 73 26
		f 4 54 52 -50 -52
		mu 0 4 27 28 0 10
		f 4 55 -49 -51 -53
		mu 0 4 28 29 1 0
		f 4 3 -55 -19 -17
		mu 0 4 30 28 27 31
		f 4 -54 -56 -4 -2
		mu 0 4 32 29 28 30
		f 4 -60 -6 -5 -58
		mu 0 4 3 2 33 34
		f 4 -61 57 17 -59
		mu 0 4 11 3 34 35
		f 4 -63 -64 61 -45
		mu 0 4 36 37 38 39
		f 4 -66 62 38 -65
		mu 0 4 40 37 36 41
		f 4 -68 -69 66 63
		mu 0 4 37 21 26 38
		f 4 -71 67 65 -70
		mu 0 4 22 21 37 40
		f 4 -74 71 -37 -73
		mu 0 4 42 43 44 45
		f 4 -76 72 42 -75
		mu 0 4 46 42 45 47
		f 4 -79 76 73 -78
		mu 0 4 20 19 43 42
		f 4 -81 77 75 -80
		mu 0 4 25 20 42 46
		f 4 -85 81 93 91
		mu 0 4 48 49 50 51
		f 4 -86 -92 94 92
		mu 0 4 52 48 51 53
		f 4 -89 86 84 82
		mu 0 4 54 55 49 48
		f 4 -90 -83 85 83
		mu 0 4 56 54 48 52
		f 4 -94 90 0 2
		mu 0 4 51 50 57 58
		f 4 -95 -3 15 19
		mu 0 4 53 51 58 59
		f 4 100 101 102 103
		mu 0 4 60 81 82 63
		f 4 -101 104 105 106
		mu 0 4 81 60 64 65
		f 4 107 -107 -8 -9
		mu 0 4 8 61 80 9
		f 4 -100 95 88 108
		mu 0 4 70 69 55 54
		f 4 4 6 -105 109
		mu 0 4 34 33 64 60
		f 4 99 110 9 -97
		mu 0 4 67 66 5 79
		f 4 -109 89 87 98
		mu 0 4 70 54 56 68
		f 4 -110 -104 -21 -18
		mu 0 4 34 60 63 35
		f 4 -108 21 22 -102
		mu 0 4 61 8 13 62
		f 4 -111 -99 97 -26
		mu 0 4 5 66 71 16;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 2 
		6 0 
		77 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "middlefloor_platform" -p "SB_MiddleFloor_grp";
	rename -uid "AE982580-4B3F-394A-4BAA-3180C030F3D0";
	setAttr ".rp" -type "double3" 12.401088867187502 8.1742675781250007 0 ;
	setAttr ".sp" -type "double3" 12.401088867187502 8.1742675781250007 0 ;
createNode mesh -n "middlefloor_platformShape" -p "middlefloor_platform";
	rename -uid "576177DB-4840-2FBF-E764-4DA711BFC73F";
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
	setAttr ".pv" -type "double2" 0.5 1 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape10" -p "middlefloor_platform";
	rename -uid "5402E6FD-41E6-7A63-1A59-36AA3F92FC87";
	setAttr -k off ".v";
	setAttr ".io" yes;
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
	setAttr ".pv" -type "double2" 0.5 1 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 25 ".uvst[0].uvsp[0:24]" -type "float2" 0.28822875 0.37125614
		 0.28823495 0.47445065 0.11857395 0.4744609 0.11856772 0.37126637 0.2360072 0.45890075
		 0.014120325 0.45892775 0.67978096 0.45884675 0.62755072 0.37123561 0.45789784 0.4900071
		 0.45789409 0.45887375 0.62755698 0.4744302 0.45789599 0.4744404 0.90167165 0.4899531
		 0.90166783 0.45881969 0.79721802 0.47441989 0.79722422 0.57761443 0.62756324 0.57762474
		 0.45790225 0.57763499 0.28824121 0.57764518 0.11858019 0.57765543 0.67978472 0.4899801
		 0.45788974 0.37124589 0.236011 0.49003413 0.014124118 0.49006116 0.79721177 0.37122539;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".vt[0:19]"  7.20108747 8.17426777 8.54667759 12.40108871 8.17426777 8.54667759
		 7.20108747 8.17426777 -8.55185413 12.40108871 8.17426777 -8.55185413 7.20108747 7.5744853 8.54667759
		 7.20108747 7.5744853 -8.55185413 7.20108747 7.5744853 -0.002588501 7.20108747 8.17426777 -0.002588501
		 12.40108871 8.17426777 -0.002588501 7.20108747 7.5744853 -4.2772212 7.20108747 8.17426777 -4.2772212
		 12.40108871 8.17426777 -4.2772212 7.20108747 7.5744853 4.27204418 7.20108747 8.17426777 4.27204418
		 12.40108871 8.17426777 4.27204418 9.80108833 8.17426777 8.54667759 9.80108833 8.17426777 4.27204418
		 9.80108833 8.17426777 -0.002588501 9.80108833 8.17426777 -4.2772212 9.80108833 8.17426777 -8.55185413;
	setAttr -s 31 ".ed[0:30]"  0 15 0 0 13 0 1 14 0 2 19 0 0 4 0 2 5 0 4 12 0
		 6 9 0 7 10 0 8 11 0 6 7 1 7 17 1 9 5 0 10 2 0 11 3 0 9 10 1 10 18 1 12 6 0 13 7 0
		 14 8 0 12 13 1 13 16 1 15 1 0 16 14 1 17 8 1 18 11 1 19 3 0 15 16 1 16 17 1 17 18 1
		 18 19 1;
	setAttr -s 12 -ch 48 ".fc[0:11]" -type "polyFaces" 
		f 4 16 30 -4 -14
		mu 0 4 0 1 2 3
		f 4 15 13 5 -13
		mu 0 4 4 22 23 5
		f 4 20 18 -11 -18
		mu 0 4 6 20 8 9
		f 4 21 28 -12 -19
		mu 0 4 7 10 11 21
		f 4 10 8 -16 -8
		mu 0 4 9 8 22 4
		f 4 11 29 -17 -9
		mu 0 4 21 11 1 0
		f 4 1 -21 -7 -5
		mu 0 4 12 20 6 13
		f 4 0 27 -22 -2
		mu 0 4 24 14 10 7
		f 4 -28 22 2 -24
		mu 0 4 10 14 15 16
		f 4 -29 23 19 -25
		mu 0 4 11 10 16 17
		f 4 -30 24 9 -26
		mu 0 4 1 11 17 18
		f 4 -31 25 14 -27
		mu 0 4 2 1 18 19;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "middlefloor_floor" -p "SB_MiddleFloor_grp";
	rename -uid "FF015ABD-437A-76DE-50A6-E5811B51DDA6";
	setAttr ".rp" -type "double3" -12.399130859375001 7.574489135742188 -8.5518518066406255 ;
	setAttr ".sp" -type "double3" -12.399130859375001 7.574489135742188 -8.5518518066406255 ;
createNode mesh -n "middlefloor_floorShape" -p "middlefloor_floor";
	rename -uid "22FF3946-4F62-1DA1-5BBA-508C8DB1F5D6";
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
	setAttr ".pv" -type "double2" 0.48417774067564401 0.39737484151292612 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape11" -p "middlefloor_floor";
	rename -uid "938E8DF7-461C-CCDA-699F-3FBEA6ED5FA2";
	setAttr -k off ".v";
	setAttr ".io" yes;
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
	setAttr ".pv" -type "double2" 0.48417774067564401 0.39737484151292612 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 102 ".uvst[0].uvsp[0:101]" -type "float2" 0.22289518 0.28762203
		 0.31517407 0.28760535 0.315189 0.37010628 0.22291014 0.37012303 0.22292382 0.44565737
		 0.31520268 0.44564062 0.31521636 0.52117497 0.22293749 0.52119166 0.59937876 0.52112347
		 0.59936506 0.44558913 0.69285786 0.4455722 0.69287151 0.52110654 0.40745297 0.28758863
		 0.34743682 0.48091805 0.5058586 0.37007177 0.4074679 0.37008959 0.40749529 0.52115822
		 0.40748158 0.44562393 0.50587231 0.44560611 0.50588596 0.5211404 0.31522635 0.57614267
		 0.22294742 0.57615942 0.22296265 0.65998524 0.31524152 0.65996855 0.31525671 0.74379432
		 0.22297782 0.74381101 0.40753561 0.74377757 0.40752041 0.65995187 0.47886449 0.65993893
		 0.47887969 0.74376464 0.21253067 0.52000093 0.44490939 0.46796334 0.66582787 0.48091659
		 0.55536866 0.4809171 0.29089105 0.60881323 0.29088524 0.69762039 0.21253508 0.4528091
		 0.29090127 0.45281422 0.65892005 0.69764441 0.65892589 0.60883731 0.78160411 0.60884529
		 0.78159833 0.69765252 0.65893167 0.5200302 0.65893608 0.4528383 0.7816143 0.45284635
		 0.78160989 0.52003819 0.47884929 0.57611305 0.40750521 0.57612598 0.62153739 0.57608718
		 0.62155259 0.65991306 0.55020851 0.659926 0.55019337 0.57610011 0.55022371 0.7437517
		 0.62156773 0.74373877 0.6928966 0.65990013 0.69288141 0.5760743 0.69291174 0.7437259
		 0.31515914 0.20510438 0.22288021 0.20512107 0.40743801 0.20508763 0.50582868 0.20506981
		 0.24996409 0.46796423 0.13416886 0.45280397 0.41356349 0.69762838 0.4135693 0.60882121
		 0.53624767 0.60882926 0.53624183 0.69763637 0.53625339 0.52002215 0.41357511 0.52001417
		 0.41357949 0.45282227 0.5362578 0.45283026 0.13417768 0.31842023 0.21254387 0.31842536
		 0.21253946 0.3856172 0.1341733 0.38561207 0.29090565 0.38562232 0.29091004 0.31843048
		 0.4135839 0.38563037 0.41358829 0.31843847 0.53626221 0.38563842 0.53626662 0.31844652
		 0.65894043 0.3856464 0.65894485 0.3184545 0.78161871 0.38565445 0.78162307 0.31846255
		 0.21254826 0.25123346 0.1341821 0.25122833 0.29091445 0.25123858 0.41359273 0.2512466
		 0.53627098 0.25125462 0.65894926 0.25126266 0.78162748 0.25127068 0.55536866 0.46796283
		 0.66582781 0.46796232 0.34743676 0.46796378 0.29089686 0.52000612 0.50584364 0.2875708
		 0.44490948 0.4809176 0.13416448 0.51999587 0.24996415 0.48091853 0.59935141 0.37005484
		 0.69284415 0.37003785;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 92 ".vt[0:91]"  -12.39913082 7.57448912 1.74321711 -6.39553976 7.57448912 1.74321711
		 -12.39913082 7.57448912 -8.55185223 -6.39553976 7.57448912 -8.55185223 -0.89891112 7.57448912 1.74321711
		 -0.89891112 7.57448912 -8.55185223 -6.39553976 7.57448912 8.5466814 -0.89891112 7.57448912 8.5466814
		 -12.39913082 7.57448912 -1.83672297 -6.39553976 7.57448912 -1.83672297 -0.89891112 7.57448912 -1.83672297
		 1.10108888 7.57448912 -1.83672297 1.10108888 7.57448912 -8.55185223 7.20108652 7.57448912 -1.83672297
		 7.20108652 7.57448912 -8.55185223 1.10108888 7.57448912 8.54667759 7.20108652 7.57448912 8.54667759
		 -12.39913082 7.17554569 1.74321711 -6.39553976 7.17554569 1.74321711 -6.39553976 7.17554569 8.5466814
		 -12.39913082 7.17554569 -8.55185127 -6.39553976 7.17554569 -8.55185127 12.40108871 7.17554569 1.74321711
		 12.40108871 7.17554569 8.5466814 12.40108871 7.17554569 -8.55185127 4.15109015 7.57448912 -8.55185223
		 4.15109015 7.57448912 -1.83672297 4.15109015 7.57448912 8.54667759 1.10108888 7.57448912 3.35497737
		 4.15109015 7.57448912 3.35497737 7.20108652 7.57448912 3.35497737 -12.39913082 7.57448912 -5.19428778
		 -6.39553976 7.57448912 -5.19428778 -0.89891112 7.57448912 -5.19428778 1.10108888 7.57448912 -5.19428778
		 4.15109015 7.57448912 -5.19428778 7.20108652 7.57448912 -5.19428778 1.10108888 7.57448912 0.7591272
		 4.15109015 7.57448912 0.7591272 7.20108652 7.57448912 0.7591272 1.10108888 7.57448912 5.95082808
		 4.15109015 7.57448912 5.95082808 7.20108652 7.57448912 5.95082808 -3.64722538 7.57448912 -8.55185223
		 -3.64722538 7.57448912 -5.19428778 -3.64722538 7.57448912 -1.83672297 -3.64722538 7.57448912 1.74321711
		 -3.64722538 7.57448912 8.5466814 -9.39733505 7.57448912 -8.55185223 -9.39733505 7.57448912 -5.19428778
		 -9.39733505 7.57448912 -1.83672297 -9.39733505 7.57448912 1.74321711 -9.39733505 7.17554569 1.74321711
		 -9.39733505 7.17554569 -8.55185127 -0.89891112 7.57448912 5.14494944 -3.64722538 7.57448912 5.14494944
		 -6.39553976 7.57448912 5.14494944 -6.39553976 7.17554569 5.14494944 12.40108871 7.17554569 5.14494944
		 3.0027747154 7.17554569 8.5466814 3.0027747154 7.17554569 5.14494944 3.0027747154 7.17554569 1.74321711
		 3.0027747154 7.17554569 -8.55185127 7.70193243 7.17554569 8.5466814 7.70193243 7.17554569 5.14494944
		 7.70193243 7.17554569 1.74321711 7.70193243 7.17554569 -8.55185127 -1.6963824 7.17554569 8.5466814
		 -1.6963824 7.17554569 5.14494944 -1.6963824 7.17554569 1.74321711 -1.6963824 7.17554569 -8.55185127
		 -12.39913082 7.17554569 -3.4043169 -9.39733505 7.17554569 -3.4043169 -6.39553976 7.17554569 -3.4043169
		 -1.6963824 7.17554569 -3.4043169 3.0027747154 7.17554569 -3.4043169 7.70193243 7.17554569 -3.4043169
		 12.40108871 7.17554569 -3.4043169 -12.39913082 7.17554569 -5.97808409 -9.39733505 7.17554569 -5.97808409
		 -6.39553976 7.17554569 -5.97808409 -1.6963824 7.17554569 -5.97808409 3.0027747154 7.17554569 -5.97808409
		 7.70193243 7.17554569 -5.97808409 12.40108871 7.17554569 -5.97808409 -12.39913082 7.17554569 -0.83054996
		 -9.39733505 7.17554569 -0.83054996 -6.39553976 7.17554569 -0.83054996 -1.6963824 7.17554569 -0.83054996
		 3.0027747154 7.17554569 -0.83054996 7.70193243 7.17554569 -0.83054996 12.40108871 7.17554569 -0.83054996;
	setAttr -s 157 ".ed[0:156]"  0 51 0 0 8 0 1 9 0 2 48 0 1 46 1 3 43 0 4 10 0
		 1 56 0 4 54 0 6 47 0 8 31 0 9 32 0 10 33 0 8 50 1 9 45 1 10 11 0 5 12 0 11 34 1 11 26 1
		 12 25 0 13 36 0 11 37 0 13 39 0 15 27 0 0 17 0 1 18 0 17 52 0 6 19 0 18 57 0 17 85 0
		 18 87 0 20 53 0 18 69 0 19 67 0 22 58 0 21 70 0 22 91 0 25 14 0 26 13 1 27 16 0 25 35 1
		 26 38 1 28 40 0 29 41 1 30 42 0 28 29 1 29 30 1 31 2 0 32 3 0 33 5 0 34 12 1 35 26 1
		 36 14 0 31 49 1 32 44 1 33 34 1 34 35 1 35 36 1 37 28 0 38 29 1 39 30 0 37 38 1 38 39 1
		 40 15 0 41 27 1 42 16 0 40 41 1 41 42 1 43 5 0 44 33 1 45 10 1 46 4 1 47 7 0 43 44 1
		 44 45 1 45 46 1 46 55 1 48 3 0 49 32 1 50 9 1 51 1 0 52 18 0 53 21 0 48 49 1 49 50 1
		 50 51 1 51 52 1 52 86 1 54 7 0 55 47 1 56 6 0 57 19 0 58 23 0 54 55 1 55 56 1 56 57 1
		 57 68 1 59 63 0 60 64 1 61 65 0 62 66 0 59 60 1 60 61 1 61 89 1 63 23 0 64 58 1 65 22 0
		 66 24 0 63 64 1 64 65 1 65 90 1 67 59 0 68 60 1 69 61 0 70 62 0 67 68 1 68 69 1 69 88 1
		 71 78 0 72 79 1 73 80 0 74 81 1 75 82 1 76 83 1 77 84 0 71 72 1 72 73 1 73 74 1 74 75 1
		 75 76 1 76 77 1 78 20 0 79 53 1 80 21 0 81 70 1 82 62 1 83 66 1 84 24 0 78 79 1 79 80 1
		 80 81 1 81 82 1 82 83 1 83 84 1 85 71 0 86 72 1 87 73 0 88 74 1 89 75 1 90 76 1 91 77 0
		 85 86 1 86 87 1 87 88 1 88 89 1 89 90 1 90 91 1;
	setAttr -s 66 -ch 264 ".fc[0:65]" -type "polyFaces" 
		f 4 83 78 48 -78
		mu 0 4 0 1 2 3
		f 4 73 69 49 -69
		mu 0 4 4 5 6 7
		f 4 93 89 72 -89
		mu 0 4 8 9 10 11
		f 4 85 80 2 -80
		mu 0 4 12 96 14 15
		f 4 -71 75 71 6
		mu 0 4 16 17 18 19
		f 4 -50 55 50 -17
		mu 0 4 7 6 20 21
		f 4 40 57 52 -38
		mu 0 4 22 23 24 25
		f 4 -39 41 62 -23
		mu 0 4 26 27 28 29
		f 4 -81 86 81 -26
		mu 0 4 97 13 94 31
		f 4 -91 95 91 -28
		mu 0 4 32 33 92 93
		f 4 -82 87 152 -31
		mu 0 4 95 30 36 37
		f 4 108 105 92 -105
		mu 0 4 38 39 40 41
		f 4 110 156 -37 -107
		mu 0 4 42 43 44 45
		f 4 -51 56 -41 -20
		mu 0 4 21 20 23 22
		f 4 61 -42 -19 21
		mu 0 4 46 28 27 47
		f 4 66 -44 -46 42
		mu 0 4 48 49 50 51
		f 4 -47 43 67 -45
		mu 0 4 52 50 49 53
		f 4 84 79 11 -79
		mu 0 4 1 12 15 2
		f 4 -70 74 70 12
		mu 0 4 6 5 17 16
		f 4 -56 -13 15 17
		mu 0 4 20 6 16 47
		f 4 -57 -18 18 -52
		mu 0 4 23 20 47 27
		f 4 -58 51 38 20
		mu 0 4 24 23 27 26
		f 4 45 -60 -62 58
		mu 0 4 51 50 28 46
		f 4 -63 59 46 -61
		mu 0 4 29 28 50 52
		f 4 -65 -67 63 23
		mu 0 4 54 49 48 55
		f 4 -68 64 39 -66
		mu 0 4 53 49 54 56
		f 4 -49 54 -74 -6
		mu 0 4 3 2 5 4
		f 4 -75 -55 -12 14
		mu 0 4 17 5 2 15
		f 4 -76 -15 -3 4
		mu 0 4 18 17 15 14
		f 4 -90 94 90 9
		mu 0 4 10 9 100 101
		f 4 53 -84 -4 -48
		mu 0 4 57 1 0 58
		f 4 13 -85 -54 -11
		mu 0 4 59 12 1 57
		f 4 0 -86 -14 -2
		mu 0 4 60 96 12 59
		f 4 -87 -1 24 26
		mu 0 4 94 13 99 61
		f 4 151 -88 -27 29
		mu 0 4 62 36 30 98
		f 4 -72 76 -94 -9
		mu 0 4 19 18 9 8
		f 4 -95 -77 -5 7
		mu 0 4 100 9 18 14
		f 4 -96 -8 25 28
		mu 0 4 92 33 97 31
		f 4 -106 109 106 34
		mu 0 4 40 39 42 45
		f 4 115 112 -102 -112
		mu 0 4 63 64 65 66
		f 4 -103 -113 116 113
		mu 0 4 67 65 64 68
		f 4 117 154 -104 -114
		mu 0 4 68 69 70 67
		f 4 101 98 -109 -98
		mu 0 4 66 65 39 38
		f 4 -110 -99 102 99
		mu 0 4 42 39 65 67
		f 4 103 155 -111 -100
		mu 0 4 67 70 43 42
		f 4 -92 96 -116 -34
		mu 0 4 35 34 64 63
		f 4 -117 -97 -29 32
		mu 0 4 68 64 34 95
		f 4 30 153 -118 -33
		mu 0 4 95 37 69 68
		f 4 138 -120 -126 118
		mu 0 4 71 72 73 74
		f 4 -127 119 139 -121
		mu 0 4 75 73 72 76
		f 4 -128 120 140 -122
		mu 0 4 77 75 76 78
		f 4 -129 121 141 -123
		mu 0 4 79 77 78 80
		f 4 -130 122 142 -124
		mu 0 4 81 79 80 82
		f 4 -131 123 143 -125
		mu 0 4 83 81 82 84
		f 4 -133 -139 131 31
		mu 0 4 85 72 71 86
		f 4 -140 132 82 -134
		mu 0 4 76 72 85 87
		f 4 -141 133 35 -135
		mu 0 4 78 76 87 88
		f 4 -142 134 114 -136
		mu 0 4 80 78 88 89
		f 4 -143 135 100 -137
		mu 0 4 82 80 89 90
		f 4 -144 136 107 -138
		mu 0 4 84 82 90 91
		f 4 125 -146 -152 144
		mu 0 4 74 73 36 62
		f 4 -153 145 126 -147
		mu 0 4 37 36 73 75
		f 4 -154 146 127 -148
		mu 0 4 69 37 75 77
		f 4 -155 147 128 -149
		mu 0 4 70 69 77 79
		f 4 -156 148 129 -150
		mu 0 4 43 70 79 81
		f 4 -157 149 130 -151
		mu 0 4 44 43 81 83;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SB_BottomFloor_grp" -p "SecurityBuilding_old_grp";
	rename -uid "FFB0880A-4728-5178-E597-1880C1D46708";
	setAttr ".rp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
	setAttr ".sp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
createNode transform -n "bottomfloor_wall1" -p "SB_BottomFloor_grp";
	rename -uid "C09734DC-4A8D-95B3-0779-06AA8D0A7481";
	setAttr ".rp" -type "double3" -5.9947387695312502 1.5731939697265624 8.5466802978515624 ;
	setAttr ".sp" -type "double3" -5.9947387695312502 1.5731939697265624 8.5466802978515624 ;
createNode mesh -n "bottomfloor_wallShape1" -p "bottomfloor_wall1";
	rename -uid "15900FB7-4D2F-4A4A-0E6C-A2BFA684F09E";
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
	setAttr ".pv" -type "double2" 0.73060879111289978 0.23060880601406097 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape12" -p "bottomfloor_wall1";
	rename -uid "77C223E0-4D4F-F119-3617-EFA448109396";
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
	setAttr ".pv" -type "double2" 0.73060879111289978 0.23060880601406097 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 187 ".uvst[0].uvsp[0:186]" -type "float2" 0.31120753 0.46063742
		 0.46916664 0.44628784 0.46904254 0.59310633 0.31120521 0.4191972 0.4691602 0.38145873
		 0.367861 0.15281999 0.3978813 0.4191924 0.39788356 0.46063259 0.37896183 0.38146767
		 0.52533877 0.15279594 0.42406744 0.44629231 0.37896827 0.44629678 0.31121057 0.51588875
		 0.39788663 0.51588392 0.3978897 0.57113528 0.31121364 0.57114005 0.24248673 0.46064118
		 0.4690097 0.42064601 0.24248978 0.51589251 0.24249287 0.57114387 0.42407301 0.50238597
		 0.37897381 0.5023905 0.16281065 0.51589698 0.16281372 0.57114834 0.42407948 0.56742442
		 0.37898031 0.56742895 0.46899736 0.35577017 0.24248441 0.41920105 0.24248211 0.37776092
		 0.46898502 0.29089436 0.16280526 0.41920549 0.16280296 0.3777653 0.50300437 0.56741667
		 0.53683013 0.56741333 0.49210459 0.57112998 0.49210149 0.51587868 0.579063 0.51587379
		 0.57906604 0.57112515 0.56714165 0.47445521 0.50471663 0.47444671 0.50472999 0.37619442
		 0.567155 0.37620291 0.44229162 0.47443822 0.39547098 0.47443187 0.39548433 0.37617961
		 0.442305 0.37618592 0.49209845 0.46062735 0.49209619 0.41918716 0.57905769 0.41918233
		 0.5790599 0.46062252 0.29825813 0.47443631 0.38947824 0.47443864 0.38947436 0.62397337
		 0.29825431 0.62397099 0.61539227 0.59531653 0.52540648 0.59533024 0.52538389 0.44781885
		 0.61536974 0.44780508 0.48069826 0.47444102 0.54911602 0.47444275 0.5491122 0.62397742
		 0.48069444 0.62397575 0.43542069 0.59534407 0.36792868 0.59535444 0.36790612 0.44784293
		 0.43539816 0.44783267 0.66602445 0.51586896 0.66602755 0.57112032 0.5671283 0.57270753
		 0.50470328 0.57269907 0.44227824 0.57269055 0.39545757 0.57268417 0.66601908 0.4191775
		 0.66602135 0.46061763 0.54912364 0.17537323 0.48070589 0.17537144 0.38948587 0.17536908
		 0.29826581 0.17536676 0.75298589 0.51586413 0.75298899 0.57111549 0.50468987 0.67095131
		 0.56711489 0.67095983 0.39544421 0.67093647 0.44226485 0.67094284 0.75298053 0.41917267
		 0.75298285 0.46061286 0.46917868 0.56742001 0.16280758 0.46064565 0.34862351 0.67093009
		 0.34863693 0.57267779 0.34865034 0.47442555 0.34866369 0.37617329 0.34867707 0.27792102
		 0.61752999 0.62397921 0.6175338 0.47444454 0.30041409 0.4478533 0.30043668 0.59536469
		 0.30036899 0.15283033 0.53681815 0.44628111 0.44680691 0.65798646 0.39787906 0.37775221
		 0.49209392 0.377747 0.57905537 0.37774217 0.66601682 0.37773731 0.75297827 0.37773249
		 0.298262 0.32490155 0.38948205 0.32490388 0.48070207 0.3249062 0.54911983 0.32490799
		 0.61753762 0.32490972 0.30039153 0.30034181 0.36788356 0.30033144 0.43537557 0.30032119
		 0.52536136 0.30030736 0.61534715 0.30029365 0.52542901 0.74284172 0.43544328 0.74285555
		 0.36795124 0.7428658 0.30045921 0.74287629 0.53133905 0.39777803 0.61752617 0.77351403
		 0.47624749 0.39778477 0.40279496 0.39779383 0.32934237 0.39780283 0.61541486 0.74282801
		 0.61542296 0.79605055 0.32936078 0.5478763 0.40281332 0.5478673 0.52543718 0.79606426
		 0.47626591 0.54785824 0.43545139 0.79607809 0.53135753 0.54785138 0.36795938 0.79608834
		 0.58644921 0.54784471 0.58644956 0.5510779 0.32934803 0.44376111 0.32934761 0.4405278
		 0.40280014 0.4405188 0.40280056 0.44375205 0.47625279 0.44050974 0.47625321 0.44374299
		 0.32935345 0.48815185 0.32935303 0.48491859 0.40280563 0.48490959 0.40280604 0.48814285
		 0.47625822 0.48490053 0.47625864 0.48813385 0.53134441 0.440503 0.53134483 0.44373626
		 0.58643603 0.44049621 0.58643645 0.44372952 0.5313499 0.4848938 0.53135026 0.48812705
		 0.58644152 0.484887 0.58644187 0.48812026 0.54910839 0.77351224 0.58643073 0.3977713
		 0.38947055 0.77350819 0.48069057 0.77351058 0.2982505 0.77350581 0.39549771 0.27792728
		 0.61754143 0.17537495 0.5047434 0.27794212 0.44231838 0.2779336 0.56716841 0.27795058
		 0.50298595 0.38145533 0.53681165 0.38145193 0.42406103 0.3814632 0.43535304 0.15280968
		 0.61532462 0.15278217 0.30046734 0.79609871 0.53135794 0.5510847 0.47626626 0.55109149
		 0.40281379 0.55110049 0.32936114 0.55110955 0.44674939 0.35577446 0.44673705 0.29089862
		 0.50299793 0.50237811 0.53682363 0.50237477 0.4467946 0.59311056 0.31120291 0.37775701
		 0.50299239 0.44628444 0.46905488 0.65798217 0.46917218 0.50238156 0.44676173 0.42065024
		 0.46903017 0.52823049 0.44678223 0.52823472;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 155 ".vt[0:154]"  -6.40643787 1.57319403 8.54668045 -5.99473858 1.57319403 8.54668045
		 -6.40643787 3.97425604 8.54668045 -5.99473858 3.97425604 8.54668045 -6.40643787 3.97425604 -4.25164986
		 -5.99473858 3.97425604 -4.25164986 -6.40643787 1.57319403 -4.25164986 -5.99473858 1.57319403 -4.25164986
		 -6.40643787 7.17554379 8.54668045 -5.99473858 7.17554379 8.54668045 -5.99473858 7.17554379 -4.25164986
		 -6.40643787 7.17554379 -4.25164986 -6.40643787 3.97425604 -6.2425065 -5.99473858 3.97425604 -6.2425065
		 -6.40643787 7.17554379 -6.2425065 -5.99473858 7.17554379 -6.2425065 -6.40643787 3.97425604 -8.55082989
		 -5.99473858 3.97425604 -8.55082989 -6.40643787 7.17554379 -8.55082989 -5.99473858 7.17554379 -8.55082989
		 -6.40643787 1.57319522 -6.2425065 -5.99473858 1.57319522 -6.2425065 -6.40643787 1.57319522 -8.55082989
		 -5.99473858 1.57319522 -8.55082989 -5.99473858 7.17554379 -1.95075929 -5.99473858 3.97425604 -1.95075929
		 -5.99473858 1.57319403 -1.950755 -6.40643787 1.57319403 -1.74062192 -6.40643787 3.97425604 -1.74062562
		 -6.40643787 7.17554379 -1.74062562 -5.99473858 7.17554379 -1.53049314 -5.99473858 3.97425604 -1.53049314
		 -5.99473858 1.57319403 -1.53048885 4.50084591 7.17554379 -1.53049314 4.50084591 3.97425604 -1.53049314
		 4.50084591 3.97425604 -1.95075929 4.50084591 7.17554379 -1.95075929 4.50084591 1.57319403 -1.53048885
		 4.50084591 1.57319403 -1.950755 -6.40643787 3.97425604 3.5080936 -6.40643787 7.17554379 3.5080936
		 -5.99473858 7.17554379 3.5080936 -5.99473858 3.97425604 3.5080936 -5.99473858 1.57319403 3.50809574
		 -6.40643787 1.57319403 3.50809574 -5.99473858 1.57319403 0.98880309 -5.99473858 3.97425604 0.98880064
		 -5.99473858 7.17554379 0.98880064 -6.40643787 7.17554379 0.98880064 -6.40643787 3.97425604 0.98880064
		 -6.40643787 1.57319403 0.98880309 -6.40643787 3.97425604 6.027387142 -6.40643787 7.17554379 6.027387142
		 -5.99473858 7.17554379 6.027387142 -5.99473858 3.97425604 6.027387142 -5.99473858 1.57319403 6.027387619
		 -6.40643787 1.57319403 6.027387619 -6.40643787 5.57489967 8.54668045 -5.99473858 5.57489967 8.54668045
		 -5.99473858 5.57489967 6.027387142 -5.99473858 5.57489967 3.5080936 -5.99473858 5.57489967 0.98880064
		 -5.99473858 5.57489967 -1.53049314 4.50084591 5.57489967 -1.53049314 4.50084591 5.57489967 -1.95075929
		 -5.99473858 5.57489967 -1.95075929 -5.99473858 5.57489967 -4.25164986 -5.99473858 5.57489967 -6.2425065
		 -5.99473858 5.57489967 -8.55082989 -6.40643787 5.57489967 -8.55082989 -6.40643787 5.57489967 -6.2425065
		 -6.40643787 5.57489967 -4.25164986 -6.40643787 5.57489967 -1.74062562 -6.40643787 5.57489967 0.98880064
		 -6.40643787 5.57489967 3.5080936 -6.40643787 5.57489967 6.027387142 -6.40643787 2.77372503 8.54668045
		 -5.99473858 2.77372503 8.54668045 -5.99473858 2.77372503 6.027387619 -5.99473858 2.77372503 3.50809479
		 -5.99473858 2.77372503 0.9888019 -5.99473858 2.77372503 -1.53049135 4.50084591 2.77372503 -1.53049135
		 4.50084591 2.77372503 -1.9507575 -5.99473858 2.77372503 -1.9507575 -5.99473858 2.77372503 -4.25164986
		 -6.40643787 2.77372503 -4.25164986 -6.40643787 2.77372503 -1.74062443 -6.40643787 2.77372503 0.9888019
		 -6.40643787 2.77372503 3.50809479 -6.40643787 2.77372503 6.027387619 -0.74694639 7.17554379 -1.53049314
		 -0.74694639 5.57489967 -1.53049314 -0.74694639 3.97425604 -1.53049314 -0.74694639 2.77372503 -1.53049135
		 -0.74694639 1.57319403 -1.53048885 -0.74694639 1.57319403 -1.950755 -0.74694639 2.77372503 -1.9507575
		 -0.74694639 3.97425604 -1.95075929 -0.74694639 5.57489967 -1.95075929 -0.74694639 7.17554379 -1.95075929
		 -3.3708427 7.17554379 -1.53049314 -3.3708427 5.57489967 -1.53049314 -3.3708427 3.97425604 -1.53049314
		 -3.3708427 2.77372503 -1.53049135 -3.3708427 1.57319403 -1.53048885 -3.3708427 1.57319403 -1.950755
		 -3.3708427 2.77372503 -1.9507575 -3.3708427 3.97425604 -1.95075929 -3.3708427 5.57489967 -1.95075929
		 -3.3708427 7.17554379 -1.95075929 1.87694883 5.57489967 -1.95075929 1.87694883 3.97425604 -1.95075929
		 1.87694883 2.77372503 -1.9507575 1.87694883 1.57319403 -1.950755 1.87694883 1.57319403 -1.53048885
		 1.87694883 2.77372503 -1.53049135 1.87694883 3.97425604 -1.53049314 1.87694883 5.57489967 -1.53049314
		 1.87694883 7.17554379 -1.53049314 1.87694883 7.17554379 -1.95075929 -5.99473858 2.77372551 -8.55082989
		 -5.99473858 2.77372551 -6.2425065 -6.40643787 2.77372551 -6.2425065 -6.40643787 2.77372551 -8.55082989
		 5.49737406 7.17554379 -1.90093815 5.44755363 7.17554379 -1.95075929 5.49737406 5.57489967 -1.90093815
		 5.44755363 5.57489967 -1.95075929 5.49737406 3.97425604 -1.90093815 5.44755363 3.97425604 -1.95075929
		 5.49737406 2.77372503 -1.90093505 5.44755363 2.77372503 -1.9507575 4.50084591 7.17554379 -0.5994513
		 4.55066776 7.17554379 -0.54963011 4.50084591 5.57489967 -0.5994513 4.55066776 5.57489967 -0.54963011
		 5.44755363 7.17554379 -0.54963011 5.49737406 7.17554379 -0.5994513 5.44755363 5.57489967 -0.54963011
		 5.49737406 5.57489967 -0.5994513 4.50084591 3.97425604 -0.5994513 4.55066776 3.97425604 -0.54963011
		 4.50084591 2.77372503 -0.59944946 4.55066776 2.77372503 -0.54962832 5.44755363 3.97425604 -0.54963011
		 5.49737406 3.97425604 -0.5994513 5.44755363 2.77372503 -0.54962832 5.49737406 2.77372503 -0.59944946
		 4.55066776 1.57319403 -0.54962647 4.50084591 1.57319403 -0.59944761 5.49737406 1.57319403 -0.59944761
		 5.44755363 1.57319403 -0.54962647 5.44755363 1.57319403 -1.950755 5.49737406 1.57319403 -1.90093446;
	setAttr -s 271 ".ed";
	setAttr ".ed[0:165]"  4 5 0 6 7 0 0 76 0 1 77 0 2 51 0 3 54 0 4 86 0 5 85 0
		 6 27 0 7 26 0 2 57 0 3 58 0 5 66 0 9 53 0 4 71 0 8 52 0 4 12 0 5 13 0 12 13 0 11 14 0
		 12 70 0 10 15 0 13 67 0 12 16 0 13 17 0 14 18 0 16 69 0 15 19 0 17 68 0 12 123 0
		 13 122 0 20 21 0 16 124 0 20 22 0 17 121 0 21 23 0 28 4 0 29 11 0 24 10 0 25 5 0
		 28 72 1 24 65 0 25 84 0 27 87 1 32 45 0 27 50 0 30 62 0 31 81 0 30 101 0 31 103 0
		 33 63 0 25 108 0 24 110 0 36 64 1 32 105 0 34 82 0 26 106 0 35 83 1 36 126 0 38 153 0
		 33 133 0 37 150 0 39 49 0 40 48 0 41 47 0 42 46 0 43 55 0 44 56 0 39 74 1 41 60 1
		 42 79 1 44 89 1 45 43 0 46 31 0 47 30 0 48 29 0 49 28 0 50 44 0 45 80 1 46 61 1 48 73 1
		 49 88 1 51 39 0 52 40 0 53 41 0 54 42 0 55 1 0 56 0 0 51 75 1 53 59 1 54 78 1 56 90 1
		 57 8 0 58 9 0 59 54 1 60 42 1 61 47 1 62 31 0 63 34 0 64 35 1 65 25 0 66 10 0 67 15 0
		 68 19 0 69 18 0 70 14 0 71 11 0 72 29 1 73 49 1 74 40 1 75 52 1 58 59 1 59 60 1 60 61 1
		 61 62 1 62 102 1 64 111 1 65 66 1 66 67 1 67 68 1 69 70 1 70 71 1 71 72 1 72 73 1
		 73 74 1 74 75 1 75 57 1 76 2 0 77 3 0 78 55 1 79 43 1 80 46 1 81 32 0 82 37 0 83 38 1
		 84 26 0 85 7 0 86 6 0 87 28 1 88 50 1 89 39 1 90 51 1 77 78 1 78 79 1 79 80 1 80 81 1
		 81 104 1 83 113 1 84 85 1 85 86 1 86 87 1 87 88 1 88 89 1 89 90 1 90 76 1 91 119 0
		 92 118 1 93 117 0 94 116 1 95 115 0 96 114 0 97 107 1 98 112 0 99 109 1 100 120 0
		 91 92 1;
	setAttr ".ed[166:270]" 92 93 1 93 94 1 94 95 1 96 97 1 97 98 1 98 99 1 99 100 1
		 101 91 0 102 92 1 103 93 0 104 94 1 105 95 0 106 96 0 107 84 1 108 98 0 109 65 1
		 110 100 0 101 102 1 102 103 1 103 104 1 104 105 1 106 107 1 107 108 1 108 109 1 109 110 1
		 111 99 1 112 35 0 113 97 1 114 38 0 115 37 0 116 82 1 117 34 0 118 63 1 119 33 0
		 120 36 0 111 112 1 112 113 1 113 114 1 115 116 1 116 117 1 117 118 1 118 119 1 120 111 1
		 121 23 0 122 21 0 123 20 0 124 22 0 121 122 1 122 123 1 123 124 1 125 138 0 134 137 0
		 149 152 0 154 151 0 126 125 0 125 127 0 127 128 1 128 126 0 127 129 0 129 130 1 130 128 0
		 129 131 0 131 132 1 132 130 0 131 154 0 154 153 0 153 132 0 134 133 0 133 135 0 135 136 1
		 136 134 0 135 141 0 141 142 1 142 136 0 138 137 0 137 139 0 139 140 1 140 138 0 139 145 0
		 145 146 1 146 140 0 141 143 0 143 144 1 144 142 0 143 150 0 150 149 0 149 144 0 145 147 0
		 147 148 1 148 146 0 147 152 0 152 151 0 151 148 0 140 127 1 148 131 1 129 146 1 136 139 1
		 128 64 1 144 147 1 145 142 1 132 83 1 35 130 1 63 135 1 82 143 1 141 34 1;
	setAttr -s 117 -ch 468 ".fc[0:116]" -type "polyFaces" 
		f 4 0 7 149 -7
		mu 0 4 186 185 2 179
		f 4 42 148 -8 -40
		mu 0 4 4 165 181 1
		f 4 150 138 36 6
		mu 0 4 3 6 7 0
		f 4 41 117 101 -39
		mu 0 4 8 167 10 11
		f 4 122 107 37 -107
		mu 0 4 12 13 14 15
		f 4 -1 16 18 -18
		mu 0 4 185 186 184 17
		f 4 121 106 19 -106
		mu 0 4 18 12 15 19
		f 4 -102 118 102 -22
		mu 0 4 11 10 20 21
		f 4 120 105 25 -105
		mu 0 4 22 18 19 23
		f 4 -103 119 103 -28
		mu 0 4 21 20 24 25
		f 4 214 211 31 -211
		mu 0 4 26 175 176 29
		f 4 215 212 -34 -212
		mu 0 4 27 30 31 28
		f 4 213 210 35 -210
		mu 0 4 32 177 178 33
		f 4 80 124 109 63
		mu 0 4 34 35 36 37
		f 4 69 113 96 -65
		mu 0 4 38 39 40 41
		f 4 70 144 131 -66
		mu 0 4 42 43 44 45
		f 4 81 152 140 62
		mu 0 4 46 47 48 49
		f 4 165 156 207 -156
		mu 0 4 50 51 52 53
		f 4 208 191 172 164
		mu 0 4 54 55 56 57
		f 4 167 158 205 -158
		mu 0 4 58 59 60 61
		f 4 202 193 170 162
		mu 0 4 62 63 64 65
		f 4 -110 125 110 83
		mu 0 4 37 36 66 67
		f 4 89 112 -70 -85
		mu 0 4 68 69 39 38
		f 4 90 143 -71 -86
		mu 0 4 70 71 43 42
		f 4 -141 153 141 82
		mu 0 4 49 48 72 73
		f 4 -132 145 -48 -74
		mu 0 4 45 44 160 163
		f 4 -97 114 -47 -75
		mu 0 4 41 40 162 164
		f 4 -108 123 -81 75
		mu 0 4 14 13 35 34
		f 4 -139 151 -82 76
		mu 0 4 7 6 47 46
		f 4 -111 126 92 15
		mu 0 4 67 66 78 79
		f 4 111 -90 -14 -94
		mu 0 4 80 69 68 81
		f 4 142 -91 -6 -129
		mu 0 4 82 71 70 83
		f 4 -142 154 127 4
		mu 0 4 73 72 84 85
		f 4 5 -95 -112 -12
		mu 0 4 83 70 69 80
		f 4 -113 94 85 -96
		mu 0 4 39 69 70 42
		f 4 -114 95 65 79
		mu 0 4 40 39 42 45
		f 4 -115 -80 73 -98
		mu 0 4 162 40 45 163
		f 4 206 -157 166 157
		mu 0 4 61 52 51 58
		f 4 171 -192 201 -163
		mu 0 4 65 56 55 62
		f 4 -118 100 39 12
		mu 0 4 10 167 4 1
		f 4 -119 -13 17 22
		mu 0 4 20 10 1 183
		f 4 -120 -23 24 28
		mu 0 4 24 20 183 86
		f 4 20 -121 -27 -24
		mu 0 4 16 18 22 87
		f 4 14 -122 -21 -17
		mu 0 4 0 12 18 16
		f 4 -37 40 -123 -15
		mu 0 4 0 7 13 12
		f 4 -124 -41 -77 -109
		mu 0 4 35 13 7 46
		f 4 -125 108 -63 68
		mu 0 4 36 35 46 49
		f 4 -126 -69 -83 88
		mu 0 4 66 36 49 73
		f 4 -127 -89 -5 10
		mu 0 4 78 66 73 85
		f 4 -87 -130 -143 -4
		mu 0 4 88 89 71 82
		f 4 -144 129 -67 -131
		mu 0 4 43 71 89 90
		f 4 -145 130 -73 78
		mu 0 4 44 43 90 91
		f 4 -146 -79 -45 -133
		mu 0 4 160 44 91 92
		f 4 204 -159 168 159
		mu 0 4 93 60 59 94
		f 4 169 -194 203 -161
		mu 0 4 95 64 63 96
		f 4 -149 135 -10 -137
		mu 0 4 181 165 166 98
		f 4 -150 136 -2 -138
		mu 0 4 179 2 182 99
		f 4 8 43 -151 137
		mu 0 4 180 100 6 3
		f 4 -152 -44 45 -140
		mu 0 4 47 6 100 101
		f 4 -153 139 77 71
		mu 0 4 48 47 101 102
		f 4 -154 -72 67 91
		mu 0 4 72 48 102 103
		f 4 -155 -92 87 2
		mu 0 4 84 72 103 104
		f 4 183 174 -166 -174
		mu 0 4 105 106 51 50
		f 4 -167 -175 184 175
		mu 0 4 58 51 106 107
		f 4 185 176 -168 -176
		mu 0 4 107 108 59 58
		f 4 -169 -177 186 177
		mu 0 4 94 59 108 109
		f 4 187 -162 -170 -179
		mu 0 4 110 111 64 95
		f 4 -171 161 188 180
		mu 0 4 65 64 111 112
		f 4 189 -164 -172 -181
		mu 0 4 112 113 56 65
		f 4 -173 163 190 182
		mu 0 4 57 56 113 114
		f 4 46 115 -184 -49
		mu 0 4 77 76 106 105
		f 4 -185 -116 97 49
		mu 0 4 107 106 76 75
		f 4 47 146 -186 -50
		mu 0 4 75 74 108 107
		f 4 -187 -147 132 54
		mu 0 4 109 108 74 161
		f 4 -136 -180 -188 -57
		mu 0 4 97 5 111 110
		f 4 -189 179 -43 51
		mu 0 4 112 111 5 168
		f 4 -101 -182 -190 -52
		mu 0 4 168 9 113 112
		f 4 -191 181 -42 52
		mu 0 4 114 113 9 169
		f 4 -202 -117 99 -193
		mu 0 4 62 55 115 116
		f 4 147 -203 192 57
		mu 0 4 117 63 62 116
		f 4 -204 -148 134 -195
		mu 0 4 96 63 117 118
		f 4 -197 -205 195 -134
		mu 0 4 155 60 93 120
		f 4 -206 196 -56 -198
		mu 0 4 61 60 155 158
		f 4 -199 -207 197 -99
		mu 0 4 157 52 61 158
		f 4 -208 198 -51 -200
		mu 0 4 53 52 157 159
		f 4 116 -209 200 53
		mu 0 4 115 55 54 124
		f 4 -25 30 -214 -35
		mu 0 4 86 183 177 32
		f 4 -19 29 -215 -31
		mu 0 4 17 184 175 26
		f 4 23 32 -216 -30
		mu 0 4 16 87 30 27
		f 4 220 221 222 223
		mu 0 4 174 126 127 173
		f 4 -223 224 225 226
		mu 0 4 173 127 129 172
		f 4 -226 227 228 229
		mu 0 4 172 129 131 171
		f 4 -229 230 231 232
		mu 0 4 171 131 133 134
		f 4 233 234 235 236
		mu 0 4 135 136 137 138
		f 4 -236 237 238 239
		mu 0 4 138 137 139 140
		f 4 240 241 242 243
		mu 0 4 141 142 143 144
		f 4 -243 244 245 246
		mu 0 4 144 143 145 146
		f 4 -239 247 248 249
		mu 0 4 140 139 147 148
		f 4 -249 250 251 252
		mu 0 4 148 147 149 150
		f 4 -246 253 254 255
		mu 0 4 146 145 151 152
		f 4 -255 256 257 258
		mu 0 4 152 151 153 154
		f 4 259 -222 216 -244
		mu 0 4 144 127 126 141
		f 4 260 -228 261 -256
		mu 0 4 152 131 129 146
		f 4 -237 262 -242 -218
		mu 0 4 135 138 143 142
		f 4 263 -54 58 -224
		mu 0 4 128 115 124 125
		f 4 -250 264 -254 265
		mu 0 4 140 148 151 145
		f 4 266 -58 267 -230
		mu 0 4 132 117 116 130
		f 4 50 268 -235 -61
		mu 0 4 123 122 137 136
		f 4 55 269 -248 270
		mu 0 4 121 119 147 139
		f 4 -269 98 -271 -238
		mu 0 4 137 122 121 139
		f 4 -263 -240 -266 -245
		mu 0 4 143 138 140 145
		f 4 -262 -225 -260 -247
		mu 0 4 146 129 127 144
		f 4 -100 -264 -227 -268
		mu 0 4 116 115 128 130
		f 4 -270 133 61 -251
		mu 0 4 147 119 156 149
		f 4 -265 -253 218 -257
		mu 0 4 151 148 150 153
		f 4 -259 -220 -231 -261
		mu 0 4 152 154 133 131
		f 4 -135 -267 -233 -60
		mu 0 4 118 117 132 170;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "bottomfloor_wall2" -p "SB_BottomFloor_grp";
	rename -uid "5F76A489-4C0C-461B-2B5F-C69F8EABFA64";
	setAttr ".rp" -type "double3" 5.497374267578123 1.5731951904296873 2.4500527954101567 ;
	setAttr ".sp" -type "double3" 5.497374267578123 1.5731951904296873 2.4500527954101567 ;
createNode mesh -n "bottomfloor_wallShape2" -p "bottomfloor_wall2";
	rename -uid "4AFD35FF-4DCB-44CD-C2B5-8F88D89B55A8";
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
	setAttr ".pv" -type "double2" 0.96463561797962827 0.3833471726904023 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape13" -p "bottomfloor_wall2";
	rename -uid "67A52608-4FEC-20EE-B6A8-9C80A1FF29D6";
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
	setAttr ".pv" -type "double2" 0.96463561797962827 0.3833471726904023 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 127 ".uvst[0].uvsp[0:126]" -type "float2" 0.44277924 0.5811646
		 0.44279814 0.47443774 0.44794446 0.58046246 0.46781248 0.58046573 0.47299379 0.47444311
		 0.4729749 0.58116984 0.47295594 0.68789673 0.44276029 0.68789124 0.1878746 0.63898033
		 0.18788043 0.80351084 0.14133067 0.80351257 0.14132486 0.63898206 0.66111153 0.58049738
		 0.47301275 0.36771628 0.56523174 0.47445816 0.66112906 0.47447386 0.44281709 0.36771098
		 0.44283605 0.26098412 0.25466287 0.47440708 0.35056019 0.47442287 0.25468028 0.36838344
		 0.18786296 0.30991945 0.14131323 0.30992112 0.14130741 0.14539069 0.14131904 0.47445157
		 0.14755028 0.47445133 0.44797933 0.36841521 0.18786877 0.4744499 0.79487914 0.14536753
		 0.80369139 0.14536723 0.11208309 0.30992216 0.79488498 0.30989799 0.1120889 0.47445261
		 0.79489076 0.47442845 0.2170873 0.14538798 0.22589961 0.14538768 0.22590542 0.30991811
		 0.21709311 0.30991843 0.22591126 0.47444853 0.21709895 0.47444889 0.57172996 0.80349731
		 0.56291765 0.80349761 0.56291187 0.6389671 0.57172418 0.6389668 0.56290603 0.47443664
		 0.57171834 0.47443634 0.45790762 0.80350131 0.44909537 0.80350167 0.44908953 0.63897115
		 0.45790184 0.63897079 0.44908375 0.47444066 0.45789599 0.47444037 0.11209474 0.63898307
		 0.7948966 0.63895887 0.11210055 0.80351359 0.79490238 0.80348939 0.22591707 0.63897896
		 0.21710476 0.63897932 0.22592288 0.80350947 0.2171106 0.80350983 0.4490779 0.30991024
		 0.45789021 0.30990991 0.44907206 0.14537978 0.45788437 0.14537948 0.56290025 0.30990621
		 0.57171249 0.30990589 0.5628944 0.14537573 0.57170665 0.14537543 0.41815883 0.26097974
		 0.42387515 0.26098076 0.4238562 0.36770758 0.41813987 0.36770657 0.4238373 0.47443441
		 0.41812098 0.47443339 0.49199253 0.26099283 0.4977088 0.26099387 0.4976899 0.36772063
		 0.49197358 0.36771968 0.49767095 0.47444752 0.49195468 0.47444651 0.49765205 0.58117425
		 0.49193573 0.5811733 0.4976331 0.68790102 0.49191678 0.68790007 0.42381835 0.58116114
		 0.41810203 0.58116019 0.42379946 0.68788791 0.41808313 0.68788695 0.47294885 0.58046657
		 0.46782994 0.47444212 0.47296619 0.47444296 0.14131883 0.46822029 0.44279891 0.47039571
		 0.44282568 0.47443801 0.44796193 0.47443888 0.18786854 0.46821868 0.34645361 0.36769381
		 0.34643471 0.4744207 0.56937617 0.36773339 0.56935728 0.47446021 0.56933832 0.58118701
		 0.56931937 0.68791378 0.34641576 0.58114743 0.3463968 0.6878742 0.34647256 0.26096705
		 0.56939512 0.26100656 0.44684017 0.47443846 0.44280827 0.58046162 0.47299451 0.47040108
		 0.46895176 0.47444239 0.35054284 0.58044642 0.56521422 0.58048177 0.25464547 0.58043063
		 0.47303164 0.26098949 0.44284314 0.36841437 0.18163767 0.47445011 0.46784741 0.36841851
		 0.4729836 0.36841929 0.56524903 0.36843446 0.35057765 0.36839914 0.18785715 0.14538905
		 0.66114646 0.36845025 0.80370885 0.63895857 0.80371469 0.80348909 0.80370307 0.47442815
		 0.80369729 0.30989769 0.11207726 0.1453917;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 106 ".vt[0:105]"  4.49737406 1.57319522 8.5466795 5.49737406 1.57319522 8.5466795
		 5.49737406 4.37436962 8.5466795 4.49737406 4.37436962 8.5466795 4.49737406 7.17554283 8.5466795
		 5.49737406 7.17554283 8.5466795 5.49737406 2.9737823 8.5466795 4.49737406 2.9737823 8.5466795
		 5.49737406 5.77495623 8.5466795 4.49737406 5.77495623 8.5466795 4.79924345 5.77495623 7.55288935
		 4.79924345 7.17554283 7.55288935 5.19550419 5.77495623 7.55288935 5.19550419 7.17554283 7.55288935
		 4.79924345 7.17554426 4.45592594 4.79924345 5.7749567 4.45592594 5.19550419 7.17554426 4.45592594
		 5.19550419 5.7749567 4.45592594 4.79924345 2.9737823 7.55288935 4.79924345 2.9737823 4.45592594
		 5.19550419 2.9737823 7.55288935 5.19550419 2.9737823 4.45592594 4.79924345 1.57319522 7.55288935
		 4.79924345 1.57319522 4.45592594 5.19550419 1.57319522 7.55288935 5.19550419 1.57319522 4.45592594
		 5.19550419 1.57319522 6.0044078827 5.19550419 2.9737823 6.0044078827 4.79924345 2.9737823 6.0044078827
		 4.79924345 1.57319522 6.0044078827 4.5504179 1.57319522 4.45592594 4.49737406 1.57319522 4.40288162
		 4.49737406 2.9737823 4.40288162 4.5504179 2.9737823 4.45592594 5.49737406 1.57319522 4.40288162
		 5.44432974 1.57319522 4.45592594 5.49737406 2.9737823 4.40288162 5.44432974 2.9737823 4.45592594
		 4.5504179 7.17554426 2.45005274 4.49737406 7.17554426 2.50309682 4.5504179 5.7749567 2.45005274
		 4.49737406 5.7749567 2.50309682 5.49737406 7.17554426 2.50309682 5.44432974 7.17554426 2.45005274
		 5.44432974 5.7749567 2.45005274 5.49737406 5.7749567 2.50309682 4.49737406 4.37436962 4.40288162
		 4.5504179 4.37436962 4.45592594 4.49737406 5.7749567 4.40288162 4.5504179 5.7749567 4.45592594
		 5.49737406 4.37436962 4.40288162 5.44432974 4.37436962 4.45592594 5.49737406 5.7749567 4.40288162
		 5.44432974 5.7749567 4.45592594 5.49737406 4.37436962 2.50309682 5.44432974 4.37436962 2.45005274
		 5.49737406 2.9737823 2.50309682 5.44432974 2.9737823 2.45005274 4.5504179 4.37436962 2.45005274
		 4.49737406 4.37436962 2.50309682 4.5504179 2.9737823 2.45005274 4.49737406 2.9737823 2.50309682
		 5.44432974 1.57319522 7.55288935 5.49737406 1.57319522 7.60593319 5.49737406 2.9737823 7.60593319
		 5.44432974 2.9737823 7.55288935 4.49737406 1.57319522 7.60593319 4.5504179 1.57319522 7.55288935
		 4.49737406 2.9737823 7.60593319 4.5504179 2.9737823 7.55288935 4.49737406 4.37436962 7.60593319
		 4.5504179 4.37436962 7.55288935 4.49737406 5.77495623 7.60593319 4.5504179 5.77495623 7.55288935
		 5.49737406 4.37436962 7.60593319 5.44432974 4.37436962 7.55288935 5.49737406 5.77495623 7.60593319
		 5.44432974 5.77495623 7.55288935 5.44432974 1.57319522 2.45005274 5.49737406 1.57319522 2.50309682
		 4.49737406 1.57319522 2.50309682 4.5504179 1.57319522 2.45005274 5.44432974 7.17554426 4.45592594
		 5.49737406 7.17554426 4.40288162 4.49737406 7.17554426 4.40288162 4.5504179 7.17554426 4.45592594
		 5.49737406 7.17554283 7.60593319 5.44432974 7.17554283 7.55288935 4.5504179 7.17554283 7.55288935
		 4.49737406 7.17554283 7.60593319 4.79924345 4.3213253 7.55288935 4.79924345 4.37436962 7.55288935
		 4.85228777 4.37436962 7.55288935 4.85228777 4.37436962 6.0044078827 4.79924345 4.3213253 6.0044078827
		 5.14246082 4.37436962 7.55288935 5.19550419 4.37436962 7.55288935 5.19550419 4.3213253 7.55288935
		 5.19550419 4.3213253 6.0044078827 5.14246082 4.37436962 6.0044078827 5.19550419 4.3213253 4.45592594
		 5.19550419 4.37436962 4.45592594 5.14246082 4.37436962 4.45592594 4.85228777 4.37436962 4.45592594
		 4.79924345 4.37436962 4.45592594 4.79924345 4.3213253 4.45592594;
	setAttr -s 188 ".ed";
	setAttr ".ed[0:165]"  1 6 0 0 7 0 3 9 0 2 8 0 6 2 0 7 3 0 8 5 0 9 4 0 11 13 0
		 10 11 1 12 10 1 13 87 0 12 13 1 14 16 0 14 15 1 15 104 1 16 82 0 17 15 1 16 17 1
		 17 101 1 18 22 0 19 23 0 20 24 0 24 62 0 21 25 0 25 35 0 24 26 0 22 29 0 18 28 1
		 20 27 1 26 25 0 27 21 1 28 19 1 29 23 0 26 27 1 28 29 1 30 23 0 38 43 0 63 1 0 66 0 0
		 67 22 0 79 34 0 80 31 0 81 78 0 83 42 0 84 39 0 85 14 0 86 5 0 88 11 0 89 4 0 90 18 0
		 91 10 1 92 95 0 91 90 1 92 91 1 96 12 1 97 20 0 96 95 0 100 21 0 101 100 1 102 101 1
		 103 102 0 105 19 0 103 104 1 31 30 0 30 33 0 33 32 1 32 31 0 33 47 0 47 46 1 46 32 0
		 35 34 0 34 36 0 36 37 1 37 35 0 36 50 0 50 51 1 51 37 0 39 38 0 38 40 0 40 41 1 41 39 0
		 40 58 0 58 59 1 59 41 0 43 42 0 42 45 0 45 44 1 44 43 0 45 54 0 54 55 1 55 44 0 47 49 0
		 49 48 1 48 46 0 49 85 0 85 84 0 84 48 0 50 52 0 52 53 1 53 51 0 52 83 0 83 82 0 82 53 0
		 54 56 0 56 57 1 57 55 0 56 79 0 79 78 0 78 57 0 58 60 0 60 61 1 61 59 0 60 81 0 81 80 0
		 80 61 0 63 62 0 62 65 0 65 64 1 64 63 0 65 75 0 75 74 1 74 64 0 67 66 0 66 68 0 68 69 1
		 69 67 0 68 70 0 70 71 1 71 69 0 70 72 0 72 73 1 73 71 0 72 89 0 89 88 0 88 73 0 75 77 0
		 77 76 1 76 74 0 77 87 0 87 86 0 86 76 0 90 92 0 92 93 0 93 94 1 94 90 0 93 103 0
		 103 105 0 105 94 0 95 97 0 97 98 0 98 99 1 99 95 0 98 100 0 100 102 0 102 99 0 40 44 1
		 55 58 1 50 54 1 45 52 1 59 46 1 48 41 1 36 56 1 57 60 1 61 32 1 6 64 1;
	setAttr ".ed[166:187]" 74 2 1 68 7 1 3 70 1 77 12 1 72 9 1 8 76 1 17 53 1 75 96 1
		 91 71 1 73 10 1 49 15 1 47 104 1 18 69 1 51 101 1 21 37 1 19 33 1 20 65 1 94 28 1
		 99 93 1 27 98 1 97 96 0 105 104 1;
	setAttr -s 82 -ch 332 ".fc[0:81]" -type "polyFaces" 
		f 6 -56 57 -53 54 51 -11
		mu 0 6 0 1 106 109 4 5
		f 4 8 -13 10 9
		mu 0 4 6 7 0 5
		f 4 -19 -14 14 -18
		mu 0 4 8 9 10 11
		f 4 -21 28 35 -28
		mu 0 4 12 111 14 15
		f 4 22 26 34 -30
		mu 0 4 110 112 18 19
		f 4 -35 30 -25 -32
		mu 0 4 19 18 20 119
		f 4 -36 32 21 -34
		mu 0 4 15 14 118 121
		f 6 -64 61 60 -20 17 15
		mu 0 6 24 25 115 27 8 11
		f 4 64 65 66 67
		mu 0 4 28 29 125 31
		f 4 -67 68 69 70
		mu 0 4 31 125 124 33
		f 4 71 72 73 74
		mu 0 4 34 35 36 37
		f 4 -74 75 76 77
		mu 0 4 37 36 38 39
		f 4 78 79 80 81
		mu 0 4 40 41 42 43
		f 4 -81 82 83 84
		mu 0 4 43 42 44 45
		f 4 85 86 87 88
		mu 0 4 46 47 48 49
		f 4 -88 89 90 91
		mu 0 4 49 48 50 51
		f 4 -70 92 93 94
		mu 0 4 33 124 122 53
		f 4 -94 95 96 97
		mu 0 4 53 122 123 55
		f 4 -77 98 99 100
		mu 0 4 39 38 56 57
		f 4 -100 101 102 103
		mu 0 4 57 56 58 59
		f 4 -91 104 105 106
		mu 0 4 51 50 60 61
		f 4 -106 107 108 109
		mu 0 4 61 60 62 63
		f 4 -84 110 111 112
		mu 0 4 45 44 64 65
		f 4 -112 113 114 115
		mu 0 4 65 64 66 67
		f 4 116 117 118 119
		mu 0 4 68 69 70 71
		f 4 -119 120 121 122
		mu 0 4 71 70 72 73
		f 4 123 124 125 126
		mu 0 4 74 75 76 77
		f 4 -126 127 128 129
		mu 0 4 77 76 78 79
		f 4 -129 130 131 132
		mu 0 4 79 78 80 81
		f 4 -132 133 134 135
		mu 0 4 81 80 82 83
		f 4 -122 136 137 138
		mu 0 4 73 72 84 85
		f 4 -138 139 140 141
		mu 0 4 85 84 86 87
		f 4 142 143 144 145
		mu 0 4 88 3 89 90
		f 4 -145 146 147 148
		mu 0 4 90 89 116 117
		f 4 149 150 151 152
		mu 0 4 2 107 93 94
		f 4 -152 153 154 155
		mu 0 4 94 93 114 26
		f 4 156 -92 157 -83
		mu 0 4 42 49 51 44
		f 4 158 -90 159 -99
		mu 0 4 38 50 48 56
		f 4 160 -95 161 -85
		mu 0 4 45 33 53 43
		f 4 162 -105 -159 -76
		mu 0 4 36 60 50 38
		f 4 -158 -107 163 -111
		mu 0 4 44 51 61 64
		f 4 164 -71 -161 -113
		mu 0 4 65 31 33 45
		f 4 165 -123 166 -5
		mu 0 4 96 71 73 97
		f 4 -128 167 5 168
		mu 0 4 78 76 98 99
		f 4 11 -140 169 12
		mu 0 4 7 86 84 0
		f 4 170 7 -50 -134
		mu 0 4 80 100 101 82
		f 4 171 -142 47 -7
		mu 0 4 102 85 87 103
		f 4 -120 -166 -1 -39
		mu 0 4 68 71 96 104
		f 4 -73 -42 -108 -163
		mu 0 4 36 35 62 60
		f 4 -164 -110 -44 -114
		mu 0 4 64 61 63 66
		f 4 -116 42 -68 -165
		mu 0 4 65 67 28 31
		f 4 -168 -125 39 1
		mu 0 4 98 76 75 105
		f 4 -80 37 -89 -157
		mu 0 4 42 41 46 49
		f 4 -160 -87 -45 -102
		mu 0 4 56 48 47 58
		f 4 -104 -17 18 172
		mu 0 4 57 59 9 8
		f 4 -162 -98 45 -82
		mu 0 4 43 53 55 40
		f 4 -167 -139 -172 -4
		mu 0 4 97 73 85 102
		f 4 -137 173 55 -170
		mu 0 4 84 72 1 0
		f 4 -169 2 -171 -131
		mu 0 4 78 99 100 80
		f 4 -52 174 -133 175
		mu 0 4 5 4 79 81
		f 4 -136 48 -10 -176
		mu 0 4 81 83 6 5
		f 4 -15 -47 -96 176
		mu 0 4 11 10 54 52
		f 4 177 -16 -177 -93
		mu 0 4 32 24 11 52
		f 5 -175 53 50 178 -130
		mu 0 5 79 4 108 13 77
		f 5 179 59 58 180 -78
		mu 0 5 39 27 95 21 37
		f 4 -179 20 -41 -127
		mu 0 4 77 13 113 74
		f 4 181 -66 36 -22
		mu 0 4 22 30 126 23
		f 4 182 -118 -24 -23
		mu 0 4 16 70 69 17
		f 4 -181 24 25 -75
		mu 0 4 37 21 120 34
		f 4 -51 -146 183 -29
		mu 0 4 111 88 90 14
		f 4 -144 52 -153 184
		mu 0 4 89 3 2 94
		f 4 -151 56 29 185
		mu 0 4 93 107 110 19
		f 4 -186 31 -59 -154
		mu 0 4 93 19 119 114
		f 4 -185 -156 -62 -147
		mu 0 4 89 94 26 116
		f 4 -184 -149 62 -33
		mu 0 4 14 90 117 118
		f 5 186 -174 -121 -183 -57
		mu 0 5 92 1 72 70 16
		f 4 -180 -101 -173 19
		mu 0 4 27 39 57 8
		f 5 187 -178 -69 -182 -63
		mu 0 5 91 24 32 30 22
		f 3 -54 -55 -143
		mu 0 3 108 4 109
		f 3 -60 -61 -155
		mu 0 3 95 27 115
		f 3 63 -188 -148
		mu 0 3 25 24 91
		f 3 -58 -187 -150
		mu 0 3 106 1 92;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 5 
		74 0 
		77 0 
		79 0 
		81 0 
		83 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "bottomfloor_floor" -p "SB_BottomFloor_grp";
	rename -uid "3CC85FAE-4493-DD09-AC2A-ADA30166D57A";
	setAttr ".rp" -type "double3" 0 1.5742517089843751 -4.8830440063799516 ;
	setAttr ".sp" -type "double3" 0 1.5742517089843751 -4.8830440063799516 ;
createNode mesh -n "bottomfloor_floorShape" -p "bottomfloor_floor";
	rename -uid "6DDE27E2-45D5-269C-76D3-7F9AA11B1511";
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
	setAttr ".pv" -type "double2" 0 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape14" -p "bottomfloor_floor";
	rename -uid "9197E58E-4EAB-2704-7785-76B55ED9033D";
	setAttr -k off ".v";
	setAttr ".io" yes;
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
	setAttr ".pv" -type "double2" 0 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 45 ".uvst[0].uvsp[0:44]" -type "float2" 0.33987933 0.13222852
		 0.33988872 0.2177847 0.22190952 0.21779762 0.22190017 0.13224143 0.22193757 0.4744662
		 0.33991677 0.47445333 0.33992612 0.56000954 0.22194695 0.56002241 0.22191885 0.30335382
		 0.33989805 0.30334091 0.33990741 0.38889712 0.22192824 0.38891 0.22195628 0.64557862
		 0.33993551 0.64556575 0.33994484 0.7311219 0.22196567 0.73113483 0.57583779 0.13220271
		 0.57584715 0.21775889 0.45786792 0.21777181 0.45785856 0.13221562 0.57586586 0.38887131
		 0.45788664 0.38888419 0.45787728 0.30332804 0.57585651 0.3033151 0.57588458 0.55998373
		 0.45790535 0.5599966 0.45789599 0.4744404 0.57587516 0.47442752 0.5759033 0.73109615
		 0.45792407 0.73110902 0.45791471 0.64555287 0.57589388 0.64553994 0.69381702 0.13218981
		 0.69382632 0.217746 0.69384503 0.38885838 0.69383568 0.3033022 0.69386375 0.5599708
		 0.69385445 0.47441465 0.69388247 0.73108321 0.69387311 0.64552701 0.57591259 0.8166523
		 0.69389182 0.81663942 0.4579334 0.81666523 0.33995423 0.81667811 0.221975 0.81669104;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 45 ".vt[0:44]"  -12.39912987 1.57425165 8.54667854 12.39991093 1.57425165 8.54667854
		 -12.39912987 1.57425165 -8.55185413 12.39991093 1.57425165 -8.55185413 0.00039062501 1.57425165 8.54667854
		 0.00039062501 1.57425165 -8.55185413 -6.19936943 1.57425165 8.54667854 -6.19936943 1.57425165 -8.55185413
		 6.20015097 1.57425165 8.54667854 6.20015097 1.57425165 -8.55185413 -12.39912987 1.57425165 -0.0025875855
		 -6.19936943 1.57425165 -0.0025875855 0.00039062501 1.57425165 -0.0025875855 6.20015097 1.57425165 -0.0025875855
		 12.39991093 1.57425165 -0.0025875855 -12.39912987 1.57425165 4.27204514 -6.19936943 1.57425165 4.27204514
		 0.00039062501 1.57425165 4.27204514 6.20015097 1.57425165 4.27204514 12.39991093 1.57425165 4.27204514
		 -12.39912987 1.57425165 -4.2772212 -6.19936943 1.57425165 -4.2772212 0.00039062501 1.57425165 -4.2772212
		 6.20015097 1.57425165 -4.2772212 12.39991093 1.57425165 -4.2772212 -9.29924965 1.57425165 8.54667854
		 -9.29924965 1.57425165 4.27204514 -9.29924965 1.57425165 -0.0025875855 -9.29924965 1.57425165 -4.2772212
		 -9.29924965 1.57425165 -8.55185413 -3.09948945 1.57425165 8.54667854 -3.09948945 1.57425165 4.27204514
		 -3.09948945 1.57425165 -0.0025875855 -3.09948945 1.57425165 -4.2772212 -3.09948945 1.57425165 -8.55185413
		 3.10027075 1.57425165 8.54667854 3.10027075 1.57425165 4.27204514 3.10027075 1.57425165 -0.0025875855
		 3.10027075 1.57425165 -4.2772212 3.10027075 1.57425165 -8.55185413 9.30003071 1.57425165 8.54667854
		 9.30003071 1.57425165 4.27204514 9.30003071 1.57425165 -0.0025875855 9.30003071 1.57425165 -4.2772212
		 9.30003071 1.57425165 -8.55185413;
	setAttr -s 76 ".ed[0:75]"  0 25 0 0 15 0 1 19 0 2 29 0 4 35 0 5 39 0
		 4 17 1 6 30 0 7 34 0 6 16 1 8 40 0 9 44 0 8 18 1 10 20 0 11 21 1 12 22 1 13 23 1
		 14 24 0 10 27 1 11 32 1 12 37 1 13 42 1 15 10 0 16 11 1 17 12 1 18 13 1 19 14 0 15 26 1
		 16 31 1 17 36 1 18 41 1 20 2 0 21 7 1 22 5 1 23 9 1 24 3 0 20 28 1 21 33 1 22 38 1
		 23 43 1 25 6 0 26 16 1 27 11 1 28 21 1 29 7 0 25 26 1 26 27 1 27 28 1 28 29 1 30 4 0
		 31 17 1 32 12 1 33 22 1 34 5 0 30 31 1 31 32 1 32 33 1 33 34 1 35 8 0 36 18 1 37 13 1
		 38 23 1 39 9 0 35 36 1 36 37 1 37 38 1 38 39 1 40 1 0 41 19 1 42 14 1 43 24 1 44 3 0
		 40 41 1 41 42 1 42 43 1 43 44 1;
	setAttr -s 32 -ch 128 ".fc[0:31]" -type "polyFaces" 
		f 4 36 48 -4 -32
		mu 0 4 0 1 2 3
		f 4 -34 38 66 -6
		mu 0 4 4 5 6 7
		f 4 -33 37 57 -9
		mu 0 4 8 9 10 11
		f 4 -35 39 75 -12
		mu 0 4 12 13 14 15
		f 4 27 46 -19 -23
		mu 0 4 16 17 18 19
		f 4 55 -20 -24 28
		mu 0 4 20 21 22 23
		f 4 64 -21 -25 29
		mu 0 4 24 25 26 27
		f 4 73 -22 -26 30
		mu 0 4 28 29 30 31
		f 4 0 45 -28 -2
		mu 0 4 32 33 17 16
		f 4 54 -29 -10 7
		mu 0 4 34 20 23 35
		f 4 63 -30 -7 4
		mu 0 4 36 24 27 37
		f 4 72 -31 -13 10
		mu 0 4 38 28 31 39
		f 4 18 47 -37 -14
		mu 0 4 19 18 1 0
		f 4 56 -38 -15 19
		mu 0 4 21 10 9 22
		f 4 65 -39 -16 20
		mu 0 4 25 6 5 26
		f 4 74 -40 -17 21
		mu 0 4 29 14 13 30
		f 4 -46 40 9 -42
		mu 0 4 17 33 35 23
		f 4 -47 41 23 -43
		mu 0 4 18 17 23 22
		f 4 -48 42 14 -44
		mu 0 4 1 18 22 9
		f 4 -49 43 32 -45
		mu 0 4 2 1 9 8
		f 4 -51 -55 49 6
		mu 0 4 27 20 34 37
		f 4 -52 -56 50 24
		mu 0 4 26 21 20 27
		f 4 -53 -57 51 15
		mu 0 4 5 10 21 26
		f 4 -58 52 33 -54
		mu 0 4 11 10 5 4
		f 4 -60 -64 58 12
		mu 0 4 31 24 36 39
		f 4 -61 -65 59 25
		mu 0 4 30 25 24 31
		f 4 -62 -66 60 16
		mu 0 4 13 6 25 30
		f 4 -67 61 34 -63
		mu 0 4 7 6 13 12
		f 4 -69 -73 67 2
		mu 0 4 40 28 38 41
		f 4 -70 -74 68 26
		mu 0 4 42 29 28 40
		f 4 -71 -75 69 17
		mu 0 4 43 14 29 42
		f 4 -76 70 35 -72
		mu 0 4 15 14 43 44;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SB_OutterShell_grp" -p "SecurityBuilding_old_grp";
	rename -uid "01976A4E-435B-7487-3A98-76A6D1B60897";
	setAttr ".rp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
	setAttr ".sp" -type "double3" -26.798911746774813 8.1742675781250007 9.7512095768792317 ;
createNode transform -n "outershell" -p "SB_OutterShell_grp";
	rename -uid "5BC3842E-488C-D37E-EAC7-7FA4CB7E1323";
	setAttr ".rp" -type "double3" 0 -1.220703125e-06 0 ;
	setAttr ".sp" -type "double3" 0 -1.220703125e-06 0 ;
createNode mesh -n "outershellShape" -p "outershell";
	rename -uid "6555E9EB-4DAD-0399-9910-149BF5337EC8";
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
	setAttr ".pv" -type "double2" 0.52352611720561981 0.45639185607433319 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape15" -p "outershell";
	rename -uid "BD84C99F-4859-0DAF-4730-E5BB1D660A86";
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
	setAttr ".pv" -type "double2" 0.52352611720561981 0.45639185607433319 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 1382 ".uvst[0].uvsp";
	setAttr ".uvst[0].uvsp[0:249]" -type "float2" 0.57297611 0.5400821 0.5480206
		 0.54007816 0.54802513 0.51132452 0.57298064 0.51132846 0.57298177 0.3754546 0.45547855
		 0.47444046 0.35891944 0.56457329 0.54802626 0.37545705 0.5568651 0.53994477 0.358913
		 0.54005134 0.3589167 0.51129776 0.55686748 0.51119125 0.39235973 0.38442364 0.39240667
		 0.3594822 0.42111692 0.35940969 0.42111531 0.38438371 0.35892805 0.51120102 0.55686772
		 0.51131809 0.46039921 0.5031938 0.35893327 0.53995466 0.34363323 0.5895285 0.5480479
		 0.36747929 0.54802442 0.35708877 0.57297993 0.35708633 0.54803103 0.37546584 0.54803109
		 0.36018017 0.57296956 0.58143413 0.5729866 0.3754659 0.61303854 0.54008842 0.61304319
		 0.5113349 0.57523572 0.5111928 0.57523346 0.53994644 0.57215339 0.51131928 0.57215112
		 0.54007292 0.35891998 0.53822708 0.52170157 0.36747512 0.49670431 0.36747113 0.35892051
		 0.51322973 0.52168727 0.45046484 0.45548648 0.47444084 0.43392575 0.51323134 0.49668998
		 0.45046729 0.52168 0.37545961 0.49668264 0.37546206 0.49668086 0.35709378 0.52167815
		 0.35709134 0.42109936 0.43571624 0.39232111 0.43573669 0.39232814 0.4107517 0.42110115
		 0.41072676 0.49668747 0.37546578 0.49668747 0.36018011 0.52168483 0.36018017 0.52168477
		 0.37546584 0.52167434 0.54007399 0.49667701 0.54007006 0.49668154 0.51131642 0.52167886
		 0.51132035 0.61303198 0.58144045 0.35890788 0.58140332 0.6130659 0.36748955 0.35891807
		 0.62959135 0.49670234 0.38000527 0.52169967 0.38000926 0.57300138 0.38001737 0.54804593
		 0.38001344 0.3436476 0.37998468 0.35893321 0.37998658 0.57216483 0.36747405 0.57216382
		 0.38000819 0.55687815 0.380007 0.55687916 0.36747286 0.61303401 0.56884205 0.35890937
		 0.56880498 0.57297146 0.56883574 0.54801601 0.5688318 0.49667248 0.5688237 0.52166975
		 0.56882763 0.46040171 0.53194743 0.57214886 0.56882656 0.57214785 0.58142495 0.30274311
		 0.3754656 0.52168405 0.47849259 0.49668676 0.47848859 0.49669194 0.4456608 0.5216893
		 0.44566473 0.57298583 0.47850069 0.54803032 0.47849676 0.5480355 0.44566891 0.57299101
		 0.44567284 0.61304832 0.47850701 0.61305356 0.44567922 0.35892075 0.47846991 0.35892493
		 0.44564211 0.55687022 0.47836342 0.55687296 0.44553563 0.57524121 0.44553712 0.57523859
		 0.47836497 0.45393062 0.38432541 0.4539178 0.35934272 0.48672917 0.35930195 0.48674163
		 0.38428831 0.4867619 0.41065428 0.4867852 0.43565845 0.4539471 0.43568587 0.45393741
		 0.41068631 0.5568729 0.44566247 0.57215863 0.44566366 0.57215601 0.47849151 0.55687034
		 0.47849032 0.54803103 0.4054502 0.57298654 0.4054502 0.57298648 0.43190375 0.54803097
		 0.43190369 0.38891912 0.58954388 0.38891622 0.56458843 0.41536975 0.56458533 0.41537267
		 0.58954084 0.49668741 0.43190363 0.49668747 0.40545014 0.52168477 0.40545014 0.52168471
		 0.43190369 0.41536671 0.538239 0.38891315 0.5382421 0.38891023 0.51324475 0.41536379
		 0.51324171 0.38889205 0.58140713 0.61304903 0.43190381 0.427912 0.4719407 0.41534722
		 0.56881213 0.52687848 0.56869602 0.50042498 0.56869388 0.38892284 0.56870282 0.52687883
		 0.56882298 0.46040678 0.58838522 0.41537637 0.56869805 0.30274308 0.4054499 0.50042427
		 0.58141923 0.41535783 0.53822827 0.38890433 0.53822768 0.38890481 0.51323038 0.41535836
		 0.51323092 0.49668813 0.43189994 0.49668556 0.40544638 0.52168286 0.40544394 0.52168548
		 0.43189749 0.38890892 0.31928599 0.52689379 0.38000461 0.50044024 0.38000253 0.41536242
		 0.31928653 0.50043505 0.445658 0.52688861 0.44566008 0.52688599 0.47848794 0.50043243
		 0.47848579 0.52688336 0.5113157 0.38891238 0.51119554 0.41536593 0.51119077 0.46039182
		 0.41800237 0.41535997 0.47836295 0.38890642 0.47836778 0.38890046 0.44553992 0.41535398
		 0.44553515 0.38890237 0.62959194 0.45547879 0.50442475 0.41535676 0.58952999 0.41537273
		 0.3674596 0.52689409 0.3798776 0.38891757 0.3799904 0.41537106 0.37999374 0.50044048
		 0.37987539 0.57298648 0.45047107 0.54803097 0.45047107 0.43393713 0.56458312 0.43394002
		 0.58953863 0.49668741 0.45047101 0.52168471 0.45047107 0.43393409 0.53823686 0.43393114
		 0.5132395 0.43391299 0.58141279 0.4339146 0.56881446 0.30274302 0.45047078 0.48185796
		 0.5688194 0.48187292 0.38000104 0.48187387 0.3674669 0.48186767 0.44565651 0.48186511
		 0.47848436 0.43392733 0.47835961 0.43392134 0.44553176 0.43392414 0.58953035 0.4339233
		 0.6295929 0.4339385 0.37999612 0.41537115 0.53994441 0.50042754 0.5400672 0.48186022
		 0.54006577 0.48186249 0.51131213 0.4339385 0.53994095 0.43393329 0.51118743 0.31112343
		 0.47192246 0.50043237 0.47835872 0.27829486 0.47690904 0.41536278 0.44564927 0.48186502
		 0.47835717 0.48186773 0.44552937 0.43392605 0.47847939 0.43393016 0.44565159 0.5729847
		 0.40543893 0.55687839 0.3798801 0.35892209 0.4783732 0.35891613 0.44554541 0.38890374
		 0.564574 0.54802918 0.40544137 0.3589288 0.53824556 0.35892591 0.51324826 0.35893852
		 0.5687083 0.55686283 0.56869841 0.35893479 0.5895474 0.35893187 0.56459188 0.42161962
		 0.36745927 0.35892206 0.43814501 0.38890642 0.43814564 0.41535997 0.4381462 0.45548725
		 0.47444063 0.4216052 0.45047462 0.42160341 0.43190724 0.46041292 0.43190345 0.46041474
		 0.45047083 0.42160082 0.40545371 0.46041036 0.40544993 0.4215979 0.37546936 0.46040744
		 0.37546557 0.42159611 0.35710111 0.46040565 0.35709733 0.45397058 0.47195336 0.48681965
		 0.47193065 0.48685223 0.51073211 0.45400491 0.51075226 0.42115718 0.51077527 0.39238214
		 0.51080573 0.39233911 0.47200388 0.42111808 0.47197884 0.388906 0.47696954 0.35892168
		 0.47697303 0.35891715 0.43816355 0.38890147 0.43816003 0.41535956 0.47696647 0.41535503
		 0.43815696 0.43392691 0.47696429 0.46042496 0.44957066 0.42160273 0.45047095 0.42160273
		 0.43190357;
	setAttr ".uvst[0].uvsp[250:499]" 0.42160273 0.40545008 0.42160279 0.37546572
		 0.42160279 0.36018005 0.42158771 0.56881177 0.4215923 0.54005814 0.42159685 0.51130462
		 0.42160201 0.47847673 0.42160723 0.44564888 0.42161763 0.37999341 0.54803175 0.4318949
		 0.5480336 0.45046228 0.41535729 0.56457448 0.43392467 0.5645749 0.39660192 0.36745527
		 0.3589226 0.41312736 0.3889069 0.41312799 0.41536045 0.41312853 0.43392783 0.41312894
		 0.39658752 0.45047706 0.3965857 0.43190968 0.39658314 0.40545613 0.39658022 0.3754718
		 0.39657843 0.35710356 0.48686251 0.53574568 0.45402539 0.53576773 0.42119089 0.53578877
		 0.39242351 0.53581542 0.35891426 0.41314584 0.38889855 0.41314235 0.41535211 0.41313925
		 0.43391946 0.41313708 0.39658499 0.45047095 0.39658505 0.43190357 0.39658505 0.40545002
		 0.39658511 0.37546566 0.39656806 0.58140612 0.39657003 0.56880784 0.39657462 0.5400542
		 0.39657918 0.51130056 0.39658433 0.47847274 0.39658955 0.44564494 0.39659995 0.37998942
		 0.35030293 0.45048156 0.35030112 0.43191418 0.37533021 0.43191174 0.375332 0.45047912
		 0.35029852 0.40546066 0.37532765 0.40545821 0.3502956 0.37547633 0.3753247 0.37547389
		 0.35029382 0.35710806 0.37532291 0.35710561 0.45404109 0.55702847 0.48686367 0.55700213
		 0.48685685 0.58203852 0.45405307 0.58207434 0.42125469 0.58209044 0.39252827 0.58208543
		 0.39246821 0.55706108 0.421222 0.55704659 0.38889611 0.39188683 0.35891175 0.39189035
		 0.35890883 0.36686122 0.38889319 0.36685774 0.4153496 0.39188376 0.41534671 0.36685467
		 0.43391702 0.39188159 0.43391407 0.36685249 0.57298642 0.48060736 0.54803097 0.4806073
		 0.46407336 0.56457967 0.46407625 0.58953512 0.52168471 0.4806073 0.49668735 0.48060724
		 0.46406734 0.51323599 0.46407026 0.53823334 0.46404916 0.58141667 0.46406037 0.58953106
		 0.46405953 0.62959349 0.46407467 0.37999988 0.46405083 0.56881827 0.46406227 0.4784832
		 0.46406645 0.44565541 0.45173156 0.44552693 0.45172882 0.47835466 0.57298911 0.45045984
		 0.57299197 0.48059607 0.54803652 0.48059851 0.4640609 0.56457555 0.42160267 0.48060718
		 0.46042794 0.52926803 0.46406314 0.47696081 0.45549184 0.50447559 0.52169019 0.48060107
		 0.45173669 0.37999865 0.4517377 0.36746451 0.30274299 0.48060706 0.45172173 0.56881702
		 0.4517315 0.44565412 0.45172888 0.47848198 0.46406353 0.47835407 0.46405756 0.44552627
		 0.46407473 0.53993559 0.46406952 0.51118195 0.45172399 0.54006338 0.45172626 0.51130974
		 0.46406406 0.41312954 0.39659047 0.48061326 0.35030586 0.48061776 0.37533495 0.48061532
		 0.39658499 0.48060712 0.46405569 0.41313359 0.46405321 0.3918781 0.46405029 0.36684898
		 0.46406198 0.51323199 0.4966929 0.48060349 0.4554897 0.50446481 0.42160815 0.48061082
		 0.46041769 0.48060703 0.57298642 0.51815891 0.54803091 0.51815879 0.50162488 0.56457525
		 0.5016278 0.58953071 0.51920724 0.51815879 0.49420601 0.51815879 0.50161862 0.51075029
		 0.50162154 0.53575152 0.50160074 0.58142138 0.50161189 0.58953178 0.50161105 0.62959433
		 0.50162625 0.3800047 0.50160241 0.56882304 0.50161374 0.47848797 0.50161797 0.44566017
		 0.41418004 0.44552377 0.41417733 0.47835162 0.57299566 0.51814759 0.54804015 0.51815003
		 0.50161242 0.56457627 0.42915255 0.51815867 0.50161469 0.47695643 0.50161099 0.44569683
		 0.45547879 0.47444049 0.51921648 0.51815283 0.41418517 0.37999567 0.41418612 0.36746153
		 0.30274296 0.51815856 0.41417015 0.56881404 0.41417992 0.44565114 0.41417736 0.478479
		 0.50161505 0.47834727 0.50160909 0.44551948 0.50162625 0.53992867 0.50162101 0.51117516
		 0.41417247 0.5400604 0.41417474 0.51130676 0.50161541 0.42067635 0.35030955 0.51816934
		 0.37533864 0.5181669 0.40413094 0.51815867 0.5016048 0.39187372 0.50160182 0.36684462
		 0.45547956 0.47444028 0.50161356 0.51075143 0.46042135 0.51815856 0.42916173 0.51816165
		 0.49421522 0.51815528 0.40414011 0.51816404 0.50160807 0.42067522 0.57298636 0.54810929
		 0.54803091 0.54810929 0.53157538 0.56457174 0.5315783 0.58952725 0.51920718 0.54810929
		 0.49420595 0.54810929 0.53156906 0.51074684 0.53157198 0.535748 0.5315513 0.58142519
		 0.53156239 0.58953238 0.53156155 0.62959492 0.53157681 0.38000846 0.38423467 0.37999329
		 0.38423568 0.36745915 0.53155279 0.56882679 0.30274293 0.54810905 0.38421971 0.56881166
		 0.38422948 0.44564876 0.38422686 0.47847661 0.53156555 0.47834185 0.53155959 0.44551399
		 0.53157675 0.53992331 0.53157151 0.51116967 0.38422197 0.54005802 0.38422424 0.51130438
		 0.53156424 0.47849172 0.53156841 0.44566399 0.38422954 0.44552132 0.3842268 0.47834912
		 0.57299858 0.54809809 0.54804307 0.54810053 0.53156292 0.56457698 0.42915255 0.54810917
		 0.53156519 0.47695294 0.53156149 0.44569331 0.45547926 0.50438476 0.5192194 0.54810333
		 0.5315659 0.42067695 0.40414304 0.5481146 0.35031247 0.54811984 0.37534156 0.5481174
		 0.40413094 0.54810917 0.53155524 0.39187023 0.53155231 0.36684114 0.53155857 0.4206717
		 0.53156406 0.51075208 0.49421814 0.54810578 0.45547801 0.50437391 0.42916465 0.54811215
		 0.46042427 0.54810911 0.56485677 0.58954465 0.56485993 0.56458914 0.57216686 0.56456703
		 0.57216978 0.58952248 0.56486362 0.53576481 0.56486672 0.51076359 0.5721606 0.51074207
		 0.57216346 0.5357433 0.57214266 0.58143032 0.35090584 0.58951718 0.35090065 0.62957972
		 0.36343491 0.62958133 0.36347461 0.31927535 0.35094041 0.31927371 0.57214439 0.56883192
		 0.30274287 0.58870053 0.552293 0.31929952 0.42913002 0.31928378 0.46195787 0.31928796
		 0.57215708 0.47833446 0.57215112 0.44550666 0.57216829 0.53991592 0.57216305 0.51116228
		 0.52353936 0.31929585 0.3436327 0.51130116 0.57215589 0.47849691 0.57215995 0.44566911
		 0.34363797 0.44551799 0.34363526 0.47834578 0.57300252 0.58868963 0.54804707 0.58869207;
	setAttr ".uvst[0].uvsp[500:749]" 0.35090905 0.56456172 0.56487507 0.44571137
		 0.57215667 0.4769482 0.57215303 0.44568861 0.35091269 0.53573805 0.51922333 0.58869487
		 0.57215744 0.42067781 0.35031644 0.58871132 0.37534553 0.58870894 0.56487834 0.42068973
		 0.57214671 0.39186549 0.57214379 0.36683643 0.57215011 0.42066699 0.35092396 0.4456833
		 0.57215554 0.51075292 0.46042824 0.58870059 0.42916864 0.58870363 0.4942221 0.58869731
		 0.404147 0.58870608 0.3634401 0.58951879 0.36344332 0.56456333 0.36345822 0.44568491
		 0.36344993 0.51073837 0.36344701 0.5357396 0.36346173 0.42066336 0.42909545 0.58952725
		 0.4619233 0.58953154 0.42909867 0.56457174 0.46192646 0.56457603 0.54804039 0.44542015
		 0.57301283 0.44542977 0.57303143 0.47825506 0.5480535 0.4782435 0.42910558 0.51074642
		 0.42911386 0.44569373 0.46194154 0.44569814 0.46193326 0.51075041 0.42915371 0.44540685
		 0.46041051 0.44539893 0.4604142 0.47823945 0.42915928 0.47824466 0.4291023 0.53574765
		 0.46193022 0.53575164 0.51920623 0.44540524 0.51921278 0.4782356 0.42911708 0.42067215
		 0.46194488 0.42067659 0.3753233 0.44543317 0.37533122 0.47824779 0.35028633 0.47824427
		 0.35027695 0.44544357 0.49420264 0.44539738 0.49420634 0.47823405 0.40413174 0.44541752
		 0.40413821 0.47824761 0.57215172 0.5113247 0.49475104 0.58953571 0.52350467 0.58953941
		 0.57214803 0.54007828 0.49475431 0.5645802 0.52350795 0.5645839 0.54804432 0.5110606
		 0.57302547 0.51107931 0.57298565 0.53981644 0.54801321 0.53979599 0.49476093 0.51075447
		 0.49476922 0.44570255 0.52352285 0.44570646 0.52351451 0.51075792 0.42915946 0.51108593
		 0.46041068 0.51108003 0.46040311 0.53984529 0.42915055 0.53985626 0.49475801 0.53575557
		 0.52351165 0.53575921 0.51920509 0.51105976 0.51918793 0.53980684 0.49477279 0.42068094
		 0.52352637 0.42068475 0.37534302 0.5110687 0.37534729 0.53983319 0.35033217 0.53979141
		 0.35031056 0.51104802 0.49420071 0.51106679 0.4941909 0.53982347 0.40414432 0.51108313
		 0.40413538 0.53985363 0.55225831 0.5895431 0.55226153 0.56458759 0.55226815 0.51076144
		 0.55227649 0.44571024 0.55226523 0.53576267 0.55227995 0.42068866 0.53155649 0.54007316
		 0.53156012 0.51131952 0.50160605 0.5400694 0.50160956 0.51131576 0.46405441 0.54006463
		 0.4640581 0.51131105 0.43391824 0.54006082 0.43392193 0.51130724 0.37270486 0.47193211
		 0.41535455 0.51130486 0.50042731 0.53994012 0.34395045 0.47691935 0.48185995 0.53993857
		 0.48186237 0.51118505 0.45172611 0.51118255 0.45172369 0.53993618 0.41417459 0.51117945
		 0.41417217 0.53993309 0.38422403 0.51117694 0.38422167 0.53993058 0.34363252 0.51117349
		 0.34363019 0.53992724 0.48685542 0.60708487 0.45405942 0.60712844 0.42126033 0.60715163
		 0.39254847 0.60714239 0.35890591 0.34183216 0.38889027 0.34182867 0.41534376 0.34182557
		 0.43391117 0.34182343 0.46404737 0.34181991 0.50159889 0.34181553 0.53154939 0.34181201
		 0.57214093 0.34180728 0.32531306 0.53973991 0.32526577 0.51103741 0.32523456 0.47824454
		 0.32522124 0.4454408 0.32528731 0.58871377 0.32528335 0.54812223 0.32528043 0.51817173
		 0.32527679 0.48062021 0.32527384 0.45048401 0.32527202 0.43191662 0.32526946 0.4054631
		 0.32526654 0.37547874 0.57041097 0.60725945 0.5721612 0.41283593 0.39659476 0.41281721
		 0.42161241 0.41282114 0.49669716 0.41283301 0.52169448 0.412837 0.54804075 0.41284117
		 0.5729962 0.4128451 0.34364343 0.41281241 0.61388695 0.47196889 0.55687571 0.41270784
		 0.57524389 0.41270939 0.51953512 0.35929716 0.5195471 0.38427702 0.51957989 0.41063491
		 0.51961821 0.4356356 0.51966763 0.47191134 0.51970267 0.51071978 0.51971143 0.53573257
		 0.51970303 0.55698031 0.51967168 0.58200109 0.5196287 0.60702556 0.35891017 0.41271761
		 0.3888945 0.41271219 0.41534802 0.41270736 0.43391541 0.41270402 0.4640516 0.41269854
		 0.50160313 0.41269168 0.53155363 0.41268626 0.57214516 0.41267887 0.32523137 0.41264629
		 0.35028282 0.41264284 0.3753179 0.41261405 0.40411955 0.41258565 0.42914087 0.41256812
		 0.46040067 0.4125568 0.49419531 0.4125562 0.51919597 0.41256788 0.54801941 0.4125917
		 0.57298636 0.41260558 0.34364069 0.41269019 0.38423225 0.41269353 0.41418275 0.41269609
		 0.45173419 0.41269913 0.48187047 0.41270164 0.24546707 0.47690386 0.41536695 0.41282147
		 0.43393433 0.41282386 0.4640705 0.41282767 0.50162208 0.41283244 0.53157252 0.41283619
		 0.39626265 0.6295855 0.39626783 0.58952302 0.39627099 0.56456757 0.39627463 0.53574359
		 0.39627773 0.51074243 0.39628601 0.44568935 0.39628941 0.42066771 0.39630234 0.31927952
		 0.38423204 0.41282102 0.41418254 0.41282341 0.45173413 0.41282639 0.48187029 0.41282877
		 0.50043768 0.41283026 0.52689123 0.41283235 0.55687553 0.41283473 0.57524675 0.37988165
		 0.5523113 0.35935673 0.55234075 0.38428271 0.55240154 0.41060895 0.55245268 0.43560091
		 0.55255353 0.51071531 0.55251062 0.47188506 0.55256844 0.53574717 0.55252409 0.58203042
		 0.55256462 0.5570091 0.5523982 0.607023 0.35890418 0.37988988 0.38888854 0.37988445
		 0.41534206 0.37987962 0.43390945 0.37987623 0.46404564 0.37987074 0.50159717 0.37986395
		 0.53154767 0.37985846 0.57213914 0.37985113 0.32528237 0.37983933 0.35028404 0.37981826
		 0.3752895 0.37978041 0.40408653 0.37974888 0.42911264 0.37972933 0.46038437 0.3797152
		 0.49419245 0.3797169 0.5192008 0.37972805 0.54801905 0.37975872 0.57294607 0.37981415
		 0.38423496 0.3798658 0.34364349 0.37986246 0.4141854 0.3798683 0.45173699 0.3798714
		 0.48187318 0.3798739 0.48185754 0.56869233 0.45172137 0.5686897 0.41416985 0.56868672
		 0.38421932 0.5686841 0.34362775 0.56868076 0.57288802 0.56852335 0.54797077 0.56852239
		 0.51917714 0.56855375 0.49418887 0.56858063 0.46039996 0.56860745 0.42913535 0.56862652;
	setAttr ".uvst[0].uvsp[750:999]" 0.40410921 0.56863177 0.35029435 0.56856787
		 0.37530568 0.56861579 0.32531399 0.56844097 0.531582 0.56867695 0.57217348 0.56866956
		 0.5016315 0.56868243 0.46407995 0.56868923 0.43394375 0.56869471 0.57523108 0.56870008
		 0.36388338 0.60706085 0.36376894 0.58211297 0.36369711 0.5571205 0.36365238 0.53587258
		 0.36361131 0.51085293 0.36356577 0.47202763 0.36354202 0.43573382 0.36354303 0.41072887
		 0.36357397 0.38439324 0.36368066 0.35949728 0.5681802 0.63288528 0.29718775 0.35711324
		 0.34053594 0.37989321 0.5524168 0.63331026 0.29905576 0.35711306 0.56853724 0.60720766
		 0.29905754 0.37548131 0.35890129 0.36384133 0.56860042 0.58213896 0.575248 0.3638331
		 0.56864309 0.31619534 0.5525496 0.31560498 0.61671335 0.3570821 0.55687976 0.36383155
		 0.61671513 0.37545034 0.56831539 0.35938412 0.57522964 0.58506727 0.34552437 0.31615674
		 0.35893992 0.63328075 0.55686146 0.58506572 0.34736681 0.31637171 0.34723082 0.35934108
		 0.34535834 0.35930553 0.36353779 0.31575558 0.34057319 0.58507884 0.34762466 0.63284051
		 0.36370203 0.63337052 0.34057024 0.56871164 0.3405346 0.31562531 0.35894147 0.5850755
		 0.35890287 0.31562316 0.34053767 0.34183431 0.34741157 0.60717779 0.34054056 0.36686337
		 0.34737876 0.58220696 0.39222866 0.31563938 0.3924686 0.63340229 0.340565 0.539958
		 0.29906046 0.40546563 0.38888562 0.36383584 0.5268954 0.36382905 0.61671805 0.40543467
		 0.38892424 0.6332773 0.52687716 0.58506322 0.38892579 0.58507001 0.3888872 0.31561965
		 0.56838024 0.38425696 0.56845021 0.41057256 0.34056363 0.56459403 0.34718564 0.38431385
		 0.34716469 0.41069651 0.34056056 0.53824776 0.51960856 0.31547847 0.3405419 0.41272095
		 0.51970589 0.63329661 0.42098567 0.31560755 0.42123678 0.63338584 0.34055978 0.51120436
		 0.45383814 0.31556189 0.48671114 0.31551355 0.45407712 0.6333555 0.34055382 0.47837654
		 0.48690414 0.63331741 0.34054786 0.44554874 0.41537935 0.58506525 0.41534072 0.31561658
		 0.4153778 0.6332742 0.50042361 0.58506107 0.29906303 0.43191919 0.41533914 0.36383107
		 0.50044191 0.3638269 0.61672068 0.43188822 0.4339467 0.58506179 0.43390808 0.3156144
		 0.4640829 0.5850563 0.4640443 0.31561092 0.43394515 0.63327205 0.48185617 0.5850594
		 0.46408138 0.63326854 0.45172 0.58505702 0.29906484 0.45048654 0.4339065 0.36382768
		 0.2990678 0.48062277 0.46404272 0.36382219 0.48187453 0.36382535 0.61672246 0.45045558
		 0.45173836 0.36382285 0.61672544 0.4805918 0.56850362 0.43556929 0.56856239 0.47186539
		 0.34055763 0.51325041 0.34716836 0.43572962 0.3471939 0.47204638 0.3405534 0.4769752
		 0.56860685 0.51071292 0.56862509 0.53576648 0.34054887 0.43816569 0.34723929 0.5108912
		 0.34727958 0.53592747 0.34054595 0.41314799 0.56862724 0.55705976 0.34732282 0.55719054
		 0.34054348 0.39189246 0.50163287 0.63326418 0.41416848 0.58505392 0.41418675 0.36381969
		 0.61672902 0.51814336 0.29907143 0.51817429 0.50159431 0.3638154 0.50163448 0.58504951
		 0.50159585 0.3156065 0.53158337 0.63326061 0.38421798 0.58505142 0.38423625 0.36381719
		 0.616732 0.54809386 0.29907435 0.54812479 0.53154474 0.36380991 0.53158492 0.58504403
		 0.53154635 0.31560305 0.57217491 0.63325596 0.34362641 0.58504808 0.34364477 0.36381379
		 0.61673594 0.58868539 0.29907832 0.58871633 0.57213628 0.36380258 0.57217646 0.58503675
		 0.57213783 0.31559831 0.57525736 0.6332556 0.61779785 0.5855968 0.34056228 0.36381361
		 0.61641181 0.36176798 0.29907861 0.59179878 0.29760349 0.36346063 0.57525897 0.58503616
		 0.29920027 0.58637452 0.57524931 0.56456661 0.54797423 0.58487821 0.57282734 0.5848462
		 0.57525223 0.58952212 0.57524598 0.53574294 0.51919121 0.584921 0.61599946 0.58526129
		 0.49420029 0.5849508 0.57524312 0.51074171 0.57523912 0.47694784 0.46040449 0.5849781
		 0.61662996 0.56884664 0.34054536 0.56868064 0.61620784 0.36361116 0.34056097 0.37986216
		 0.61673462 0.37969697 0.57298636 0.36381245 0.57300282 0.59177208 0.54805195 0.36370945
		 0.5480473 0.59177452 0.34055826 0.41269001 0.61677134 0.41256171 0.29940772 0.36376432
		 0.32528764 0.59179628 0.32530832 0.36381575 0.29904777 0.37979779 0.57522166 0.3798506
		 0.29898101 0.41257238 0.57522762 0.41267833 0.61680269 0.53998101 0.34054768 0.53992701
		 0.29945415 0.58454585 0.32512662 0.58490181 0.57522339 0.34180695 0.57525599 0.56866896
		 0.29902494 0.5684728 0.57525074 0.53991532 0.29903883 0.53982222 0.2989859 0.44542566
		 0.57523358 0.44550613 0.5752455 0.51116168 0.29903746 0.51109588 0.61681163 0.51115203
		 0.34055012 0.51117325 0.5192138 0.36367345 0.51922363 0.59177732 0.42916894 0.59178615
		 0.42908949 0.36367789 0.4040539 0.36369726 0.4041473 0.59178859 0.46042854 0.59178305
		 0.46037197 0.36366436 0.4942224 0.59177977 0.49419227 0.36366618 0.57523549 0.44568825
		 0.4291279 0.5849967 0.57523257 0.42066664 0.40408322 0.58500779 0.35031673 0.59179378
		 0.35024136 0.36376396 0.35018271 0.58496356 0.57522631 0.36683607 0.57522923 0.39186513
		 0.37524897 0.58499622 0.37524864 0.36372828 0.37534583 0.59179133 0.6168015 0.47826621
		 0.34055275 0.47834548 0.61678791 0.44540051 0.34055555 0.44551769 0.29900891 0.47826773
		 0.57523954 0.47833392 0.5729872 0.43189248 0.4603141 0.5293802 0.46031314 0.41950059
		 0.4603141 0.50442475 0.46031386 0.47444043 0.46031344 0.44948494 0.46031088 0.50447476
		 0.46031535 0.52938795 0.46029568 0.41949207 0.46406144 0.53822923 0.45547664 0.41949293
		 0.45549625 0.52938879 0.4603011 0.44952685 0.45548207 0.44952771 0.46030551 0.47444001
		 0.43392521 0.53822863 0.45547783 0.41950065 0.45547879 0.52938026 0.38890326 0.5895294
		 0.35891891 0.5895288 0.45547813 0.449485 0.46031356 0.5043847 0.46031404 0.52938068;
	setAttr ".uvst[0].uvsp[1000:1249]" 0.46031225 0.41950008 0.53156352 0.53575325
		 0.45547795 0.41950017 0.45547968 0.5293808 0.46031272 0.44944438 0.45547837 0.44944447
		 0.46031308 0.47444043 0.50161302 0.53575265 0.45548278 0.41949913 0.45547664 0.52938139
		 0.53156537 0.44569859 0.46030927 0.52938175 0.46031535 0.4194994 0.46031058 0.50437415
		 0.46031213 0.47444057 0.50161493 0.44569793 0.46031374 0.44943303 0.45548117 0.44943276
		 0.45548272 0.41949186 0.4554919 0.52938938 0.46406353 0.43814722 0.46030927 0.52938902
		 0.46030003 0.41949144 0.460307 0.50446439 0.46030456 0.47444025 0.4339273 0.43814659
		 0.46030259 0.44951558 0.45548528 0.449516 0.48664999 0.47194964 0.45789635 0.47194529
		 0.48664922 0.47694147 0.45789558 0.47693706 0.37270409 0.47692388 0.50042963 0.51118648
		 0.41535085 0.54005849 0.34395123 0.47192758 0.54823142 0.47195894 0.51540357 0.47195399
		 0.54823065 0.47695076 0.51540285 0.47694576 0.31112266 0.47691417 0.50043511 0.44553098
		 0.41535866 0.47847706 0.27829564 0.47191727 0.2454679 0.47191209 0.7031526 0.47198206
		 0.21264014 0.47190696 0.5004378 0.41270319 0.21263933 0.47689873 0.70315188 0.47697383
		 0.61388624 0.47696066 0.5810585 0.47695565 0.3589291 0.41281432 0.58105922 0.47196388
		 0.42791122 0.47693247 0.40145773 0.47692841 0.38889372 0.56880879 0.4014585 0.47193664
		 0.6766991 0.47197819 0.67669833 0.47697002 0.64671397 0.47696561 0.64671469 0.47197384
		 0.30273262 0.5400393 0.30272806 0.56879294 0.34362733 0.54004943 0.3436237 0.56880307
		 0.3436352 0.478468 0.34363097 0.5112958 0.30274236 0.4784579 0.30273718 0.51128578
		 0.61305869 0.41285148 0.34363925 0.44564021 0.30275276 0.41280231 0.30274755 0.4456301
		 0.39658511 0.36017999 0.42158571 0.58141005 0.34363693 0.41312703 0.34363639 0.43814471
		 0.49667048 0.58142197 0.34363484 0.51322943 0.52166772 0.58142591 0.54801404 0.58143008
		 0.34363431 0.53822672 0.34363377 0.56457305 0.30272606 0.58139133 0.61304909 0.36018023
		 0.61306393 0.38002369 0.30275798 0.37997457 0.5729866 0.36018023 0.57300341 0.36748323
		 0.34364921 0.36745054 0.30275995 0.36744043 0.35156769 0.36744818 0.34363788 0.36809281
		 0.35892355 0.36809313 0.38890791 0.36809376 0.4153614 0.3680943 0.43392879 0.36809468
		 0.46406502 0.36809531 0.50161654 0.36809614 0.53156698 0.36809677 0.35093415 0.36808157
		 0.36346847 0.36808318 0.39629614 0.36808735 0.42912388 0.36809155 0.46195161 0.36809573
		 0.49477947 0.36809993 0.52353311 0.36810362 0.55228668 0.36810735 0.35155064 0.58870065
		 0.3515507 0.54810905 0.35155076 0.51815867 0.35155076 0.48060712 0.35155076 0.45047083
		 0.35155082 0.43190351 0.35155082 0.40544996 0.35155088 0.37546566 0.35155088 0.36017999
		 0.35153383 0.58139908 0.35153583 0.56880069 0.35154039 0.54004705 0.35154492 0.51129341
		 0.3515501 0.47846565 0.35155532 0.44563779 0.3515605 0.41281006 0.35156572 0.37998232
		 0.38890558 0.47695518 0.35892123 0.47695455 0.46042913 0.36746541 0.34363556 0.47695422
		 0.46042714 0.37999955 0.46042195 0.41282728 0.46041676 0.44565502 0.46041152 0.47848287
		 0.46040633 0.5113107 0.46040174 0.54006433 0.46039724 0.56881797 0.46041226 0.36018005
		 0.46039525 0.58141625 0.46041226 0.37546578 0.46041226 0.40545008 0.4604122 0.43190363
		 0.4604122 0.45047095 0.46041214 0.48060724 0.46041209 0.51815879 0.46041209 0.54810917
		 0.56487101 0.47697029 0.55227244 0.47696868 0.5235188 0.47696495 0.49476522 0.47696131
		 0.46193755 0.47695714 0.42910987 0.47695288 0.39628208 0.47694868 0.36345422 0.47694451
		 0.57215625 0.47695902 0.53156471 0.47695816 0.50161427 0.47695753 0.46406269 0.47695675
		 0.43392652 0.47695613 0.41535914 0.47695574 0.35091996 0.4769429 0.35091567 0.51073676
		 0.46041203 0.58870077 0.49420536 0.58870077 0.56488508 0.3681089 0.40413147 0.58870065
		 0.57215852 0.36809763 0.35092741 0.42066175 0.52349955 0.62960184 0.55225319 0.62960553
		 0.34363043 0.5400548 0.49478573 0.31929216 0.46191812 0.62959397 0.49474597 0.62959814
		 0.34363532 0.4784734 0.34364057 0.41281787 0.34363794 0.44564554 0.57216412 0.41284138
		 0.42909038 0.6295898 0.57216823 0.38001364 0.57215691 0.44569942 0.572155 0.53575408
		 0.42915308 0.58870077 0.56489134 0.31930113 0.34364414 0.36745593 0.51920652 0.58870077
		 0.54803091 0.58870089 0.5721544 0.56457782 0.57215387 0.58953327 0.34362817 0.56880844
		 0.34364313 0.37999013 0.56485158 0.62960708 0.57215303 0.62959576 0.57298642 0.58870089
		 0.38421869 0.58140993 0.34362715 0.58140683 0.53156805 0.31928897 0.57215953 0.31928983
		 0.5315783 0.36747432 0.57216984 0.36747938 0.61304891 0.54810941 0.61304891 0.58870089
		 0.41416919 0.58141243 0.50161755 0.31928837 0.5016278 0.3674705 0.61304897 0.51815891
		 0.45172071 0.58141541 0.46406603 0.31928757 0.46407628 0.36746573 0.61304897 0.48060736
		 0.48185694 0.58141768 0.4339298 0.31928694 0.43394011 0.36746198 0.61304897 0.45047113
		 0.61304903 0.40545025 0.41534561 0.58141047 0.52687782 0.58142138 0.30274305 0.43190345
		 0.52689481 0.36747047 0.50044125 0.36746839 0.38891917 0.36745626 0.41535592 0.62959254
		 0.35893488 0.36745244 0.35892457 0.31928536 0.61304909 0.37546596 0.55686218 0.58142376
		 0.34362209 0.58140135 0.30274314 0.36017993 0.3436324 0.62959099 0.3436389 0.31928504
		 0.45539761 0.50319427 0.45540011 0.53194791 0.55686545 0.54007173 0.55686313 0.56882536
		 0.46038932 0.38924873 0.50042987 0.51131368 0.45538771 0.38924915 0.45539021 0.41800278
		 0.4604044 0.56193173 0.46038681 0.36049512 0.50042528 0.56882083 0.45540279 0.56193221
		 0.45538521 0.36049554 0.45540518 0.5883857 0.45539254 0.44445631 0.46039408 0.44445586
		 0.4553951 0.47444063 0.46039671 0.47444022 0.61863971 0.41254723 0.61865604 0.44539687;
	setAttr ".uvst[0].uvsp[1250:1381]" 0.2971693 0.51110077 0.29714078 0.47827035
		 0.29711768 0.44542503 0.51971608 0.63516498 0.48690835 0.6351856 0.48671016 0.31364518
		 0.51962376 0.31360918 0.35023341 0.36189592 0.37524265 0.36186025 0.37524265 0.58686447
		 0.3501685 0.58683246 0.34551054 0.5822193 0.34545472 0.55719978 0.57049549 0.55706567
		 0.57046926 0.58215272 0.61866975 0.47826537 0.61868 0.51115525 0.40404943 0.36182916
		 0.40408051 0.58687586 0.32507443 0.58677542 0.32527721 0.36194658 0.49419215 0.36179814
		 0.5192157 0.36180529 0.42912737 0.58686489 0.46040547 0.58684611 0.46037045 0.36179626
		 0.42908651 0.36180979 0.54805791 0.36184111 0.61867213 0.54000109 0.29717046 0.53983366
		 0.29711193 0.41256177 0.29715684 0.56853795 0.29762837 0.58484185 0.57522035 0.31559792
		 0.61850274 0.56893921 0.29717392 0.37973186 0.29721063 0.59179896 0.29918444 0.36192179
		 0.61860228 0.37961748 0.57301116 0.36193943 0.61673623 0.59176785 0.61802661 0.36328995
		 0.5752576 0.63512355 0.51919425 0.58678901 0.49420246 0.58681881 0.61618674 0.5871129
		 0.57284117 0.58671522 0.54797667 0.58674639 0.34541145 0.53593445 0.57049334 0.53576845
		 0.34537116 0.51089585 0.3453258 0.47204876 0.5704304 0.4718627 0.57047498 0.51071221
		 0.3453002 0.43572941 0.3452965 0.41069269 0.57031822 0.41056696 0.57037163 0.43556491
		 0.45407879 0.63522363 0.42123497 0.63525414 0.45383301 0.31369373 0.42097709 0.31373936
		 0.39245561 0.63527167 0.3922078 0.31377107 0.55247951 0.63517833 0.55263543 0.31373236
		 0.34531707 0.38430414 0.34056655 0.58954954 0.57018423 0.35936677 0.57024837 0.38425124
		 0.36362827 0.63524389 0.36344993 0.31388837 0.345543 0.60722041 0.34578279 0.63307619
		 0.34731093 0.63464588 0.34704039 0.31455228 0.34057164 0.6332829 0.57049429 0.31600437
		 0.56897545 0.31439695 0.32526472 0.3571105 0.56847703 0.63471067 0.57000887 0.6331386
		 0.57213759 0.31373033 0.57522011 0.31372994 0.57521874 0.36380205 0.29721034 0.58871651
		 0.61860394 0.58868515 0.61860418 0.59176767 0.34054399 0.58504772 0.57217509 0.63512397
		 0.53154612 0.31373504 0.29720637 0.54812503 0.61860001 0.54809368 0.53158361 0.63512862
		 0.50159562 0.31373852 0.29720345 0.51817447 0.61859703 0.51814318 0.50163311 0.63513213
		 0.46404409 0.31374291 0.29719979 0.48062295 0.61859339 0.48059162 0.46408159 0.63513649
		 0.61859047 0.4504554 0.61858869 0.43188804 0.29719687 0.45048672 0.29719505 0.43191937
		 0.43394536 0.63514 0.415378 0.63514221 0.43390787 0.31374642 0.41534051 0.3137486
		 0.61858606 0.40543449 0.29719245 0.40546584 0.38892442 0.63514531 0.38888699 0.31375167
		 0.35890263 0.31375515 0.35894012 0.63514876 0.61858314 0.37545016 0.29718953 0.37548149
		 0.34053439 0.3137573 0.34057185 0.63515091 0.34053302 0.36384466 0.61858135 0.35708189
		 0.46042365 0.41961271 0.46405861 0.4381513 0.46042722 0.50439829 0.45536405 0.41961288
		 0.45536834 0.52926815 0.45536762 0.50439847 0.46042603 0.47444034 0.45536643 0.47444054
		 0.45536536 0.44957089 0.43392241 0.43815479;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 1042 ".vt";
	setAttr ".vt[0:165]"  -12.39912987 0.35191405 8.54668236 12.39991379 0.35191405 8.54668236
		 -12.39912987 0.35191405 -8.55185032 12.39991379 0.35191405 -8.55185032 -12.39912987 1.57351565 8.54668236
		 12.39991379 1.57351565 8.54668236 -12.39912987 1.57351565 -8.55185032 12.39991379 1.57351565 -8.55185032
		 7.20380116 0.35191405 8.54668236 7.20380116 1.57351565 8.54668236 7.20380354 1.57351565 8.93311024
		 7.20380354 1.57351565 -8.95860958 7.20380116 1.57351565 -8.55184937 7.20380116 0.35191405 -8.55184937
		 9.19819546 0.35191405 8.54668236 9.19819546 0.35191405 -8.55184937 9.19819546 1.57351565 -8.55184937
		 9.19819832 1.57351565 -8.95860958 9.19819832 1.57351565 8.93311024 9.19819546 1.57351565 8.54668236
		 -12.39912987 0.35191405 7.54497814 7.20380116 0.35191405 7.54497814 9.19819546 0.35191405 7.54497814
		 12.39991379 0.35191405 7.54497814 12.39991379 1.57351565 7.54497814 12.79884624 1.57351565 7.54498005
		 9.19819832 -1.2207031e-06 7.5449791 7.20380354 -1.2207031e-06 7.54498005 -12.7988472 1.57351565 7.54498005
		 -12.39912987 1.57351565 7.54497814 12.79884624 1.57351565 -7.54501581 12.39991379 1.57351565 -7.54501486
		 12.39991379 0.35191405 -7.54501486 9.19819546 0.35191405 -7.54501486 7.20380116 0.35191405 -7.54501486
		 -12.39912987 0.35191405 -7.54501486 -12.39912987 1.57351565 -7.54501486 -12.7988472 1.57351565 -7.54501581
		 7.20380354 -1.2207031e-06 -7.54501581 9.19819927 -1.2207031e-06 -7.54501581 -12.39912987 0.35191405 -2.94915032
		 7.20380116 0.35191405 -2.94915032 9.19819546 0.35191405 -2.94915032 12.39991379 0.35191405 -2.94915032
		 12.39991379 1.57351565 -2.94915032 12.79884624 1.57351565 -2.94915032 9.19819927 -1.2207031e-06 -2.94915032
		 7.20380354 -1.2207031e-06 -2.94915032 -12.7988472 1.57351565 -2.94915032 -12.39912987 1.57351565 -2.94915032
		 7.20380354 6.083919048 -8.95860958 7.20380116 6.083919048 -8.55184937 9.19819546 6.083919048 -8.55184937
		 9.19819832 6.083919048 -8.95860958 -12.39912987 6.083919048 -8.55185032 12.39991379 6.083919048 -8.55185032
		 12.39991379 6.083919048 -7.54501486 12.79884624 6.083919048 -7.54501581 -12.39912987 6.083919048 -7.54501486
		 -12.7988472 6.083919048 -7.54501581 7.20380116 6.083919048 8.54668236 7.20380354 6.083919048 8.93311024
		 -12.39912987 6.083919048 8.54668236 -12.39912987 6.083919048 7.54497814 -12.7988472 6.083919048 7.54498005
		 -12.39912987 6.083919048 -2.94915032 -12.7988472 6.083919048 -2.94915032 9.19819546 6.083919048 8.54668236
		 12.39991379 6.083919048 8.54668236 9.19819832 6.083919048 8.93311024 12.39991379 6.083919048 7.54497814
		 12.79884624 6.083919048 7.54498005 7.20380354 7.56778622 -8.95860958 7.20380116 7.56778622 -8.55184937
		 9.19819546 7.56778622 -8.55184937 9.19819832 7.56778622 -8.95860958 -12.39912987 7.56778622 -8.55185032
		 12.39991379 7.56778622 -8.55185032 12.39991379 7.56778622 -7.54501486 12.79884624 7.56778622 -7.54501581
		 -12.39912987 7.56778622 -7.54501486 -12.7988472 7.56778622 -7.54501581 7.20380116 7.56778622 8.54668236
		 7.20380354 7.56778622 8.93311024 -12.39912987 7.56778622 8.54668236 -12.39912987 7.56778622 7.54497814
		 -12.7988472 7.56778622 7.54498005 -12.39912987 7.56778622 -2.94915032 -12.7988472 7.56778622 -2.94915032
		 9.19819546 7.56778622 8.54668236 12.39991379 7.56778622 8.54668236 9.19819832 7.56778622 8.93311024
		 12.39991379 7.56778622 7.54497814 12.79884624 7.56778622 7.54498005 9.19819546 3.96980476 8.54668236
		 9.19819832 3.96980476 8.93311024 12.79884624 3.96980476 7.54498005 12.39991379 3.96980476 7.54497814
		 12.39991379 3.96980476 8.54668236 7.20380116 3.96980476 8.54668236 -12.39912987 3.96980476 8.54668236
		 -12.39912987 3.96980476 7.54497814 -12.39912987 3.96980476 -2.94915032 -12.7988472 3.96980476 -2.94915032
		 -12.7988472 3.96980476 7.54498005 7.20380354 3.96980476 8.93311024 7.20380354 3.96980476 -8.95860958
		 -12.7988472 3.96980476 -7.54501581 -12.39912987 3.96980476 -7.54501486 -12.39912987 3.96980476 -8.55185032
		 7.20380116 3.96980476 -8.55184937 9.19819546 3.96980476 -8.55184937 12.39991379 3.96980476 -8.55185032
		 12.39991379 3.96980476 -7.54501486 12.79884624 3.96980476 -7.54501581 9.19819832 3.96980476 -8.95860958
		 3.10052419 0.35191405 8.54668236 3.10052419 1.57351565 8.54668236 3.10052395 3.96980476 8.54668236
		 3.10052419 6.083919048 8.54668236 3.10052419 7.56778669 8.54668236 3.10052347 7.56778669 8.93311024
		 3.10052347 6.083919048 8.93311024 3.10052347 3.96980476 8.93311024 3.10052347 1.57351565 8.93311024
		 3.10052347 -1.1825563e-06 7.54498005 3.10052347 -1.1825563e-06 -2.94915032 3.10052347 -1.2207031e-06 -7.54501581
		 3.10052347 1.57351565 -8.95860958 3.10052347 3.96980476 -8.95860958 3.10052347 6.083919048 -8.95860958
		 3.10052347 7.56778669 -8.95860958 3.10052419 7.56778669 -8.55184937 3.10052419 6.083919048 -8.55184937
		 3.10052419 3.96980476 -8.55184937 3.10052419 1.57351565 -8.55184937 3.10052419 0.35191405 -8.55184937
		 3.10052395 0.35191405 -7.5450139 3.10052419 0.35191405 -2.94915032 3.10052419 0.35191405 7.54497814
		 5.098260403 -1.2207031e-06 7.5449791 5.098260403 1.57351565 8.93311024 5.098260403 3.96980476 8.93311024
		 5.098260403 6.083919048 8.93311024 5.098260403 7.56778669 8.93311024 5.09826088 7.56778669 8.54668236
		 5.09826088 6.083919048 8.54668236 5.09826088 3.96980476 8.54668236 5.09826088 1.57351565 8.54668236
		 5.09826088 0.35191405 8.54668236 5.09826088 0.35191405 7.54497814 5.09826088 0.35191405 -2.94915032
		 5.09826088 0.35191405 -7.54501486 5.09826088 0.35191405 -8.55184937 5.09826088 1.57351565 -8.55184937
		 5.09826088 3.96980476 -8.55184937 5.09826088 6.083919048 -8.55184937 5.09826088 7.56778669 -8.55184937
		 5.098260403 7.56778669 -8.95860958 5.098260403 6.083919048 -8.95860958 5.098260403 3.96980476 -8.95860958
		 5.098260403 1.57351565 -8.95860958 5.098260403 -1.2207031e-06 -7.54501581 5.098260403 -1.2207031e-06 -2.94915032
		 -2.90009952 0.35191405 8.54668236 -2.90009952 1.57351565 8.54668236;
	setAttr ".vt[166:331]" -2.90009952 3.96980476 8.54668236 -2.90009952 6.083919048 8.54668236
		 -2.90009952 7.56778669 8.54668236 -2.90010142 7.56778669 8.93311024 -2.90010142 6.083919048 8.93311024
		 -2.90010142 3.96980476 8.93311024 -2.90010142 1.57351565 8.93311024 -2.90010142 -1.2207031e-06 7.54498005
		 -2.90010142 -1.2207031e-06 -2.94915032 -2.90010142 -1.2207031e-06 -7.54501581 -2.90010142 1.57351565 -8.95860958
		 -2.90010142 3.96980476 -8.95860958 -2.90010142 6.083919048 -8.95860958 -2.90010142 7.56778669 -8.95860958
		 -2.90009952 7.56778669 -8.55184937 -2.90009952 6.083919048 -8.55184937 -2.90009952 3.96980476 -8.55184937
		 -2.90009952 1.57351565 -8.55184937 -2.90009952 0.35191405 -8.55184937 -2.90009952 0.35191405 -7.54501486
		 -2.90009952 0.35191405 -2.94915032 -2.90009952 0.35191405 7.54497814 -4.8994627 0.35191405 8.54668236
		 -4.8994627 1.57351565 8.54668236 -4.8994627 3.96980476 8.54668236 -4.8994627 6.083919048 8.54668236
		 -4.8994627 7.56778669 8.54668236 -4.89946556 7.56778669 8.93311024 -4.89946556 6.083919048 8.93311024
		 -4.89946556 3.96980476 8.93311024 -4.89946556 1.57351565 8.93311024 -4.89946556 -1.2207031e-06 7.5449791
		 -4.89946556 -1.2207031e-06 -2.94915032 -4.89946556 -1.2207031e-06 -7.54501581 -4.89946556 1.57351565 -8.95860958
		 -4.89946556 3.96980476 -8.95860958 -4.89946556 6.083919048 -8.95860958 -4.89946556 7.56778669 -8.95860958
		 -4.8994627 7.56778669 -8.55184937 -4.8994627 6.083919048 -8.55184937 -4.8994627 3.96980476 -8.55184937
		 -4.8994627 1.57351565 -8.55184937 -4.8994627 0.35191405 -8.55184937 -4.8994627 0.35191405 -7.54501486
		 -4.8994627 0.35191405 -2.94915032 -4.8994627 0.35191405 7.54497814 7.20380449 9.97621346 -8.95860958
		 7.20380211 9.97621346 -8.55184937 9.19819546 9.97621346 -8.55184937 9.19819832 9.97621346 -8.95860958
		 3.10052347 9.97621346 -8.95860577 3.10052419 9.97621346 -8.55184555 5.09826088 9.97621346 -8.5518465
		 5.098260403 9.97621346 -8.95860672 12.39991379 9.97621346 -8.55185032 9.19819546 9.97621346 8.54668331
		 12.39991379 9.97621346 8.54668427 9.19819832 9.97621346 8.93311119 12.39991379 9.97621346 7.54497814
		 12.79884624 9.97621346 7.54498005 12.39991379 9.97621346 -7.54501486 12.79884624 9.97621346 -7.54501581
		 7.20380211 9.97621346 8.54668236 7.20380449 9.97621346 8.93311024 -2.90010142 9.97621346 -8.95860672
		 -2.90009952 9.97621346 -8.5518465 5.098261356 9.97621346 8.54668236 5.09826088 9.97621346 8.93311024
		 -12.39912987 9.97621346 8.54668236 -12.39912987 9.97621346 7.54497814 -12.7988472 9.97621346 7.54498005
		 -12.39912987 9.97621346 -7.54501486 -12.7988472 9.97621346 -7.54501581 -12.39912987 9.97621346 -8.55185032
		 -12.39912987 9.97621346 -2.94915032 -12.7988472 9.97621346 -2.94915032 -4.8994627 9.97621346 8.54668236
		 -4.89946556 9.97621346 8.93311024 -4.8994627 9.97621346 -8.55184937 -4.89946556 9.97621346 -8.95860958
		 3.10052419 9.97621346 8.54667854 3.10052347 9.97621346 8.93310642 -2.90009952 9.97621346 8.54667854
		 -2.90010142 9.97621346 8.93310642 7.20380449 12.97725868 -8.95860958 7.20380211 12.97725868 -8.55184937
		 9.19819546 12.97725868 -8.55184937 9.19819832 12.97725868 -8.95860958 2.90222096 12.97725868 -8.95860577
		 2.90222239 12.97725868 -8.55184555 4.90026999 12.97725868 -8.5518465 4.90026951 12.97725868 -8.95860672
		 12.39991379 12.97725868 -8.55185032 9.19819546 12.97725868 8.54668331 12.39991379 12.97725868 8.54668427
		 9.19819832 12.97725868 8.93311119 12.39991379 12.97725868 7.54497814 12.79884624 12.97725868 7.54498005
		 12.39991379 12.97725868 -7.54501486 12.79884624 12.97725868 -7.54501581 7.20380211 12.97725868 8.54668236
		 7.20380449 12.97725868 8.93311024 -2.29672575 12.97725868 -8.95860672 -2.29672384 12.97725868 -8.5518465
		 4.90027046 12.97725868 8.54668236 4.90026999 12.97725868 8.93311024 -12.39912987 12.97725868 8.54668236
		 -12.39912987 12.97725868 7.54497814 -12.7988472 12.97725868 7.54498005 -12.39912987 12.97725868 -7.54501486
		 -12.7988472 12.97725868 -7.54501581 -12.39912987 12.97725868 -8.55185032 -12.39912987 12.97725868 -2.94915032
		 -12.7988472 12.97725868 -2.94915032 -4.2964015 12.97725868 8.54668236 -4.29640388 12.97725868 8.93311024
		 -4.2964015 12.97725868 -8.55184937 -4.29640388 12.97725868 -8.95860958 2.90222239 12.97725868 8.54667854
		 2.90222096 12.97725868 8.93310642 -2.29672384 12.97725868 8.54667854 -2.29672575 12.97725868 8.93310642
		 7.20380449 15.37084198 -8.95861435 7.20380211 15.37084198 -8.55185318 9.19819546 15.37084198 -8.55185223
		 9.19819832 15.37084198 -8.95861244 2.90222096 15.37084198 -8.95860958 2.90222239 15.37084198 -8.55184937
		 4.90026999 15.37084198 -8.55185127 4.90026951 15.37084198 -8.95861149 12.39991379 15.37084198 -8.55185223
		 9.19819546 15.37084198 8.54668427 12.39991379 15.37084198 8.54668522 9.19819832 15.37084198 8.9331131
		 12.39991379 15.37084198 7.54497814 12.79884624 15.37084198 7.54498005 -12.39912987 15.37084198 8.54668236
		 -12.39912987 15.37084198 7.54497814 -12.7988472 15.37084198 7.54498005 12.39991379 15.37084198 -7.54501486
		 12.79884624 15.37084198 -7.54501581 -12.39912987 15.37084198 -7.54501486 -12.7988472 15.37084198 -7.54501581
		 -12.39912987 15.37084198 -8.55184841 -12.39912987 15.37084198 -2.94915032 -12.7988472 15.37084198 -2.94915032
		 7.20380211 15.37084198 8.54668236 7.20380449 15.37084198 8.93311024 -2.29672575 15.37084198 -8.95861053
		 -2.29672384 15.37084198 -8.55185032 4.90027046 15.37084198 8.54668236 4.90026999 15.37084198 8.93311024
		 -4.2964015 15.37084198 8.54668236 -4.29640388 15.37084198 8.93311024 -4.2964015 15.37084198 -8.55184746
		 -4.29640388 15.37084198 -8.95860767 2.90222239 15.37084198 8.54668617 2.90222096 15.37084198 8.93311405
		 -2.29672384 15.37084198 8.54668617 -2.29672575 15.37084198 8.93311405 7.20380449 18.61483574 -8.95861435
		 7.20380878 18.61483574 -8.55185413 9.19820309 18.61483574 -8.55185223 9.19819832 18.61483574 -8.95861244
		 2.90222096 18.61483574 -8.95861912 2.9021728 18.61483574 -8.55184555;
	setAttr ".vt[332:497]" 4.90022087 18.61483574 -8.55185318 4.90026951 18.61483574 -8.95861149
		 12.39991474 18.61483574 -8.55185223 9.19819546 18.61483574 8.54668522 12.39991379 18.61483574 8.54668617
		 9.19819832 18.61483574 8.9331131 12.39991379 18.61483574 7.54497385 12.79884624 18.61483574 7.54498005
		 -12.39912987 18.61483574 8.54668236 -12.39912987 18.61483574 7.54497194 -12.7988472 18.61483574 7.54498005
		 12.39991474 18.61483574 -7.54501295 12.79884624 18.61483574 -7.54501581 -12.39912987 18.61483574 -7.5450139
		 -12.7988472 18.61483574 -7.54501581 -12.39912987 18.61483574 -8.55185223 -12.39912987 18.61483574 -2.94915009
		 -12.7988472 18.61483574 -2.94915032 7.20380211 18.61483574 8.54668236 7.20380449 18.61483574 8.93311024
		 -2.29672575 18.61483574 -8.95862103 -2.29667473 18.61483574 -8.55184555 4.90027046 18.61483574 8.54668236
		 4.90026999 18.61483574 8.93311024 -4.2964015 18.61483574 8.54668236 -4.29640388 18.61483574 8.93311024
		 -4.29635239 18.61483574 -8.55185223 -4.29640388 18.61483574 -8.95860863 2.90222239 18.61483574 8.5467062
		 2.90222096 18.61483574 8.93313503 -2.29672384 18.61483574 8.5467062 -2.29672575 18.61483574 8.93313503
		 9.19819546 18.61483574 7.54496908 9.19819546 18.96674347 7.54496908 7.20380211 18.61483574 7.54496574
		 7.20380211 18.96674347 7.54496574 -2.29672384 18.61483574 7.54499006 2.90222239 18.61483574 7.54499006
		 -2.29672384 18.96674347 7.54499006 2.90222239 18.96674347 7.54499006 4.90027046 18.61483574 7.54496574
		 4.90027046 18.96674347 7.54496574 -4.2964015 18.61483574 7.54496574 -4.2964015 18.96674347 7.54496574
		 9.19820404 18.61483574 -2.94914722 12.39991474 18.61483955 -2.94914675 9.19820404 18.96674347 -2.94914722
		 7.20380926 18.61483574 -2.94915104 7.20380926 18.96674347 -2.94915104 -2.29665995 18.61483574 -2.94912648
		 2.90215826 18.61483574 -2.94912601 -2.29665995 18.96674347 -2.94912648 2.90215826 18.96674347 -2.94912601
		 4.90020609 18.61483574 -2.94915104 4.90020609 18.96674347 -2.94915104 -4.2963376 18.61483574 -2.94915104
		 -4.2963376 18.96674347 -2.94915104 9.19820881 18.61483574 -7.54501104 9.19820881 18.96674347 -7.54501104
		 7.20381355 18.61483574 -7.54501486 7.20381355 18.96674347 -7.54501486 -2.29663157 18.61483574 -7.54499006
		 2.90212989 18.61483574 -7.54499006 -2.29663157 18.96674347 -7.54499006 2.90212989 18.96674347 -7.54499006
		 4.90017748 18.61483574 -7.54501486 4.90017748 18.96674347 -7.54501486 -4.29630995 18.61483574 -7.54501486
		 -4.29630995 18.96674347 -7.54501486 12.39991379 15.37084198 -2.94914675 12.39991379 12.97725868 -2.94914675
		 12.39991379 9.97621346 -2.94914675 12.39991379 7.56778622 -2.94914675 12.39991379 6.083919048 -2.94914675
		 12.79884624 6.083919048 -2.94914675 12.79884624 7.56778622 -2.94914675 12.79884624 9.97621346 -2.94914675
		 12.79884624 12.97725868 -2.94914675 12.79884624 15.37084198 -2.94914675 12.79884624 18.61483955 -2.94914675
		 -8.59844017 -1.2207031e-06 7.5449791 -8.59844017 -1.2207031e-06 -2.94915032 -8.59844017 -1.2207031e-06 -7.54501581
		 -8.59844017 1.57351565 -8.95860958 -8.59844017 3.96980476 -8.95860958 -8.59844017 6.083919048 -8.95860958
		 -8.59844017 7.56778669 -8.95860958 -8.59844017 9.97621346 -8.95860958 -8.59843731 12.97725868 -8.95860958
		 -8.59843731 15.37084198 -8.95860767 -8.59843731 18.61483574 -8.95860863 -8.5984354 18.96674347 -7.54501486
		 -8.5984354 18.96674347 -2.94915032 -8.5984354 18.96674347 7.54496908 -8.59843731 18.61483574 8.93311024
		 -8.59843731 15.37084198 8.93311024 -8.59843731 12.97725868 8.93311024 -8.59844017 9.97621346 8.93311024
		 -8.59844017 7.56778669 8.93311024 -8.59844017 6.083919048 8.93311024 -8.59844017 3.96980476 8.93311024
		 -8.59844017 1.57351565 8.93311024 -12.39912987 0.35191405 2.29791975 -4.8994627 0.35191405 2.29791975
		 -2.90009952 0.35191405 2.29791975 3.10052419 0.35191405 2.29791975 5.09826088 0.35191405 2.29791975
		 7.20380116 0.35191405 2.29791975 9.19819546 0.35191405 2.29791975 12.39991379 0.35191405 2.29791975
		 12.39991379 1.57351565 2.29791975 12.79884624 1.57351565 2.29791975 9.19819832 -1.2207031e-06 2.29791975
		 7.20380354 -1.2207031e-06 2.29791975 5.098260403 -1.2207031e-06 2.29791975 3.10052347 -1.1825563e-06 2.29791975
		 -2.90010142 -1.2207031e-06 2.29791975 -4.89946556 -1.2207031e-06 2.29791975 -8.59844017 -1.2207031e-06 2.29791975
		 -12.7988472 1.57351565 2.29791975 -12.7988472 3.96980476 2.29791975 -12.7988472 6.083919048 2.29791975
		 -12.7988472 7.56778622 2.29791975 -12.7988472 9.97621346 2.29791975 -12.7988472 12.97725868 2.29791975
		 -12.7988472 15.37084198 2.29791975 -12.7988472 18.61483574 2.29791975 -8.5984354 18.96674347 2.29791975
		 -4.29636955 18.96674347 2.29791975 -2.29669189 18.96674347 2.29791975 2.90219021 18.96674347 2.29791975
		 4.90023851 18.96674347 2.29791975 7.20380545 18.96674347 2.29791975 9.19819927 18.96674347 2.29791975
		 12.79884624 18.61483955 2.29791975 12.79884624 15.37084198 2.29791975 12.79884624 12.97725868 2.29791975
		 12.79884624 9.97621346 2.29791975 12.79884624 7.56778622 2.29791975 12.79884624 6.083919048 2.29791975
		 12.39991379 6.083919048 2.29791975 12.39991379 7.56778622 2.29791975 12.39991379 9.97621346 2.29791975
		 12.39991379 12.97725868 2.29791975 12.39991379 15.37084198 2.29791975 12.39991474 18.61483955 2.29791975
		 9.19819927 18.61483574 2.29791975 7.20380545 18.61483574 2.29791975 4.90023851 18.61483574 2.29791975
		 2.90219021 18.61483574 2.29791975 -2.29669189 18.61483574 2.29791975 -4.29636955 18.61483574 2.29791975
		 -12.39912987 18.61483574 2.29791975 -12.39912987 15.37084198 2.29791975 -12.39912987 12.97725868 2.29791975
		 -12.39912987 9.97621346 2.29791975 -12.39912987 7.56778622 2.29791975 -12.39912987 6.083919048 2.29791975
		 -12.39912987 3.96980476 2.29791975 -12.39912987 1.57351565 2.29791975 -12.39912987 0.35191405 4.92144918
		 -4.8994627 0.35191405 4.92144918 -2.90009952 0.35191405 4.92144918 3.10052419 0.35191405 4.92144918
		 5.09826088 0.35191405 4.92144918 7.20380116 0.35191405 4.92144918;
	setAttr ".vt[498:663]" 9.19819546 0.35191405 4.92144918 12.39991379 0.35191405 4.92144918
		 12.39991379 1.57351565 4.92144918 12.79884624 1.57351565 4.92144966 9.19819832 -1.2207031e-06 4.92144966
		 7.20380354 -1.2207031e-06 4.92144966 5.098260403 -1.2207031e-06 4.92144966 3.10052347 -1.1825563e-06 4.92144966
		 -2.90010142 -1.2207031e-06 4.92144966 -4.89946556 -1.2207031e-06 4.92144966 -8.59844017 -1.2207031e-06 4.92144966
		 -12.7988472 1.57351565 4.92144966 -12.7988472 3.96980476 4.92144966 -12.7988472 6.083919048 4.92144966
		 -12.7988472 7.56778622 4.92144966 -12.7988472 9.97621346 4.92144966 -12.7988472 12.97725868 4.92144966
		 -12.7988472 15.37084198 4.92144966 -12.7988472 18.61483574 4.92144966 -8.5984354 18.96674347 4.92144442
		 -4.29638529 18.96674347 4.92144299 -2.29670787 18.96674347 4.92145491 2.90220642 18.96674347 4.92145491
		 4.90025473 18.96674347 4.92144299 7.20380354 18.96674347 4.92144299 9.19819736 18.96674347 4.92144442
		 12.79884624 18.61483955 4.92144966 12.79884624 15.37084198 4.92144966 12.79884624 12.97725868 4.92144966
		 12.79884624 9.97621346 4.92144966 12.79884624 7.56778622 4.92144966 12.79884624 6.083919048 4.92144966
		 12.39991379 6.083919048 4.92144918 12.39991379 7.56778622 4.92144918 12.39991379 9.97621346 4.92144918
		 12.39991379 12.97725868 4.92144918 12.39991379 15.37084198 4.92144918 12.39991474 18.61483955 4.9214468
		 9.19819736 18.61483574 4.92144442 7.20380354 18.61483574 4.92144299 4.90025473 18.61483574 4.92144299
		 2.90220642 18.61483574 4.92145491 -2.29670787 18.61483574 4.92145491 -4.29638529 18.61483574 4.92144299
		 -12.39912987 18.61483574 4.92144585 -12.39912987 15.37084198 4.92144918 -12.39912987 12.97725868 4.92144918
		 -12.39912987 9.97621346 4.92144918 -12.39912987 7.56778622 4.92144918 -12.39912987 6.083919048 4.92144918
		 -12.39912987 3.96980476 4.92144918 -12.39912987 1.57351565 4.92144918 7.20380116 0.35191405 -0.32561532
		 5.09826088 0.35191405 -0.32561532 3.10052419 0.35191405 -0.32561532 -2.90009952 0.35191405 -0.32561532
		 -4.8994627 0.35191405 -0.32561532 -12.39912987 0.35191405 -0.32561532 -12.39912987 1.57351565 -0.32561532
		 -12.39912987 3.96980476 -0.32561532 -12.39912987 6.083919048 -0.32561532 -12.39912987 7.56778622 -0.32561532
		 -12.39912987 9.97621346 -0.32561532 -12.39912987 12.97725868 -0.32561532 -12.39912987 15.37084198 -0.32561532
		 -12.39912987 18.61483574 -0.32561517 -4.29635382 18.61483574 -0.32561561 -2.29667592 18.61483574 -0.3256034
		 2.902174 18.61483574 -0.3256031 4.9002223 18.61483574 -0.32561561 7.20380735 18.61483574 -0.32561561
		 9.19820213 18.61483574 -0.3256138 12.39991474 18.61483955 -0.32561347 12.39991379 15.37084198 -0.32561347
		 12.39991379 12.97725868 -0.32561347 12.39991379 9.97621346 -0.32561347 12.39991379 7.56778622 -0.32561347
		 12.39991379 6.083919048 -0.32561347 12.79884624 6.083919048 -0.32561347 12.79884624 7.56778622 -0.32561347
		 12.79884624 9.97621346 -0.32561347 12.79884624 12.97725868 -0.32561347 12.79884624 15.37084198 -0.32561347
		 12.79884624 18.61483955 -0.32561347 9.19820213 18.96674347 -0.3256138 7.20380735 18.96674347 -0.32561561
		 4.9002223 18.96674347 -0.32561561 2.902174 18.96674347 -0.3256031 -2.29667592 18.96674347 -0.3256034
		 -4.29635382 18.96674347 -0.32561561 -8.5984354 18.96674347 -0.32561532 -12.7988472 18.61483574 -0.32561532
		 -12.7988472 15.37084198 -0.32561532 -12.7988472 12.97725868 -0.32561532 -12.7988472 9.97621346 -0.32561532
		 -12.7988472 7.56778622 -0.32561532 -12.7988472 6.083919048 -0.32561532 -12.7988472 3.96980476 -0.32561532
		 -12.7988472 1.57351565 -0.32561532 -8.59844017 -1.2207031e-06 -0.32561532 -4.89946556 -1.2207031e-06 -0.32561532
		 -2.90010142 -1.2207031e-06 -0.32561532 3.10052347 -1.1825563e-06 -0.32561532 5.098260403 -1.2207031e-06 -0.32561532
		 7.20380354 -1.2207031e-06 -0.32561532 9.19819832 -1.2207031e-06 -0.32561532 12.79884624 1.57351565 -0.32561532
		 12.39991379 1.57351565 -0.32561532 12.39991379 0.35191405 -0.32561532 9.19819546 0.35191405 -0.32561532
		 -12.7988472 6.083919048 -5.24708319 -12.39912987 6.083919048 -5.24708271 -12.39912987 7.56778622 -5.24708271
		 -12.39912987 9.97621346 -5.24708271 -12.39912987 12.97725868 -5.24708271 -12.39912987 15.37084198 -5.24708271
		 -12.39912987 18.61483574 -5.24708176 -4.29632378 18.61483574 -5.24708271 -2.29664564 18.61483574 -5.24705791
		 2.90214419 18.61483574 -5.24705791 4.90019178 18.61483574 -5.24708271 7.20381117 18.61483574 -5.24708271
		 9.19820595 18.61483574 -5.2470789 12.39991474 18.61483955 -5.24707985 12.39991379 15.37084198 -5.2470808
		 12.39991379 12.97725868 -5.2470808 12.39991379 9.97621346 -5.2470808 12.39991379 7.56778622 -5.2470808
		 12.39991379 6.083919048 -5.2470808 12.79884624 6.083919048 -5.24708128 12.79884624 7.56778622 -5.24708128
		 12.79884624 9.97621346 -5.24708128 12.79884624 12.97725868 -5.24708128 12.79884624 15.37084198 -5.24708128
		 12.79884624 18.61483955 -5.24708128 9.19820595 18.96674347 -5.2470789 7.20381117 18.96674347 -5.24708271
		 4.90019178 18.96674347 -5.24708271 2.90214419 18.96674347 -5.24705791 -2.29664564 18.96674347 -5.24705791
		 -4.29632378 18.96674347 -5.24708271 -8.5984354 18.96674347 -5.24708271 -12.7988472 18.61483574 -5.24708319
		 -12.7988472 15.37084198 -5.24708319 -12.7988472 12.97725868 -5.24708319 -12.7988472 9.97621346 -5.24708319
		 -12.7988472 7.56778622 -5.24708319 0.20147915 -1.2207031e-06 7.54498005 0.20147915 1.57351565 8.93311024
		 0.20147915 3.96980476 8.93311024 0.20147915 6.083919048 8.93311024 0.20147915 7.56778669 8.93311024
		 0.20147915 9.97621346 8.93310642 0.20148115 12.97725868 8.93310642 0.20148115 15.37084198 8.93311405
		 0.20148115 18.61483574 8.93313503 0.20148115 18.96674347 7.54499006 0.20148115 18.96674347 4.92145491
		 0.20148115 18.96674347 2.29791975 0.20148115 18.96674347 -0.32560325 0.20148115 18.96674347 -2.94912624
		 0.20148115 18.96674347 -5.24705791 0.20148115 18.96674347 -7.54499006 0.20148115 18.61483574 -8.95862007
		 0.20148115 15.37084198 -8.95861053 0.20148115 12.97725868 -8.95860672;
	setAttr ".vt[664:829]" 0.20147915 9.97621346 -8.95860672 0.20147915 7.56778669 -8.95860958
		 0.20147915 6.083919048 -8.95860958 0.20147915 3.96980476 -8.95860958 0.20147915 1.57351565 -8.95860958
		 0.20147915 -1.2207031e-06 -7.54501581 0.20147915 -1.2207031e-06 -2.94915032 0.20147915 -1.2207031e-06 -0.32561532
		 0.20147915 -1.2207031e-06 2.29791975 0.20147915 -1.2207031e-06 4.92144966 12.79884624 1.57351565 -5.24708319
		 12.39991379 1.57351565 -5.24708271 12.39991379 0.35191405 -5.24708271 9.19819546 0.35191405 -5.24708271
		 7.20380116 0.35191405 -5.24708271 5.09826088 0.35191405 -5.24708271 3.10052419 0.35191405 -5.24708271
		 -2.90009952 0.35191405 -5.24708271 -4.8994627 0.35191405 -5.24708271 -12.39912987 0.35191405 -5.24708271
		 -12.39912987 1.57351565 -5.24708271 -12.7988472 1.57351565 -5.24708319 -8.59844017 -1.2207031e-06 -5.24708319
		 -4.89946556 -1.2207031e-06 -5.24708319 -2.90010142 -1.2207031e-06 -5.24708319 0.20147915 -1.2207031e-06 -5.24708319
		 3.10052347 -1.2207031e-06 -5.24708319 5.098260403 -1.2207031e-06 -5.24708319 7.20380354 -1.2207031e-06 -5.24708319
		 9.19819927 -1.2207031e-06 -5.24708319 -6.59816408 -1.2207031e-06 7.5449791 -6.59816408 1.57351565 8.93311024
		 -6.59816408 3.96980476 8.93311024 -6.59816408 6.083919048 8.93311024 -6.59816408 7.56778669 8.93311024
		 -6.59816408 9.97621346 8.93311024 -6.5981617 12.97725868 8.93311024 -6.5981617 15.37084198 8.93311024
		 -6.5981617 18.61483574 8.93311024 -6.59816122 18.96674347 7.54496717 -6.5981617 18.96674347 4.92144346
		 -6.59816122 18.96674347 2.29791975 -6.59816122 18.96674347 -0.32561547 -6.59816122 18.96674347 -2.9491508
		 -6.59816122 18.96674347 -5.24708271 -6.5981617 18.96674347 -7.54501486 -6.5981617 18.61483574 -8.95860863
		 -6.5981617 15.37084198 -8.95860767 -6.5981617 12.97725868 -8.95860958 -6.59816408 9.97621346 -8.95860958
		 -6.59816408 7.56778669 -8.95860958 -6.59816408 6.083919048 -8.95860958 -6.59816408 3.96980476 -8.95860958
		 -6.59816408 1.57351565 -8.95860958 -6.59816408 -1.2207031e-06 -7.54501581 -6.59816408 -1.2207031e-06 -5.24708319
		 -6.59816408 -1.2207031e-06 -2.94915032 -6.59816408 -1.2207031e-06 -0.32561532 -6.59816408 -1.2207031e-06 2.29791975
		 -6.59816408 -1.2207031e-06 4.92144966 -10.59871483 -1.2207031e-06 7.5449791 -10.59871483 -1.2207031e-06 4.92144966
		 -10.59871483 -1.2207031e-06 2.29791975 -10.59871483 -1.2207031e-06 -0.32561532 -10.59871483 -1.2207031e-06 -2.94915032
		 -10.59871483 -1.2207031e-06 -5.24708319 -10.59871483 -1.2207031e-06 -7.54501581 -10.59871483 1.57351565 -8.95860958
		 -10.59871483 3.96980476 -8.95860958 -10.59871483 6.083919048 -8.95860958 -10.59871483 7.56778669 -8.95860958
		 -10.59871483 9.97621346 -8.95860958 -10.59871483 12.97725868 -8.95860958 -10.59871483 15.37084198 -8.95860767
		 -10.59871483 18.61483574 -8.95860863 -10.59871197 18.96674347 -7.54501486 -10.59871197 18.96674347 -5.24708271
		 -10.59871197 18.96674347 -2.94915032 -10.59871197 18.96674347 -0.32561523 -10.59871197 18.96674347 2.29791975
		 -10.59871197 18.96674347 4.92144537 -10.59871197 18.96674347 7.54497051 -10.59871483 18.61483574 8.93311024
		 -10.59871483 15.37084198 8.93311024 -10.59871483 12.97725868 8.93311024 -10.59871483 9.97621346 8.93311024
		 -10.59871483 7.56778669 8.93311024 -10.59871483 6.083919048 8.93311024 -10.59871483 3.96980476 8.93311024
		 -10.59871483 1.57351565 8.93311024 -12.69328594 -1.2207031e-06 8.82754898 -12.69328594 0.10556023 8.93311024
		 -12.7988472 0.10556023 8.82754898 -10.59871483 -1.2207031e-06 8.82754898 -10.59871483 0.10556023 8.93311024
		 12.79884624 0.10556023 8.82754898 12.69328499 0.10556023 8.93311024 12.69328499 -1.2207031e-06 8.82754898
		 12.69328499 0.10556023 -8.95860958 12.79884624 0.10556023 -8.85304832 12.69328499 -1.2207031e-06 -8.85304832
		 -12.7988472 0.10556023 -8.85304832 -12.69328594 0.10556023 -8.95860958 -12.69328594 -1.2207031e-06 -8.85304832
		 -10.59871483 -1.2207031e-06 -8.85304832 -10.59871483 0.10556023 -8.95860958 12.79884624 0.10556023 -7.54501581
		 12.69328499 -1.2207031e-06 -7.54501581 -12.7988472 0.10556023 -7.54501581 -12.69328594 -1.2207031e-06 -7.54501581
		 -12.7988472 1.57351565 8.82754898 -12.69328594 1.57351565 8.93311024 12.69328499 1.57351565 8.93311024
		 12.79884624 1.57351565 8.82754898 12.79884624 1.57351565 -8.85304832 12.69328499 1.57351565 -8.95860958
		 -12.69328594 1.57351565 -8.95860958 -12.7988472 1.57351565 -8.85304832 7.20380354 -1.2207031e-06 8.82754898
		 7.20380354 0.10556023 8.93311024 9.19819832 0.10556023 8.93311024 9.19819832 -1.2207031e-06 8.82754898
		 7.20380354 0.10556023 -8.95860958 7.20380354 -1.2207031e-06 -8.85304832 9.19819832 0.10556023 -8.95860958
		 9.19819832 -1.2207031e-06 -8.85304832 12.79884624 0.10556023 7.5449791 12.69328499 -1.2207031e-06 7.5449791
		 -12.7988472 0.10556023 7.5449791 -12.69328594 -1.2207031e-06 7.5449791 12.79884624 0.10556023 -5.24708319
		 12.69328499 -1.2207031e-06 -5.24708319 -12.7988472 0.10556023 -5.24708319 -12.69328594 -1.2207031e-06 -5.24708319
		 12.79884624 0.10556023 -2.94915032 12.69328499 -1.2207031e-06 -2.94915032 12.69328499 -1.2207031e-06 -0.32561532
		 12.79884624 0.10556023 -0.32561532 -12.7988472 0.10556023 -2.94915032 -12.69328594 -1.2207031e-06 -2.94915032
		 -12.7988472 0.10556023 -0.32561532 -12.69328594 -1.2207031e-06 -0.32561532 -12.7988472 3.96980476 -8.85304832
		 -12.69328594 3.96980476 -8.95860958 12.79884624 3.96980476 -8.85304832 12.69328499 3.96980476 -8.95860958
		 -12.7988472 3.96980476 8.82754898 -12.69328594 3.96980476 8.93311024 12.69328499 3.96980476 8.93311024
		 12.79884624 3.96980476 8.82754898 -12.7988472 6.083919048 -8.85304832 -12.69328594 6.083919048 -8.95860958
		 -12.69328594 7.56778622 -8.95860958 -12.7988472 7.56778622 -8.85304832 12.69328499 6.083919048 -8.95860958
		 12.79884624 6.083919048 -8.85304832 12.79884624 7.56778622 -8.85304832 12.69328499 7.56778622 -8.95860958
		 -12.69328594 6.083919048 8.93311024 -12.7988472 6.083919048 8.82754898 -12.7988472 7.56778622 8.82754898
		 -12.69328594 7.56778622 8.93311024 12.79884624 6.083919048 8.82754898 12.69328499 6.083919048 8.93311024
		 12.69328499 7.56778622 8.93311024 12.79884624 7.56778622 8.82754898;
	setAttr ".vt[830:995]" 3.10052347 -1.2207031e-06 8.82754898 3.10052347 0.10556023 8.93311024
		 5.098260403 -1.2207031e-06 8.82754898 5.098260403 0.10556023 8.93311024 3.10052347 0.10556023 -8.95860958
		 3.10052347 -1.2207031e-06 -8.85304832 5.098260403 0.10556023 -8.95860958 5.098260403 -1.2207031e-06 -8.85304832
		 -2.90010142 -1.2207031e-06 8.82754898 -2.90010142 0.10556023 8.93311024 0.20147915 -1.2207031e-06 8.82754898
		 0.20147915 0.10556023 8.93311024 -2.90010142 0.10556023 -8.95860958 -2.90010142 -1.2207031e-06 -8.85304832
		 0.20147915 0.10556023 -8.95860958 0.20147915 -1.2207031e-06 -8.85304832 -4.89946556 -1.2207031e-06 8.82754898
		 -4.89946556 0.10556023 8.93311024 -4.89946556 0.10556023 -8.95860958 -4.89946556 -1.2207031e-06 -8.85304832
		 12.79884624 9.97621346 -8.85304832 12.69328499 9.97621346 -8.95860958 12.69328499 9.97621346 8.93311119
		 12.79884624 9.97621346 8.82754993 -12.7988472 9.97621346 8.82754898 -12.69328594 9.97621346 8.93311024
		 -12.69328594 9.97621346 -8.95860958 -12.7988472 9.97621346 -8.85304832 12.79884624 12.97725868 -8.85304832
		 12.69328499 12.97725868 -8.95860958 12.69328499 12.97725868 8.93311119 12.79884624 12.97725868 8.82754993
		 -12.7988472 12.97725868 8.82754898 -12.69328594 12.97725868 8.93311024 -12.69328594 12.97725868 -8.95860958
		 -12.7988472 12.97725868 -8.85304832 12.79884624 15.37084198 -8.85305023 12.69328499 15.37084198 -8.95861244
		 12.69328499 15.37084198 8.9331131 12.79884624 15.37084198 8.82755089 -12.7988472 15.37084198 8.82754898
		 -12.69328594 15.37084198 8.93311024 -12.69328594 15.37084198 -8.95860767 -12.7988472 15.37084198 -8.85304642
		 12.79884624 18.61483574 -8.85305023 12.69328499 18.61483574 -8.95861244 12.69328499 18.61483574 8.9331131
		 12.79884624 18.61483574 8.82755184 -12.7988472 18.61483574 8.82754898 -12.69328594 18.61483574 8.93311024
		 -12.69328594 18.61483574 -8.95860863 -12.7988472 18.61483574 -8.85304737 7.20380449 18.86118126 -8.95861435
		 7.20380497 18.96674347 -8.85305214 9.19819832 18.86118126 -8.95861244 9.19819927 18.96674347 -8.85305023
		 2.90221429 18.96674347 -8.85305786 2.90222096 18.86118126 -8.95861912 4.90026951 18.86118126 -8.95861149
		 4.90026283 18.96674347 -8.85305023 12.79884624 18.86118126 -8.85305023 12.69328499 18.86118126 -8.95861244
		 12.69328499 18.96674347 -8.85305023 12.69328499 18.96674347 8.82755184 12.69328499 18.86118126 8.9331131
		 12.79884624 18.86118126 8.82755184 9.19819832 18.86118126 8.9331131 9.19819832 18.96674347 8.82755184
		 12.69328499 18.96674347 7.5449791 12.79884624 18.86118126 7.54498005 -12.69328594 18.96674347 8.82754898
		 -12.7988472 18.86118126 8.82754898 -12.69328594 18.86118126 8.93311024 -12.7988472 18.86118126 7.54498005
		 -12.69328594 18.96674347 7.5449791 12.79884624 18.86118126 -7.54501581 12.69328499 18.96674347 -7.54501581
		 -12.69328594 18.86118126 -8.95860863 -12.7988472 18.86118126 -8.85304737 -12.69328594 18.96674347 -8.85304737
		 -12.7988472 18.86118126 -7.54501581 -12.69328594 18.96674347 -7.54501581 -12.7988472 18.86118126 4.92144966
		 -12.69328594 18.96674347 4.92144966 -12.7988472 18.86118126 -5.24708319 -12.69328594 18.96674347 -5.24708319
		 12.79884624 18.86118126 -5.24708128 12.69328499 18.96674347 -5.24708128 7.20380449 18.86118126 8.93311024
		 7.20380449 18.96674347 8.82754898 -2.29672575 18.86118126 8.93313503 -2.29672551 18.96674347 8.82757282
		 0.20148115 18.86118126 8.93313503 0.20148115 18.96674347 8.82757282 -2.29672575 18.86118126 -8.95862103
		 -2.29671884 18.96674347 -8.85305882 0.20148115 18.96674347 -8.85305882 0.20148115 18.86118126 -8.95862007
		 4.90026999 18.86118126 8.93311024 4.90026999 18.96674347 8.82754898 -10.59871483 18.96674347 8.82754898
		 -10.59871483 18.86118126 8.93311024 -10.59871483 18.86118126 -8.95860863 -10.59871483 18.96674347 -8.85304737
		 -4.29639673 18.96674347 -8.85304737 -4.29640388 18.86118126 -8.95860863 2.90222096 18.86118126 8.93313503
		 2.90222096 18.96674347 8.82757282 -4.29640388 18.86118126 8.93311024 -4.29640341 18.96674347 8.82754898
		 12.69328499 18.96674347 -2.94914675 12.79884624 18.86118126 -2.94914675 12.79884624 18.86118126 -0.32561347
		 12.69328499 18.96674347 -0.32561347 -8.59844017 -1.2207031e-06 8.82754898 -8.59844017 0.10556023 8.93311024
		 -6.59816408 -1.2207031e-06 8.82754898 -6.59816408 0.10556023 8.93311024 -8.59844017 0.10556023 -8.95860958
		 -8.59844017 -1.2207031e-06 -8.85304832 -6.59816408 0.10556023 -8.95860958 -6.59816408 -1.2207031e-06 -8.85304832
		 -8.59843731 18.96674347 -8.85304737 -8.59843731 18.86118126 -8.95860863 -6.5981617 18.96674347 -8.85304737
		 -6.5981617 18.86118126 -8.95860863 -8.59843731 18.86118126 8.93311024 -8.59843731 18.96674347 8.82754898
		 -6.5981617 18.86118126 8.93311024 -6.5981617 18.96674347 8.82754898 12.79884624 0.10556023 2.29791975
		 12.69328499 -1.2207031e-06 2.29791975 12.79884624 0.10556023 4.92144966 12.69328499 -1.2207031e-06 4.92144966
		 -12.7988472 0.10556023 2.29791975 -12.69328594 -1.2207031e-06 2.29791975 -12.7988472 0.10556023 4.92144966
		 -12.69328594 -1.2207031e-06 4.92144966 -12.69328594 18.96674347 2.29791975 -12.7988472 18.86118126 2.29791975
		 -12.7988472 18.86118126 -0.32561532 -12.69328594 18.96674347 -0.32561532 12.69328499 18.96674347 2.29791975
		 12.79884624 18.86118126 2.29791975 12.69328499 18.96674347 4.92144966 12.79884624 18.86118126 4.92144966
		 -12.7988472 18.86118126 -2.94915032 -12.69328594 18.96674347 -2.94915032 -8.49850941 0.35191405 8.54668236
		 -8.49850941 1.57351565 8.54668236 -8.49850941 3.96980476 8.54668236 -8.49850941 6.083919048 8.54668236
		 -8.49850941 7.56778669 8.54668236 -8.49850941 9.97621346 8.54668236 -8.49850655 12.97725868 8.54668236
		 -8.49850655 15.37084198 8.54668236 -8.49850655 18.61483574 8.54668236 -8.49850655 18.61483574 7.54496908
		 -8.49850655 18.61483574 4.92144442 -8.49850655 18.61483574 2.29791975 -8.49850655 18.61483574 -0.32561538
		 -8.49850655 18.61483574 -2.94915032 -8.49850655 18.61483574 -5.24708271 -8.49850655 18.61483574 -7.54501486
		 -8.49850655 18.61483574 -8.55185223 -8.49850655 15.37084198 -8.55184841;
	setAttr ".vt[996:1041]" -8.49850655 12.97725868 -8.55185032 -8.49850941 9.97621346 -8.55185032
		 -8.49850941 7.56778669 -8.55185032 -8.49850941 6.083919048 -8.55185032 -8.49850941 3.96980476 -8.55185032
		 -8.49850941 1.57351565 -8.55185032 -8.49850941 0.35191405 -8.55185032 -8.49850941 0.35191405 -7.54501486
		 -8.49850941 0.35191405 -5.24708271 -8.49850941 0.35191405 -2.94915032 -8.49850941 0.35191405 -0.32561532
		 -8.49850941 0.35191405 2.29791975 -8.49850941 0.35191405 4.92144918 -8.49850941 0.35191405 7.54497814
		 0.20148075 3.96980476 8.54668236 0.20148075 1.57351565 8.54668236 0.20148075 0.35191405 8.54668236
		 0.20148075 0.35191405 7.54497814 0.20148075 0.35191405 4.92144918 0.20148075 0.35191405 2.29791975
		 0.20148075 0.35191405 -0.32561532 0.20148075 0.35191405 -2.94915032 0.20148075 0.35191405 -5.24708271
		 0.20148075 0.35191405 -7.54501486 0.20148075 0.35191405 -8.55184937 0.20148075 1.57351565 -8.55184937
		 0.20148075 3.96980476 -8.55184937 0.20148075 6.083919048 -8.55184937 0.20148075 7.56778669 -8.55184937
		 0.20148075 9.97621346 -8.55184555 0.20148075 12.97725868 -8.55184555 0.20148075 15.37084198 -8.55185032
		 0.20148075 18.61483574 -8.55184555 0.20148075 18.61483574 -7.54499006 0.20148075 18.61483574 -5.24705791
		 0.20148075 18.61483574 -2.94912624 0.20148075 18.61483574 -0.32560325 0.20148075 18.61483574 2.29791975
		 0.20148075 18.61483574 4.92145491 0.20148075 18.61483574 7.54499006 0.20148075 18.61483574 8.5467062
		 0.20148075 15.37084198 8.54668617 0.20148075 12.97725868 8.54667854 0.20148075 9.97621346 8.54667854
		 0.20148075 7.56778669 8.54668236 0.20148075 6.083919048 8.54668236;
	setAttr -s 2112 ".ed";
	setAttr ".ed[0:165]"  0 978 0 2 1002 0 0 20 0 1 23 0 0 4 0 1 5 0 4 979 0
		 2 6 0 3 7 0 6 1001 0 5 24 0 4 29 0 8 14 0 9 19 0 10 18 0 11 17 0 12 16 0 13 15 0
		 8 9 1 9 10 0 12 13 1 13 34 1 14 1 0 15 3 0 16 7 0 19 5 0 14 22 1 15 16 1 17 788 1
		 18 19 0 19 14 1 20 492 0 21 8 1 22 498 1 23 499 0 24 500 0 25 501 0 27 503 1 28 509 0
		 29 549 0 20 1009 1 21 22 1 22 23 1 23 24 1 24 25 0 26 27 1 27 140 1 29 20 1 31 7 0
		 32 3 0 33 15 1 34 678 1 35 2 0 36 6 0 39 693 1 30 31 0 31 32 1 32 33 1 33 34 1 34 152 1
		 35 36 1 36 37 0 38 39 1 40 683 0 41 550 1 42 677 1 43 676 0 44 675 0 45 674 0 46 603 1
		 47 692 1 48 685 0 49 684 0 40 1005 1 41 42 1 42 43 1 43 44 1 44 45 1 46 47 1 47 163 1
		 48 49 0 49 40 1 11 106 0 12 110 0 16 111 0 51 52 0 17 115 1 50 53 0 6 109 0 54 999 0
		 7 112 0 52 55 0 31 113 0 56 55 0 30 114 0 57 56 0 36 108 0 37 107 0 58 59 0 58 54 0
		 9 99 0 10 105 0 4 100 0 62 981 0 29 101 0 62 63 0 28 104 1 49 102 0 63 547 0 48 103 0
		 66 65 0 64 511 0 19 94 0 5 98 0 67 68 0 18 95 0 24 97 0 25 96 0 70 71 0 68 70 0 50 72 0
		 51 73 0 52 74 0 73 74 1 53 75 1 72 75 1 54 76 0 76 998 1 55 77 0 74 77 1 56 78 0
		 78 77 1 57 79 1 58 80 0 59 81 1 80 76 1 60 82 0 61 83 0 62 84 0 84 982 1 63 85 0
		 84 85 1 64 86 1 65 87 0 85 546 1 66 88 0 86 512 1 67 89 0 68 90 0 89 90 1 69 91 0
		 70 92 0 71 93 1 90 92 1 59 608 0 58 609 0 80 610 1 81 644 1 56 626 0 57 627 0 79 628 1
		 78 625 1 82 89 0 83 91 0 94 67 0 95 69 0;
	setAttr ".ed[166:331]" 96 71 0 97 70 0 98 68 0 94 95 0 96 97 1 97 98 1 98 94 1
		 99 60 0 100 62 0 101 63 0 102 65 0 103 66 0 104 64 1 105 61 0 99 147 1 100 101 1
		 101 548 1 102 103 1 103 595 1 105 99 0 106 50 0 107 59 0 108 58 0 109 54 0 110 51 0
		 111 52 0 112 55 0 113 56 0 114 57 0 115 53 1 106 160 1 107 108 1 108 109 1 109 1000 1
		 110 111 1 111 112 1 112 113 1 113 114 1 115 106 1 105 95 0 99 94 0 116 149 0 117 148 0
		 118 1010 1 119 146 0 120 145 0 121 144 0 122 143 0 123 142 1 124 141 0 125 645 1
		 126 670 1 127 162 1 128 161 0 129 667 1 130 159 0 131 158 1 132 157 1 133 156 0 134 155 1
		 135 154 0 136 153 0 137 1019 1 138 151 1 139 150 1 116 117 1 117 118 1 118 119 1
		 119 120 1 120 121 0 121 122 1 122 123 1 123 124 1 125 505 1 126 690 1 128 129 1 129 130 1
		 130 131 1 132 133 1 133 134 1 134 135 1 135 136 1 136 137 1 137 680 1 138 552 1 139 116 1
		 140 125 1 141 10 0 142 105 1 143 61 0 144 83 1 145 82 1 146 60 0 147 118 1 148 9 0
		 149 8 0 150 21 1 151 41 1 152 137 1 153 13 0 154 12 0 155 110 1 156 51 0 157 73 1
		 158 72 1 159 50 0 160 129 1 161 11 0 162 38 1 163 126 1 141 142 1 142 143 1 143 144 1
		 144 145 0 145 146 1 146 147 1 147 148 1 148 149 1 149 150 1 150 496 1 151 679 1 152 153 1
		 153 154 1 154 155 1 155 156 1 156 157 1 158 159 1 159 160 1 160 161 1 162 691 1 163 601 1
		 164 1012 0 165 1011 0 166 190 1 167 1041 0 168 1040 1 169 649 1 170 648 0 171 647 1
		 172 646 0 173 197 1 174 198 1 175 669 1 176 668 0 177 201 1 178 666 0 179 665 1 180 1024 1
		 181 1023 0 182 1022 1 183 1021 0 184 1020 0 185 209 1 186 1017 1 187 1013 1 164 165 1
		 165 166 1 166 167 1 167 168 1 168 169 0 169 170 1 170 171 1 171 172 1 173 506 1 174 688 1
		 176 177 1;
	setAttr ".ed[332:497]" 177 178 1 178 179 1 179 180 0 180 181 1 181 182 1 182 183 1
		 183 184 1 184 185 1 185 681 1 186 553 1 187 164 1 188 164 0 189 165 0 190 980 1 191 167 0
		 192 168 0 193 169 0 194 170 0 195 171 1 196 172 0 197 694 1 198 720 1 199 175 1 200 176 0
		 201 716 1 202 178 0 203 179 0 204 180 0 205 181 0 206 182 1 207 183 0 208 184 0 209 1003 1
		 210 186 1 211 187 1 188 189 1 189 190 1 190 191 1 191 192 1 192 193 0 193 194 1 194 195 1
		 195 196 1 197 507 1 198 687 1 200 201 1 201 202 1 202 203 1 203 204 0 204 205 1 205 206 1
		 206 207 1 207 208 1 208 209 1 209 682 1 210 554 1 211 188 1 72 212 1 73 213 1 74 214 1
		 213 214 0 75 215 1 212 215 0 131 216 1 132 217 1 157 218 1 217 218 0 158 219 1 216 219 0
		 77 220 0 214 220 0 89 221 1 90 222 0 221 222 0 91 223 1 92 224 1 93 225 1 222 224 0
		 78 226 1 226 220 0 79 227 1 226 624 0 227 629 0 82 228 1 83 229 1 229 223 0 228 221 0
		 179 230 0 180 231 0 230 231 0 231 1025 0 230 664 0 145 232 0 232 228 0 144 233 0
		 233 232 0 233 229 0 218 213 0 219 212 0 84 234 0 85 235 1 234 235 0 86 236 1 80 237 1
		 81 238 1 76 239 0 237 239 0 87 240 1 235 545 0 88 241 1 236 513 0 238 643 0 237 611 0
		 192 242 0 193 243 0 242 243 0 234 983 0 204 244 0 239 997 0 203 245 0 245 244 0 120 246 0
		 121 247 0 246 247 0 168 248 0 248 1039 0 169 249 0 248 249 0 249 650 0 212 250 0
		 213 251 0 214 252 0 251 252 1 215 253 1 250 253 1 216 254 0 217 255 0 218 256 0 255 256 1
		 219 257 0 254 257 1 220 258 0 252 258 1 221 259 0 222 260 0 259 260 1 223 261 1 224 262 0
		 225 263 1 260 262 1 226 264 0 264 258 1 227 265 1 264 623 1 265 630 1 228 266 0 229 267 0
		 267 261 1 266 259 1 230 268 0 231 269 0 269 1026 1 268 663 1 232 270 0 270 266 1
		 233 271 0;
	setAttr ".ed[498:663]" 271 270 0 271 267 1 256 251 1 257 250 1 234 272 0 235 273 0
		 272 273 1 236 274 1 237 275 0 238 276 1 239 277 0 275 277 1 240 278 0 273 544 1 241 279 0
		 274 514 1 276 642 1 275 612 1 242 280 0 243 281 0 280 281 0 272 984 1 244 282 0 277 996 1
		 245 283 0 246 284 0 247 285 0 284 285 0 248 286 0 286 1038 1 249 287 0 286 287 0
		 287 651 1 232 246 0 233 247 0 271 285 0 270 284 0 243 249 0 242 248 0 280 286 0 281 287 0
		 231 244 0 269 282 1 268 283 1 230 245 0 250 288 1 251 289 1 252 290 1 289 290 1 253 291 1
		 288 291 1 254 292 1 255 293 1 256 294 1 293 294 1 257 295 1 292 295 1 258 296 0 290 296 1
		 259 297 1 260 298 0 297 298 1 261 299 1 262 300 1 263 301 1 298 300 1 272 302 0 273 303 1
		 302 303 1 274 304 1 264 305 1 305 296 1 265 306 1 275 307 1 276 308 1 277 309 0 307 309 1
		 278 310 1 303 543 1 279 311 1 304 515 1 308 641 1 307 613 1 305 622 1 306 631 1 266 312 1
		 267 313 1 313 299 1 312 297 1 268 314 1 269 315 1 315 1027 1 314 662 1 270 316 0
		 316 312 1 271 317 0 317 316 0 317 313 1 294 289 1 295 288 1 280 318 0 281 319 0 318 319 0
		 302 985 1 282 320 1 309 995 1 283 321 1 314 321 1 315 320 1 284 322 0 285 323 0 322 323 0
		 286 324 0 324 1037 1 287 325 0 324 325 0 325 652 1 288 326 1 289 327 1 290 328 1
		 327 328 0 291 329 1 326 329 1 292 330 1 293 331 1 294 332 1 331 332 0 295 333 1 330 333 1
		 296 334 0 328 334 0 297 335 1 298 336 0 335 336 0 299 337 1 300 338 1 301 339 1 336 338 0
		 302 340 0 303 341 1 340 341 0 304 342 1 305 343 1 343 334 0 306 344 1 307 345 1 308 346 1
		 309 347 0 345 347 0 310 348 1 341 542 0 311 349 1 342 516 1 346 640 1 345 614 0 344 632 1
		 312 350 1 313 351 1 351 337 1 350 335 0 314 352 1 315 353 1 353 1028 0 352 661 1
		 316 354 0 354 350 0;
	setAttr ".ed[664:829]" 317 355 0 355 351 1 332 327 0 333 326 1 318 356 0 319 357 0
		 340 986 0 320 358 1 347 994 0 321 359 1 352 359 1 353 358 0 322 360 0 323 361 0 324 362 0
		 362 1036 0 325 363 0 363 653 1 316 322 0 317 323 0 355 361 1 354 360 0 319 325 0
		 318 324 0 356 362 0 357 363 1 335 364 0 364 338 1 350 366 0 366 364 1 367 365 1 362 368 0
		 360 369 0 368 1035 1 370 654 1 354 372 0 372 366 1 373 367 1 356 374 0 341 987 1
		 372 369 1 373 371 1 374 368 1 375 370 1 364 536 1 338 535 0 376 377 1 365 523 1 366 537 1
		 379 376 1 367 522 1 380 378 1 368 540 1 369 539 1 381 1031 1 370 519 1 371 520 1
		 383 658 1 372 538 1 385 379 1 373 521 1 386 380 1 374 541 1 348 991 1 375 518 1 385 382 1
		 386 384 1 387 381 1 388 383 1 376 620 1 377 621 0 389 343 1 378 633 1 379 619 1 391 389 1
		 380 634 1 392 390 1 381 616 1 382 617 1 393 1029 1 383 637 1 384 636 1 395 660 1
		 385 618 1 397 391 1 386 635 1 398 392 1 387 615 1 345 993 1 388 638 1 397 394 1 398 396 1
		 399 393 1 400 395 1 389 328 1 391 327 1 393 353 1 394 331 1 397 332 1 399 358 1 401 571 1
		 402 572 1 403 573 0 404 574 1 405 575 0 406 576 0 407 577 1 408 578 0 409 579 1 410 580 1
		 411 581 1 377 401 1 401 402 1 402 403 1 403 404 1 404 405 1 405 406 1 406 407 1 407 408 1
		 408 409 1 409 410 1 410 411 1 412 724 1 413 728 1 414 718 1 415 717 0 416 732 1 417 715 0
		 418 714 1 419 713 0 420 712 1 421 711 1 422 710 1 423 709 1 424 707 1 425 703 1 426 702 1
		 427 701 1 428 700 1 429 699 0 430 698 1 431 697 0 432 696 1 433 695 0 412 508 1 413 686 1
		 415 416 1 416 417 1 417 418 1 418 419 1 419 420 1 420 421 1 421 422 1 423 639 1 424 588 1
		 426 427 1 427 428 1 428 429 1 429 430 1 430 431 1 431 432 1 432 433 1 434 555 0 435 493 1
		 436 494 1 437 495 1;
	setAttr ".ed[830:995]" 438 551 1 439 497 1 440 607 1 441 606 0 442 605 0 443 604 0
		 444 502 1 445 602 1 446 504 1 447 600 1 448 599 1 449 598 1 450 597 1 451 596 0 452 510 1
		 453 594 0 454 593 1 455 592 0 456 591 1 457 590 1 458 589 1 459 517 1 460 587 1 461 586 1
		 462 585 1 463 584 1 464 583 1 465 582 1 466 524 1 467 525 1 468 526 1 469 527 0 470 528 1
		 471 529 0 472 530 0 473 531 1 474 532 0 475 533 1 476 534 1 477 570 0 478 569 1 479 568 1
		 480 567 1 481 566 1 482 565 1 483 564 1 484 563 0 485 562 1 486 561 1 487 560 0 488 559 1
		 489 558 0 490 557 1 491 556 0 434 1007 1 435 436 1 436 1015 1 437 438 1 438 439 1
		 439 440 1 440 441 1 441 442 1 442 443 1 444 445 1 445 446 1 446 447 1 447 672 1 448 449 1
		 449 722 1 450 726 1 451 452 1 452 453 1 453 454 1 454 455 1 455 456 1 456 457 1 457 458 1
		 459 705 1 460 461 1 461 656 1 462 463 1 463 464 1 464 465 1 466 467 1 467 468 1 468 469 1
		 469 470 1 470 471 1 471 472 1 472 473 1 473 474 1 474 475 1 475 476 1 476 477 1 477 478 1
		 478 479 1 479 480 1 480 481 1 481 1033 1 482 483 1 483 989 1 484 485 1 485 486 1
		 486 487 1 487 488 1 488 489 1 489 490 1 490 491 1 491 434 1 492 434 0 493 211 1 494 187 1
		 495 139 1 496 438 1 497 21 1 498 440 1 499 441 0 500 442 0 501 443 0 502 26 1 503 445 1
		 504 140 1 505 447 1 506 448 1 507 449 1 508 450 1 509 451 0 510 104 1 511 453 0 512 454 1
		 513 455 0 514 456 1 515 457 1 516 458 1 517 425 1 518 460 1 519 461 1 520 462 1 521 463 1
		 522 464 1 523 465 1 524 339 1 525 301 1 526 263 1 527 225 0 528 93 1 529 71 0 530 70 0
		 531 92 1 532 224 0 533 262 1 534 300 1 535 477 0 536 478 1 537 479 1 538 480 1 539 481 1
		 540 482 1 541 483 1 542 484 0 543 485 1 544 486 1 545 487 0 546 488 1 547 489 0 548 490 1;
	setAttr ".ed[996:1161]" 549 491 0 492 1008 1 493 494 1 494 1014 1 495 496 1
		 496 497 1 497 498 1 498 499 1 499 500 1 500 501 1 502 503 1 503 504 1 504 505 1 505 673 1
		 506 507 1 507 723 1 508 725 1 509 510 1 510 511 1 511 512 1 512 513 1 513 514 1 514 515 1
		 515 516 1 517 704 1 518 519 1 519 655 1 520 521 1 521 522 1 522 523 1 524 525 1 525 526 1
		 526 527 1 527 528 1 528 529 1 529 530 1 530 531 1 531 532 1 532 533 1 533 534 1 534 535 1
		 535 536 1 536 537 1 537 538 1 538 539 1 539 1034 1 540 541 1 541 988 1 542 543 1
		 543 544 1 544 545 1 545 546 1 546 547 1 547 548 1 548 549 1 549 492 1 550 439 1 551 151 1
		 552 437 1 553 436 1 554 435 1 555 40 0 556 49 0 557 102 1 558 65 0 559 87 1 560 240 0
		 561 278 1 562 310 1 563 348 0 564 387 1 565 381 1 566 382 1 567 385 1 568 379 1 569 376 1
		 570 377 0 571 476 1 572 475 1 573 474 0 574 473 1 575 472 0 576 471 0 577 470 1 578 469 0
		 579 468 1 580 467 1 581 466 1 582 378 1 583 380 1 584 386 1 585 384 1 586 383 1 587 388 1
		 588 459 1 589 349 1 590 311 1 591 279 1 592 241 0 593 88 1 594 66 0 595 452 1 596 48 0
		 597 413 1 598 198 1 599 174 1 600 126 1 601 446 1 602 47 1 603 444 1 604 45 0 605 44 0
		 606 43 0 607 42 1 550 551 1 551 552 1 552 1016 1 553 554 1 554 1006 1 555 556 1 556 557 1
		 557 558 1 558 559 1 559 560 1 560 561 1 561 562 1 562 563 1 563 990 1 564 565 1 565 1032 1
		 566 567 1 567 568 1 568 569 1 569 570 1 570 571 1 571 572 1 572 573 1 573 574 1 574 575 1
		 575 576 1 576 577 1 577 578 1 578 579 1 579 580 1 580 581 1 582 583 1 583 584 1 584 585 1
		 585 657 1 586 587 1 587 706 1 588 742 1 589 590 1 590 591 1 591 592 1 592 593 1 593 594 1
		 594 595 1 595 596 1 597 721 1 598 599 1 599 671 1 600 601 1 601 602 1 602 603 1 604 605 1;
	setAttr ".ed[1162:1327]" 605 606 1 606 607 1 607 550 1 608 66 0 609 65 0 610 87 1
		 611 240 0 612 278 1 613 310 1 614 348 0 615 399 1 616 393 1 617 394 1 618 397 1 619 391 1
		 620 389 1 621 343 0 622 401 1 623 402 1 624 403 0 625 404 1 626 405 0 627 406 0 628 407 1
		 629 408 0 630 409 1 631 410 1 632 411 1 633 390 1 634 392 1 635 398 1 636 396 1 637 395 1
		 638 400 1 639 424 1 640 349 1 641 311 1 642 279 1 643 241 0 644 88 1 608 609 1 609 610 1
		 610 611 1 611 612 1 612 613 1 613 614 1 614 992 1 615 616 1 616 1030 1 617 618 1
		 618 619 1 619 620 1 620 621 1 621 622 1 622 623 1 623 624 1 624 625 1 625 626 1 626 627 1
		 627 628 1 628 629 1 629 630 1 630 631 1 631 632 1 633 634 1 634 635 1 635 636 1 636 659 1
		 637 638 1 638 708 1 639 740 1 640 641 1 641 642 1 642 643 1 643 644 1 644 608 1 645 173 1
		 646 124 0 647 123 1 648 122 0 649 121 1 650 247 0 651 285 1 652 323 1 653 361 1 654 371 1
		 655 520 1 656 462 1 657 586 1 658 384 1 659 637 1 660 396 1 661 330 1 662 292 1 663 254 1
		 664 216 0 665 131 1 666 130 0 667 177 1 668 128 0 669 127 1 670 174 1 671 600 1 672 448 1
		 673 506 1 646 647 1 647 648 1 648 649 1 649 650 1 650 651 1 651 652 1 652 653 1 654 655 1
		 655 656 1 656 657 1 657 658 1 658 659 1 659 660 1 661 662 1 662 663 1 663 664 1 664 665 1
		 665 666 1 666 667 1 667 668 1 669 689 1 670 671 1 671 672 1 672 673 1 673 645 1 674 30 0
		 675 31 0 676 32 0 677 33 1 678 41 1 679 152 1 680 138 1 681 186 1 682 210 1 683 35 0
		 684 36 0 685 37 0 686 414 1 687 199 1 688 175 1 689 670 1 690 127 1 691 163 1 692 38 1
		 693 46 1 674 675 1 675 676 1 676 677 1 677 678 1 678 679 1 679 680 1 680 1018 1 681 682 1
		 682 1004 1 683 684 1 684 685 1 686 719 1 687 688 1 688 689 1 689 690 1 690 691 1;
	setAttr ".ed[1328:1493]" 691 692 1 692 693 1 694 412 1 695 196 0 696 195 1 697 194 0
		 698 193 1 699 243 0 700 281 1 701 319 1 702 357 1 703 375 1 704 518 1 705 460 1 706 588 1
		 707 388 1 708 639 1 709 400 1 710 359 1 711 321 1 712 283 1 713 245 0 714 203 1 715 202 0
		 716 416 1 717 200 0 718 199 1 719 687 1 720 413 1 721 598 1 722 450 1 723 508 1 695 696 1
		 696 697 1 697 698 1 698 699 1 699 700 1 700 701 1 701 702 1 703 704 1 704 705 1 705 706 1
		 706 707 1 707 708 1 708 709 1 710 711 1 711 712 1 712 713 1 713 714 1 714 715 1 715 716 1
		 716 717 1 718 719 1 719 720 1 720 721 1 721 722 1 722 723 1 723 694 1 727 597 1 729 686 1
		 730 414 1 731 415 0 733 417 0 734 418 1 735 419 0 736 420 1 737 421 1 738 422 1 739 423 1
		 741 424 1 743 459 1 744 517 1 745 425 1 746 426 1 747 427 1 748 428 1 749 429 0 750 430 1
		 751 431 0 752 432 1 753 433 0 724 725 1 725 726 1 726 727 1 727 728 1 728 729 1 729 730 1
		 731 732 1 732 733 1 733 734 1 734 735 1 735 736 1 736 737 1 737 738 1 739 740 1 740 741 1
		 741 742 1 742 743 1 743 744 1 744 745 1 746 747 1 747 748 1 748 749 1 749 750 1 750 751 1
		 751 752 1 752 753 1 753 758 1 754 756 0 756 792 0 792 793 1 793 754 0 755 754 0 754 757 0
		 757 758 1 758 755 0 756 755 0 755 775 0 757 944 0 944 945 1 945 758 0 759 761 0 761 791 0
		 791 790 1 790 759 0 760 759 0 759 777 0 761 760 0 760 784 0 784 785 1 785 761 0 777 776 1
		 776 760 0 775 774 1 774 756 0 763 762 0 762 779 0 779 778 1 778 763 0 762 764 0 764 789 0
		 789 788 1 788 762 0 764 763 0 763 770 0 770 771 1 771 764 0 765 767 0 767 773 0 773 772 1
		 772 765 0 766 765 0 765 781 0 767 766 0 766 769 0 769 768 1 768 767 0 769 948 0 948 949 1
		 949 768 0 781 780 1 780 766 0 770 794 0 794 795 1 795 771 0 773 797 0;
	setAttr ".ed[1494:1659]" 797 796 1 796 772 0 775 811 0 811 810 1 810 774 0 777 813 0
		 813 812 1 812 776 0 779 809 0 809 808 1 808 778 0 781 806 0 806 807 1 807 780 0 782 783 1
		 783 833 0 833 832 1 832 782 0 782 785 0 784 783 0 786 787 1 787 837 0 837 836 1 836 786 0
		 786 788 0 789 787 0 791 963 0 963 962 1 962 790 0 792 966 0 966 967 1 967 793 0 794 798 0
		 798 799 1 799 795 0 797 803 0 803 802 1 802 796 0 798 801 0 801 800 1 800 799 0 801 960 0
		 960 961 1 961 800 0 803 805 0 805 804 1 804 802 0 805 965 0 965 964 1 964 804 0 806 814 0
		 814 815 1 815 807 0 809 818 0 818 819 1 819 808 0 811 822 0 822 823 1 823 810 0 813 826 0
		 826 827 1 827 812 0 814 817 0 817 816 1 816 815 0 817 857 0 857 856 1 856 816 0 818 821 0
		 821 820 1 820 819 0 821 851 0 851 850 1 850 820 0 822 825 0 825 824 1 824 823 0 825 855 0
		 855 854 1 854 824 0 826 829 0 829 828 1 828 827 0 829 853 0 853 852 1 852 828 0 830 831 1
		 831 841 0 841 840 1 840 830 0 830 832 0 833 831 0 834 835 1 835 845 0 845 844 1 844 834 0
		 834 836 0 837 835 0 838 839 1 839 847 0 847 846 1 846 838 0 838 840 0 841 839 0 842 843 1
		 843 849 0 849 848 1 848 842 0 842 844 0 845 843 0 847 947 0 947 946 1 946 846 0 849 951 0
		 951 950 1 950 848 0 851 859 0 859 858 1 858 850 0 853 861 0 861 860 1 860 852 0 855 863 0
		 863 862 1 862 854 0 857 865 0 865 864 1 864 856 0 859 867 0 867 866 1 866 858 0 861 869 0
		 869 868 1 868 860 0 863 871 0 871 870 1 870 862 0 865 873 0 873 872 1 872 864 0 867 875 0
		 875 874 1 874 866 0 869 877 0 877 876 1 876 868 0 871 879 0 879 878 1 878 870 0 873 881 0
		 881 880 1 880 872 0 875 891 0 891 890 0 890 874 0 877 895 0 895 894 0 894 876 0 879 902 0
		 902 901 0 901 878 0 881 908 0 908 907 0 907 880 0 882 883 1 883 885 0;
	setAttr ".ed[1660:1825]" 885 884 1 884 882 0 882 888 0 888 889 1 889 883 0 885 892 0
		 892 891 0 891 884 0 886 887 1 887 927 0 927 926 1 926 886 0 886 889 0 888 887 0 890 892 0
		 892 906 0 906 905 1 905 890 0 893 895 0 895 899 0 899 898 1 898 893 0 894 893 0 893 897 0
		 897 896 1 896 894 0 897 919 0 919 918 1 918 896 0 899 975 0 975 974 1 974 898 0 900 902 0
		 902 931 0 931 930 1 930 900 0 901 900 0 900 904 0 904 903 1 903 901 0 904 913 0 913 912 1
		 912 903 0 906 917 0 917 916 1 916 905 0 907 909 0 909 933 0 933 932 1 932 907 0 909 908 0
		 908 910 0 910 911 1 911 909 0 910 914 0 914 915 1 915 911 0 913 968 0 968 969 1 969 912 0
		 914 976 0 976 977 1 977 915 0 917 940 0 940 941 1 941 916 0 919 929 0 929 928 1 928 918 0
		 920 921 1 921 939 0 939 938 1 938 920 0 920 922 0 922 923 1 923 921 0 922 936 0 936 937 1
		 937 923 0 924 925 1 925 926 0 927 924 0 924 935 0 935 934 1 934 925 0 929 937 0 936 928 0
		 931 956 0 956 957 1 957 930 0 933 952 0 952 953 1 953 932 0 935 955 0 955 954 1 954 934 0
		 939 959 0 959 958 1 958 938 0 940 943 0 943 942 1 942 941 0 943 972 0 972 973 1 973 942 0
		 944 946 0 947 945 0 948 950 0 951 949 0 952 954 0 955 953 0 956 958 0 959 957 0 960 962 0
		 963 961 0 965 967 0 966 964 0 968 971 0 971 970 1 970 969 0 971 977 0 976 970 0 972 974 0
		 975 973 0 10 783 1 784 18 1 786 11 1 45 798 1 794 674 1 685 796 1 802 48 1 883 392 1
		 390 885 1 124 831 1 833 141 1 834 128 1 161 836 1 886 396 1 398 889 1 390 906 1 17 779 1
		 799 46 1 693 795 1 776 18 1 25 777 1 790 25 1 785 26 1 26 791 1 782 27 1 830 125 1
		 140 832 1 28 792 1 774 28 1 745 904 1 930 745 1 30 770 1 778 30 1 37 781 1 772 37 1
		 837 162 1 127 835 1 789 39 1 38 787 1 771 39 1 443 960 1 801 604 1;
	setAttr ".ed[1826:1991]" 961 444 1 603 800 1 596 804 1 964 451 1 968 743 1 742 971 1
		 809 115 1 53 818 1 114 808 1 819 57 1 806 107 1 59 814 1 104 810 1 823 64 1 95 812 1
		 827 69 1 813 96 1 71 826 1 75 821 1 820 79 1 81 817 1 824 86 1 828 91 1 93 829 1
		 172 839 1 841 646 1 838 173 1 645 840 1 845 669 1 175 843 1 842 176 1 668 844 1 660 926 1
		 925 395 1 196 847 1 846 197 1 199 849 1 848 200 1 433 945 1 947 695 1 944 412 1 694 946 1
		 951 718 1 414 949 1 948 415 1 717 950 1 709 954 1 952 423 1 215 851 1 852 223 1 225 853 1
		 850 227 1 854 236 1 238 857 1 253 859 1 860 261 1 263 861 1 858 265 1 862 274 1 276 865 1
		 291 867 1 868 299 1 301 869 1 870 304 1 866 306 1 308 873 1 329 875 1 876 337 1 339 877 1
		 878 342 1 874 344 1 346 881 1 929 373 1 371 937 1 326 882 1 884 329 1 330 887 1 888 333 1
		 896 337 1 339 899 1 903 342 1 905 344 1 346 910 1 970 589 1 458 969 1 914 640 1 349 976 1
		 973 466 1 581 942 1 918 351 1 653 922 1 920 363 1 927 661 1 352 924 1 928 355 1 956 426 1
		 702 958 1 955 710 1 422 953 1 359 935 1 936 361 1 938 357 1 365 897 1 898 365 1 367 919 1
		 923 654 1 370 921 1 959 703 1 425 957 1 375 939 1 943 582 1 465 972 1 917 633 1 378 940 1
		 934 400 1 941 411 1 632 916 1 757 724 1 730 768 1 769 731 1 738 932 1 933 739 1 931 746 1
		 501 962 1 963 502 1 966 509 1 516 912 1 913 744 1 523 974 1 975 524 1 741 977 1 793 724 1
		 967 725 1 965 726 1 805 727 1 803 728 1 797 729 1 773 730 1 780 731 1 807 732 1 815 733 1
		 816 734 1 856 735 1 864 736 1 872 737 1 880 738 1 911 739 1 915 740 1 879 746 1 871 747 1
		 863 748 1 855 749 1 825 750 1 822 751 1 811 752 1 775 753 1 61 69 0 60 67 0 978 188 0
		 979 189 0 980 100 1 981 191 0 982 192 1 983 242 0 984 280 1 985 318 1;
	setAttr ".ed[1992:2111]" 986 356 0 987 374 1 988 542 1 989 484 1 990 564 1 991 387 1
		 992 615 1 993 399 1 994 358 0 995 320 1 996 282 1 997 244 0 998 204 1 999 205 0 1000 206 1
		 1001 207 0 1002 208 0 1003 35 1 1004 683 1 1005 210 1 1006 555 1 1007 435 1 1008 493 1
		 1009 211 1 978 979 1 979 980 1 980 981 1 981 982 1 982 983 1 983 984 1 984 985 1
		 985 986 1 986 987 1 987 988 1 988 989 1 989 990 1 990 991 1 991 992 1 992 993 1 993 994 1
		 994 995 1 995 996 1 996 997 1 997 998 1 998 999 1 999 1000 1 1000 1001 1 1001 1002 1
		 1002 1003 1 1003 1004 1 1004 1005 1 1005 1006 1 1006 1007 1 1007 1008 1 1008 1009 1
		 1009 978 1 1010 166 1 1011 117 0 1012 116 0 1013 139 1 1014 495 1 1015 437 1 1016 553 1
		 1017 138 1 1018 681 1 1019 185 1 1020 136 0 1021 135 0 1022 134 1 1023 133 0 1024 132 1
		 1025 217 0 1026 255 1 1027 293 1 1028 331 0 1029 394 1 1030 617 1 1031 382 1 1032 566 1
		 1033 482 1 1034 540 1 1035 369 1 1036 360 0 1037 322 1 1038 284 1 1039 246 0 1040 120 1
		 1041 119 0 1010 1011 1 1011 1012 1 1012 1013 1 1013 1014 1 1014 1015 1 1015 1016 1
		 1016 1017 1 1017 1018 1 1018 1019 1 1019 1020 1 1020 1021 1 1021 1022 1 1022 1023 1
		 1023 1024 1 1024 1025 1 1025 1026 1 1026 1027 1 1027 1028 1 1028 1029 1 1029 1030 1
		 1030 1031 1 1031 1032 1 1032 1033 1 1033 1034 1 1034 1035 1 1035 1036 1 1036 1037 1
		 1037 1038 1 1038 1039 1 1039 1040 1 1040 1041 1 1041 1010 1;
	setAttr -s 1058 -ch 4224 ".fc";
	setAttr ".fc[0:499]" -type "polyFaces" 
		f 4 1315 1296 74 65
		mu 0 4 0 1 2 3
		f 4 29 -14 19 14
		mu 0 4 981 5 997 982
		f 4 1312 -68 77 68
		mu 0 4 1030 1028 1037 1039
		f 4 1329 1311 78 70
		mu 0 4 12 13 14 15
		f 4 80 72 1322 -72
		mu 0 4 1246 1247 18 1230
		f 4 30 -13 18 13
		mu 0 4 996 20 1083 6
		f 4 -15 1784 -1514 1785
		mu 0 4 4 7 22 23
		f 4 20 17 27 -17
		mu 0 4 24 25 1088 27
		f 4 1313 -67 76 67
		mu 0 4 9 1064 1067 10
		f 4 -69 1787 -1527 1788
		mu 0 4 8 11 30 31
		f 4 81 63 1321 -73
		mu 0 4 17 32 33 1232
		f 4 283 -208 231 208
		mu 0 4 34 1082 1079 37
		f 4 279 -212 235 212
		mu 0 4 991 39 990 989
		f 4 -216 1793 -1586 1794
		mu 0 4 42 43 44 45
		f 4 240 1327 1309 275
		mu 0 4 46 47 48 49
		f 4 247 227 288 -227
		mu 0 4 50 51 52 53
		f 4 1317 1298 229 286
		mu 0 4 54 55 56 57
		f 4 1314 -66 75 66
		mu 0 4 28 0 3 29
		f 4 -28 23 8 -25
		mu 0 4 27 1088 1085 1224
		f 4 -23 -31 25 -6
		mu 0 4 1228 20 996 61
		f 4 251 207 284 -231
		mu 0 4 62 36 35 63
		f 4 -42 32 12 26
		mu 0 4 64 65 21 1089
		f 4 -43 -27 22 3
		mu 0 4 1086 64 1089 60
		f 4 -44 -4 5 10
		mu 0 4 67 66 1090 1222
		f 4 2 -48 -12 -5
		mu 0 4 68 69 70 71
		f 4 -50 -57 48 -9
		mu 0 4 1226 1065 73 59
		f 4 -51 -58 49 -24
		mu 0 4 26 74 72 58
		f 4 21 -59 50 -18
		mu 0 4 1081 75 74 26
		f 4 248 -265 287 -228
		mu 0 4 1078 76 77 1080
		f 4 -61 52 7 -54
		mu 0 4 1233 79 80 1225
		f 4 1111 1054 887 830
		mu 0 4 82 83 84 85
		f 4 1164 1052 889 832
		mu 0 4 86 87 88 89
		f 4 1163 -833 890 833
		mu 0 4 90 86 89 91
		f 4 1162 -834 891 834
		mu 0 4 92 1066 1071 93
		f 4 1161 -835 892 835
		mu 0 4 1038 1036 1053 1051
		f 4 -836 1824 -1536 1825
		mu 0 4 94 95 96 97
		f 4 1160 1105 893 837
		mu 0 4 98 99 100 101
		f 4 895 839 1158 1103
		mu 0 4 102 103 104 105
		f 4 938 826 1115 -884
		mu 0 4 106 107 108 109
		f 4 200 191 -86 -191
		mu 0 4 110 111 112 113
		f 4 204 186 87 -196
		mu 0 4 114 115 116 117
		f 4 245 225 290 -225
		mu 0 4 118 119 120 121
		f 4 293 272 242 221
		mu 0 4 122 123 124 125
		f 4 201 192 -92 -192
		mu 0 4 111 1214 127 112
		f 4 202 193 93 -193
		mu 0 4 126 1056 129 1215
		f 4 203 194 95 -194
		mu 0 4 128 1054 1055 1057
		f 4 197 188 98 -188
		mu 0 4 1241 1238 134 1243
		f 4 198 189 -100 -189
		mu 0 4 133 1216 137 1240
		f 4 281 259 233 210
		mu 0 4 138 139 140 141
		f 4 237 214 277 -214
		mu 0 4 142 143 144 145
		f 4 181 175 -106 -175
		mu 0 4 1218 147 148 1219
		f 4 936 882 1117 -882
		mu 0 4 150 151 152 153
		f 4 183 177 110 -177
		mu 0 4 1245 1244 1237 157
		f 4 1153 1097 901 845
		mu 0 4 158 159 160 161
		f 4 172 164 114 -169
		mu 0 4 162 995 164 1221
		f 4 170 167 118 -167
		mu 0 4 1059 1058 1045 1049
		f 4 171 168 119 -168
		mu 0 4 167 1220 165 168
		f 4 85 122 -124 -122
		mu 0 4 113 112 170 171
		f 4 -88 120 125 -125
		mu 0 4 117 116 172 173
		f 4 244 224 291 -224
		mu 0 4 174 118 121 175
		f 4 292 -222 243 222
		mu 0 4 176 122 125 177
		f 4 91 128 -130 -123
		mu 0 4 112 127 1213 170
		f 4 -94 130 131 -129
		mu 0 4 1215 129 179 178
		f 4 99 126 -136 -134
		mu 0 4 1240 137 1210 181
		f 4 280 -211 234 211
		mu 0 4 992 138 141 40
		f 4 236 213 278 -213
		mu 0 4 41 142 145 38
		f 4 105 140 -142 -139
		mu 0 4 1219 148 182 183
		f 4 935 881 1118 -881
		mu 0 4 184 150 153 185
		f 4 1152 -846 902 846
		mu 0 4 186 158 161 187
		f 4 -115 147 149 -149
		mu 0 4 1221 164 188 189
		f 4 -120 148 153 -152
		mu 0 4 168 165 1212 190
		f 4 1202 1166 -111 -1166
		mu 0 4 1236 1234 157 1237
		f 4 1203 1167 -144 -1167
		mu 0 4 192 193 194 1235
		f 4 1237 1165 145 -1202
		mu 0 4 195 191 156 196
		f 4 1135 1078 918 -1078
		mu 0 4 197 1040 199 1043
		f 4 1136 1079 917 -1079
		mu 0 4 198 201 202 1041
		f 4 1134 1077 919 -1077
		mu 0 4 203 1042 200 204
		f 4 -30 115 -170 -113
		mu 0 4 5 981 980 163
		f 4 -45 116 -171 -118
		mu 0 4 1060 1061 1058 1059
		f 4 -11 113 -172 -117
		mu 0 4 67 1222 1220 167
		f 4 -26 112 -173 -114
		mu 0 4 61 996 995 162
		f 4 282 -209 232 -260
		mu 0 4 139 34 37 140
		f 4 11 104 -182 -103
		mu 0 4 71 70 147 1218
		f 4 937 883 1116 -883
		mu 0 4 151 106 109 152
		f 4 -81 109 -184 -108
		mu 0 4 1247 1246 1244 1245
		f 4 1154 -844 900 -1098
		mu 0 4 159 207 208 160
		f 4 238 215 276 -215
		mu 0 4 143 43 42 144
		f 4 -20 100 -186 -102
		mu 0 4 982 997 993 979
		f 4 294 -220 241 -273
		mu 0 4 123 211 212 124
		f 4 -62 96 -198 -98
		mu 0 4 1231 78 1238 1241
		f 4 53 88 -199 -97
		mu 0 4 1233 1225 1216 133
		f 4 246 226 289 -226
		mu 0 4 119 50 53 120
		f 4 16 84 -201 -84
		mu 0 4 24 27 111 110
		f 4 24 90 -202 -85
		mu 0 4 27 1224 1214 111
		f 4 -49 92 -203 -91
		mu 0 4 59 73 1056 126
		f 4 -56 94 -204 -93
		mu 0 4 1029 1031 1054 128
		f 4 -16 82 -205 -87
		mu 0 4 215 216 115 114
		f 4 185 206 169 -206
		mu 0 4 978 994 163 980
		f 4 2081 -298 321 298
		mu 0 4 1127 1129 1077 218
		f 4 2080 -299 322 -2049
		mu 0 4 1126 1127 218 219
		f 4 2111 2048 323 300
		mu 0 4 1159 1126 219 220
		f 4 2110 -301 324 301
		mu 0 4 1158 1159 220 1025
		f 4 326 303 1269 -303
		mu 0 4 222 223 224 225
		f 4 327 304 1268 -304
		mu 0 4 223 226 227 224
		f 4 328 305 1267 -305
		mu 0 4 226 228 229 227
		f 4 -306 1850 -1598 1851
		mu 0 4 229 228 230 231
		f 4 1289 1265 840 1157
		mu 0 4 232 233 234 235
		f 4 330 1325 1307 1263
		mu 0 4 236 237 238 239
		f 4 1286 -310 331 -1261
		mu 0 4 240 241 242 243
		f 4 1285 1260 332 311
		mu 0 4 244 240 243 245
		f 4 1284 -312 333 312
		mu 0 4 246 244 245 1381
		f 4 335 314 2093 -314
		mu 0 4 248 249 1141 1142
		f 4 336 315 2092 -315
		mu 0 4 249 250 1140 1141
		f 4 337 316 2091 -316
		mu 0 4 250 251 1139 1140
		f 4 338 317 2090 -317
		mu 0 4 251 252 1137 1139
		f 4 339 -2058 2089 -318
		mu 0 4 1075 253 1136 1138
		f 4 2087 2056 1299 319
		mu 0 4 1134 1135 254 255
		f 4 2085 2054 1055 886
		mu 0 4 1132 1133 256 257
		f 4 342 297 2082 -321
		mu 0 4 258 217 1128 1130
		f 4 -254 -1795 -1510 -1785
		mu 0 4 7 42 45 22
		f 4 -277 253 101 -255
		mu 0 4 144 42 7 210
		f 4 -278 254 179 -256
		mu 0 4 145 144 210 259
		f 4 -279 255 137 -257
		mu 0 4 38 145 259 260
		f 4 -259 -281 257 -137
		mu 0 4 261 138 992 262
		f 4 180 -282 258 -174
		mu 0 4 209 139 138 261
		f 4 -261 -283 -181 -101
		mu 0 4 6 34 139 209
		f 4 -19 -262 -284 260
		mu 0 4 6 1083 1082 34
		f 4 -285 261 -33 -263
		mu 0 4 63 35 21 65
		f 4 1110 -831 888 -1053
		mu 0 4 87 82 85 88
		f 4 1316 -287 263 -1297
		mu 0 4 1 54 57 2
		f 4 -288 -60 -22 -266
		mu 0 4 1080 77 75 1081
		f 4 -289 265 -21 -267
		mu 0 4 53 52 25 24
		f 4 -290 266 83 -268
		mu 0 4 120 53 24 110
		f 4 -291 267 190 -269
		mu 0 4 121 120 110 113
		f 4 -292 268 121 -270
		mu 0 4 175 121 113 171
		f 4 -272 -293 270 -121
		mu 0 4 116 122 176 172
		f 4 196 -294 271 -187
		mu 0 4 115 123 122 116
		f 4 -274 -295 -197 -83
		mu 0 4 216 211 123 115
		f 4 -1310 1328 -71 79
		mu 0 4 49 48 12 15
		f 4 894 -1104 1159 -838
		mu 0 4 101 102 105 98
		f 4 -322 -344 367 344
		mu 0 4 218 1077 1076 264
		f 4 -323 -345 368 -300
		mu 0 4 219 218 264 265
		f 4 -324 299 369 346
		mu 0 4 220 219 265 266
		f 4 -325 -347 370 347
		mu 0 4 1025 220 266 267
		f 4 -326 -348 371 348
		mu 0 4 1024 221 1027 1026
		f 4 372 349 -327 -349
		mu 0 4 268 269 223 222
		f 4 373 350 -328 -350
		mu 0 4 269 270 226 223
		f 4 374 351 -329 -351
		mu 0 4 270 271 228 226
		f 4 -352 1860 -1594 -1851
		mu 0 4 228 271 272 230
		f 4 897 841 1156 -841
		mu 0 4 234 273 274 235
		f 4 376 1324 -331 307
		mu 0 4 275 276 237 236
		f 4 -332 -356 377 -311
		mu 0 4 243 242 277 278
		f 4 -333 310 378 357
		mu 0 4 245 243 278 279
		f 4 -334 -358 379 358
		mu 0 4 1381 245 279 280
		f 4 380 359 -335 -359
		mu 0 4 1378 1379 1380 247
		f 4 381 360 -336 -360
		mu 0 4 281 282 249 248
		f 4 382 361 -337 -361
		mu 0 4 282 283 250 249
		f 4 383 362 -338 -362
		mu 0 4 283 284 251 250
		f 4 384 363 -339 -363
		mu 0 4 284 1074 252 251
		f 4 385 -319 -340 -364
		mu 0 4 285 286 253 1075
		f 4 1319 1300 365 -1300
		mu 0 4 254 287 288 255
		f 4 1113 1056 885 -1056
		mu 0 4 256 289 290 257
		f 4 388 343 -343 -367
		mu 0 4 291 263 217 258
		f 4 -368 -1985 2016 1985
		mu 0 4 264 1076 1093 1094
		f 4 -369 -1986 2017 -346
		mu 0 4 265 264 1094 1095
		f 4 -370 345 2018 1987
		mu 0 4 266 265 1095 1096
		f 4 -371 -1988 2019 1988
		mu 0 4 267 266 1096 1097
		f 4 823 805 1362 -805
		mu 0 4 292 293 294 295
		f 4 824 806 1361 -806
		mu 0 4 293 296 297 294
		f 4 825 807 1360 -807
		mu 0 4 296 298 299 297
		f 4 -808 1864 -1767 1865
		mu 0 4 299 298 300 301
		f 4 1383 1358 842 1155
		mu 0 4 302 303 304 305
		f 4 809 1323 1381 1356
		mu 0 4 306 307 308 309
		f 4 1379 -790 810 -1353
		mu 0 4 310 311 312 313
		f 4 1378 1352 811 791
		mu 0 4 314 310 313 315
		f 4 1377 -792 812 792
		mu 0 4 316 314 315 317
		f 4 2036 2005 -382 -2005
		mu 0 4 1113 1114 282 281
		f 4 2037 2006 -383 -2006
		mu 0 4 1114 1115 283 282
		f 4 2038 2007 -384 -2007
		mu 0 4 1115 1116 284 283
		f 4 2039 2008 -385 -2008
		mu 0 4 1116 1117 1074 284
		f 4 2040 -365 -386 -2009
		mu 0 4 1118 1119 286 285
		f 4 2042 2011 -1301 1320
		mu 0 4 1120 1121 288 287
		f 4 2044 2013 -1057 1114
		mu 0 4 1122 1123 290 289
		f 4 2047 1984 -389 -2016
		mu 0 4 1125 1092 263 291
		f 4 123 391 -393 -391
		mu 0 4 171 170 318 319
		f 4 -126 389 394 -394
		mu 0 4 173 172 320 321
		f 4 223 397 -399 -397
		mu 0 4 174 175 322 323
		f 4 -223 395 400 -400
		mu 0 4 176 177 324 325
		f 4 129 401 -403 -392
		mu 0 4 170 1213 1209 318
		f 4 -150 403 405 -405
		mu 0 4 189 188 327 328
		f 4 -154 404 409 -408
		mu 0 4 190 1212 1208 329
		f 4 -132 410 411 -402
		mu 0 4 178 179 330 326
		f 4 1133 1076 920 -1076
		mu 0 4 331 203 204 332
		f 4 916 -1080 1137 1080
		mu 0 4 333 202 201 334
		f 4 163 406 -418 -417
		mu 0 4 260 335 336 337
		f 4 -163 415 418 -404
		mu 0 4 188 262 338 327
		f 4 334 420 -422 -420
		mu 0 4 247 1380 1375 1372
		f 4 313 2094 -423 -421
		mu 0 4 248 1142 1143 339
		f 4 1283 -313 419 423
		mu 0 4 341 246 1381 1373
		f 4 -258 424 425 -416
		mu 0 4 262 992 986 338
		f 4 -280 426 427 -425
		mu 0 4 39 991 983 342
		f 4 256 416 -429 -427
		mu 0 4 38 260 337 343
		f 4 269 390 -430 -398
		mu 0 4 175 171 319 322
		f 4 -271 399 430 -390
		mu 0 4 172 176 325 320
		f 4 141 432 -434 -432
		mu 0 4 183 182 344 345
		f 4 135 437 -439 -436
		mu 0 4 181 1210 1206 347
		f 4 934 880 1119 -880
		mu 0 4 348 184 185 349
		f 4 1151 -847 903 847
		mu 0 4 350 186 187 351
		f 4 1236 1201 441 -1201
		mu 0 4 352 195 196 353
		f 4 -1168 1204 1168 -440
		mu 0 4 194 193 354 355
		f 4 -372 445 447 -447
		mu 0 4 1026 1027 1018 1022
		f 4 -1989 2020 1989 -446
		mu 0 4 267 1097 1098 356
		f 4 822 804 1363 -804
		mu 0 4 358 292 295 359
		f 4 2035 2004 449 -2004
		mu 0 4 1112 1113 281 360
		f 4 -381 451 452 -450
		mu 0 4 1379 1378 1374 1377
		f 4 1376 -793 813 793
		mu 0 4 362 316 317 363
		f 4 -236 453 455 -455
		mu 0 4 989 990 987 985
		f 4 2109 -302 456 457
		mu 0 4 1157 1158 1025 1020
		f 4 325 458 -460 -457
		mu 0 4 221 1024 1023 366
		f 4 302 1270 -461 -459
		mu 0 4 222 225 368 367
		f 4 392 463 -465 -463
		mu 0 4 319 318 369 370
		f 4 -395 461 466 -466
		mu 0 4 321 320 371 372
		f 4 398 469 -471 -469
		mu 0 4 323 322 373 374
		f 4 -401 467 472 -472
		mu 0 4 325 324 375 376
		f 4 402 473 -475 -464
		mu 0 4 318 1209 1205 369
		f 4 -406 475 477 -477
		mu 0 4 328 327 378 379
		f 4 -410 476 481 -480
		mu 0 4 329 1208 1204 380
		f 4 -412 482 483 -474
		mu 0 4 326 330 381 377
		f 4 1132 1075 921 -1075
		mu 0 4 382 331 332 383
		f 4 915 -1081 1138 1081
		mu 0 4 384 333 334 385
		f 4 417 478 -490 -489
		mu 0 4 337 336 386 387
		f 4 -419 487 490 -476
		mu 0 4 327 338 388 378
		f 4 422 2095 -494 -493
		mu 0 4 339 1143 1144 389
		f 4 1282 -424 491 494
		mu 0 4 390 341 1373 391
		f 4 -426 495 496 -488
		mu 0 4 338 986 1007 388
		f 4 428 488 -500 -498
		mu 0 4 343 337 387 393
		f 4 429 462 -501 -470
		mu 0 4 322 319 370 373
		f 4 -431 471 501 -462
		mu 0 4 320 325 376 371
		f 4 433 503 -505 -503
		mu 0 4 345 344 394 395
		f 4 438 508 -510 -507
		mu 0 4 347 1206 1202 397
		f 4 933 879 1120 -879
		mu 0 4 398 348 349 399
		f 4 1150 -848 904 848
		mu 0 4 400 350 351 401
		f 4 1235 1200 512 -1200
		mu 0 4 402 352 353 403
		f 4 -1169 1205 1169 -511
		mu 0 4 355 354 404 405
		f 4 -1990 2021 1990 -517
		mu 0 4 356 1098 1099 406
		f 4 821 803 1364 -803
		mu 0 4 407 358 359 408
		f 4 2034 2003 520 -2003
		mu 0 4 1111 1112 360 409
		f 4 1375 -794 814 794
		mu 0 4 410 362 363 411
		f 4 2108 -458 526 527
		mu 0 4 1156 1157 1020 1015
		f 4 460 1271 -531 -529
		mu 0 4 367 368 414 415
		f 4 -428 532 -456 -532
		mu 0 4 342 983 984 988
		f 4 497 533 -525 -533
		mu 0 4 343 393 416 365
		f 4 498 534 525 -534
		mu 0 4 1006 392 1005 1004
		f 4 -496 531 523 -535
		mu 0 4 1007 986 364 413
		f 4 -448 536 459 -536
		mu 0 4 1021 1019 366 1023
		f 4 516 537 -527 -537
		mu 0 4 356 406 1015 1020
		f 4 518 538 -530 -538
		mu 0 4 1017 1016 1014 412
		f 4 -518 535 528 -539
		mu 0 4 417 357 367 415
		f 4 492 540 -521 -540
		mu 0 4 339 389 409 360
		f 4 -492 542 522 -542
		mu 0 4 391 1373 361 418
		f 4 421 539 -453 -543
		mu 0 4 340 1376 1377 1374
		f 4 464 545 -547 -545
		mu 0 4 370 369 419 420
		f 4 -467 543 548 -548
		mu 0 4 372 371 421 422
		f 4 470 551 -553 -551
		mu 0 4 374 373 423 424
		f 4 -473 549 554 -554
		mu 0 4 376 375 425 426
		f 4 474 555 -557 -546
		mu 0 4 369 1205 1200 419
		f 4 -478 557 559 -559
		mu 0 4 379 378 428 429
		f 4 -482 558 563 -562
		mu 0 4 380 1204 1198 430
		f 4 504 565 -567 -565
		mu 0 4 395 394 431 432
		f 4 -484 568 569 -556
		mu 0 4 377 381 433 427
		f 4 509 573 -575 -572
		mu 0 4 397 1202 1194 435
		f 4 932 878 1121 -878
		mu 0 4 436 398 399 437
		f 4 1149 -849 905 849
		mu 0 4 438 400 401 439
		f 4 1234 1199 577 -1199
		mu 0 4 440 402 403 441
		f 4 -1170 1206 1170 -576
		mu 0 4 405 404 442 443
		f 4 1131 1074 922 -1074
		mu 0 4 444 382 383 445
		f 4 914 -1082 1139 1082
		mu 0 4 446 384 385 447
		f 4 489 560 -586 -585
		mu 0 4 387 386 448 449
		f 4 -491 583 586 -558
		mu 0 4 378 388 450 428
		f 4 493 2096 -590 -589
		mu 0 4 389 1144 1145 451
		f 4 1281 -495 587 590
		mu 0 4 452 390 391 453
		f 4 -497 591 592 -584
		mu 0 4 388 1007 1001 450
		f 4 -499 593 594 -592
		mu 0 4 392 1006 998 454
		f 4 499 584 -596 -594
		mu 0 4 393 387 449 455
		f 4 500 544 -597 -552
		mu 0 4 373 370 420 423
		f 4 -502 553 597 -544
		mu 0 4 371 376 426 421
		f 4 -519 598 600 -600
		mu 0 4 1016 1017 1008 1012
		f 4 -1991 2022 1991 -599
		mu 0 4 406 1099 1100 456
		f 4 820 802 1365 -802
		mu 0 4 458 407 408 459
		f 4 2033 2002 602 -2002
		mu 0 4 1110 1111 409 460
		f 4 1374 -795 815 795
		mu 0 4 461 410 411 462
		f 4 541 604 -606 -588
		mu 0 4 391 418 463 453
		f 4 -541 588 606 -603
		mu 0 4 409 389 451 460
		f 4 -526 607 609 -609
		mu 0 4 1004 1005 1002 1000
		f 4 2107 -528 610 611
		mu 0 4 1155 1156 1015 1010
		f 4 529 612 -614 -611
		mu 0 4 412 1014 1013 466
		f 4 530 1272 -615 -613
		mu 0 4 415 414 468 467
		f 4 546 617 -619 -617
		mu 0 4 420 419 1193 1186
		f 4 -549 615 620 -620
		mu 0 4 422 421 471 472
		f 4 552 623 -625 -623
		mu 0 4 424 423 1185 1163
		f 4 -555 621 626 -626
		mu 0 4 426 425 475 476
		f 4 556 627 -629 -618
		mu 0 4 419 1200 1201 1193
		f 4 -560 629 631 -631
		mu 0 4 429 428 1188 1192
		f 4 -564 630 635 -634
		mu 0 4 430 1198 1199 1179
		f 4 566 637 -639 -637
		mu 0 4 432 431 1190 1184
		f 4 -570 640 641 -628
		mu 0 4 427 433 483 477
		f 4 574 645 -647 -644
		mu 0 4 435 1194 1195 1189
		f 4 931 877 1122 -877
		mu 0 4 1176 436 437 1174
		f 4 1148 -850 906 850
		mu 0 4 488 438 439 489
		f 4 1233 1198 649 -1198
		mu 0 4 490 440 441 491
		f 4 -1171 1207 1171 -648
		mu 0 4 443 442 1170 493
		f 4 1130 1073 923 869
		mu 0 4 494 444 445 495
		f 4 913 -1083 1140 1083
		mu 0 4 496 446 447 497
		f 4 585 632 -657 -656
		mu 0 4 449 448 498 499
		f 4 -587 654 657 -630
		mu 0 4 428 450 1187 1188
		f 4 589 2097 -661 -660
		mu 0 4 451 1145 1162 1182
		f 4 1280 -591 658 661
		mu 0 4 502 452 453 503
		f 4 -593 662 663 -655
		mu 0 4 450 1001 1181 1187
		f 4 595 655 -666 -665
		mu 0 4 455 449 499 505
		f 4 596 616 -667 -624
		mu 0 4 423 420 1186 1185
		f 4 -598 625 667 -616
		mu 0 4 421 426 476 471
		f 4 -1992 2023 1992 -669
		mu 0 4 456 1100 1166 506
		f 4 819 801 1366 -801
		mu 0 4 507 458 459 508
		f 4 2032 2001 671 -2001
		mu 0 4 1109 1110 460 1165
		f 4 1373 -796 816 796
		mu 0 4 510 461 462 511
		f 4 605 673 -675 -659
		mu 0 4 453 463 512 503
		f 4 -607 659 675 -672
		mu 0 4 460 451 1182 1165
		f 4 2106 -612 678 679
		mu 0 4 1154 1155 1010 1180
		f 4 614 1273 -682 -681
		mu 0 4 467 468 515 516
		f 4 -595 683 -610 -683
		mu 0 4 454 998 999 1003
		f 4 664 684 -678 -684
		mu 0 4 455 505 517 465
		f 4 -663 682 676 -686
		mu 0 4 1181 1001 464 514
		f 4 -601 687 613 -687
		mu 0 4 1011 1009 466 1013
		f 4 668 688 -679 -688
		mu 0 4 456 506 1180 1010
		f 4 -670 686 680 -690
		mu 0 4 518 457 467 516
		f 4 -632 690 691 -636
		mu 0 4 479 478 519 480
		f 4 -658 692 693 -691
		mu 0 4 478 500 520 519
		f 4 2105 -680 695 697
		mu 0 4 1153 1160 513 521
		f 4 -664 699 700 -693
		mu 0 4 500 504 523 520
		f 4 -1993 2024 1993 -703
		mu 0 4 1167 1101 1102 524
		f 4 685 696 -705 -700
		mu 0 4 504 1161 522 523
		f 4 -689 702 706 -696
		mu 0 4 513 1167 524 521
		f 4 924 870 1129 -870
		mu 0 4 1178 525 526 1172
		f 4 925 871 1128 -871
		mu 0 4 525 527 528 526
		f 4 912 857 1141 -857
		mu 0 4 529 530 531 532
		f 4 2102 2071 874 1125
		mu 0 4 1150 1151 534 535
		f 4 909 1276 1250 -854
		mu 0 4 537 538 539 540
		f 4 926 872 1127 -872
		mu 0 4 527 541 542 528
		f 4 911 856 1142 -856
		mu 0 4 543 529 532 544
		f 4 930 2027 1996 -876
		mu 0 4 545 1104 1105 546
		f 4 1369 1342 1090 907
		mu 0 4 547 548 549 550
		f 4 927 873 1126 -873
		mu 0 4 541 533 536 542
		f 4 910 855 1143 -855
		mu 0 4 551 543 544 552
		f 4 929 875 1124 -875
		mu 0 4 534 545 546 535
		f 4 908 853 1145 -853
		mu 0 4 553 537 540 554
		f 4 -711 733 1214 -735
		mu 0 4 1173 556 557 1168
		f 4 -714 737 1213 -734
		mu 0 4 556 559 560 557
		f 4 715 736 1226 -740
		mu 0 4 561 562 563 564
		f 4 2100 -719 741 1210
		mu 0 4 1148 1149 566 567
		f 4 721 1278 1252 -745
		mu 0 4 569 570 571 572
		f 4 -724 747 1212 -738
		mu 0 4 559 573 574 560
		f 4 725 739 1227 -750
		mu 0 4 575 561 564 576
		f 4 -1998 2029 1998 -752
		mu 0 4 577 1106 1107 578
		f 4 1371 1344 1196 798
		mu 0 4 579 580 581 582
		f 4 729 742 1211 -748
		mu 0 4 573 565 568 574
		f 4 -731 749 1228 -746
		mu 0 4 583 575 576 584
		f 4 -732 751 1209 -742
		mu 0 4 566 577 578 567
		f 4 732 744 1230 -754
		mu 0 4 585 569 572 586
		f 4 -736 758 628 -642
		mu 0 4 1169 587 469 1191
		f 4 -739 759 618 -759
		mu 0 4 587 588 470 469
		f 4 2098 -744 760 660
		mu 0 4 1146 1147 590 501
		f 4 -749 762 666 -760
		mu 0 4 588 591 473 470
		f 4 -2000 2031 2000 -764
		mu 0 4 592 1108 1164 509
		f 4 754 761 624 -763
		mu 0 4 591 589 474 473
		f 4 -757 763 -676 -761
		mu 0 4 590 592 509 501
		f 4 1215 1179 -776 734
		mu 0 4 558 593 594 555
		f 4 1216 1180 -777 -1180
		mu 0 4 593 595 596 594
		f 4 1217 1181 -778 -1181
		mu 0 4 595 597 598 596
		f 4 1218 1182 -779 -1182
		mu 0 4 597 599 600 598
		f 4 1219 1183 -780 -1183
		mu 0 4 599 1034 602 600
		f 4 1220 1184 -781 -1184
		mu 0 4 601 1032 604 1035
		f 4 1221 1185 -782 -1185
		mu 0 4 603 605 606 1033
		f 4 -783 -1186 1222 1186
		mu 0 4 607 606 605 608
		f 4 -784 -1187 1223 1187
		mu 0 4 609 607 608 610
		f 4 -785 -1188 1224 1188
		mu 0 4 611 609 610 612
		f 4 -786 -1189 1225 1189
		mu 0 4 613 611 612 614
		f 4 1411 1386 -843 899
		mu 0 4 615 616 305 304
		f 4 1413 1387 -810 787
		mu 0 4 617 618 307 306
		f 4 -811 -1390 1415 -791
		mu 0 4 313 312 619 620
		f 4 -812 790 1416 1390
		mu 0 4 315 313 620 621
		f 4 -813 -1391 1417 1391
		mu 0 4 317 315 621 622
		f 4 -814 -1392 1418 1392
		mu 0 4 363 317 622 623
		f 4 -815 -1393 1419 1393
		mu 0 4 411 363 623 624
		f 4 -816 -1394 1420 1394
		mu 0 4 462 411 624 625
		f 4 -817 -1395 1421 1395
		mu 0 4 511 462 625 626
		f 4 1423 1397 -1197 1232
		mu 0 4 627 628 582 581
		f 4 1425 1398 -1091 1147
		mu 0 4 629 630 550 549
		f 4 1428 1402 -820 -1402
		mu 0 4 631 632 458 507
		f 4 1429 1403 -821 -1403
		mu 0 4 632 633 407 458
		f 4 1430 1404 -822 -1404
		mu 0 4 633 634 358 407
		f 4 1431 1405 -823 -1405
		mu 0 4 634 635 292 358
		f 4 1432 1406 -824 -1406
		mu 0 4 635 636 293 292
		f 4 1433 1407 -825 -1407
		mu 0 4 636 637 296 293
		f 4 1434 1408 -826 -1408
		mu 0 4 637 638 298 296
		f 4 -1409 1435 -1449 -1865
		mu 0 4 298 638 1329 300
		f 4 2045 2014 -828 -2014
		mu 0 4 1123 1124 641 290
		f 4 -886 827 998 -829
		mu 0 4 257 290 641 642
		f 4 2084 -887 828 999
		mu 0 4 1131 1132 257 642
		f 4 -888 829 1000 943
		mu 0 4 85 84 643 644
		f 4 -889 -944 1001 -832
		mu 0 4 88 85 644 645
		f 4 -890 831 1002 945
		mu 0 4 89 88 645 646
		f 4 -891 -946 1003 946
		mu 0 4 91 89 646 1070
		f 4 -892 -947 1004 947
		mu 0 4 93 1071 647 1052
		f 4 -893 -948 1005 948
		mu 0 4 1051 1053 648 1050
		f 4 -949 1949 -1774 -1825
		mu 0 4 95 649 650 96
		f 4 -894 836 1006 950
		mu 0 4 101 100 651 652
		f 4 1007 -839 -895 -951
		mu 0 4 652 653 102 101
		f 4 1008 952 -896 838
		mu 0 4 653 654 103 102
		f 4 1290 1266 953 -1266
		mu 0 4 233 655 656 234
		f 4 1010 954 -898 -954
		mu 0 4 656 657 273 234
		f 4 1384 1359 955 -1359
		mu 0 4 303 658 659 304
		f 4 1410 -900 -956 1012
		mu 0 4 660 615 304 659
		f 4 -901 -957 1013 -845
		mu 0 4 160 208 661 662
		f 4 -902 844 1014 958
		mu 0 4 161 160 662 663
		f 4 -903 -959 1015 959
		mu 0 4 187 161 663 664
		f 4 -904 -960 1016 960
		mu 0 4 351 187 664 665
		f 4 -905 -961 1017 961
		mu 0 4 401 351 665 666
		f 4 -906 -962 1018 962
		mu 0 4 439 401 666 667
		f 4 -907 -963 1019 963
		mu 0 4 489 439 667 668
		f 4 1426 1399 -852 -1399
		mu 0 4 630 669 670 550
		f 4 1368 -908 851 1020
		mu 0 4 671 547 550 670
		f 4 1021 966 -909 -966
		mu 0 4 672 673 537 553
		f 4 1022 1275 -910 -967
		mu 0 4 673 674 538 537
		f 4 1023 968 -911 -968
		mu 0 4 675 676 543 551
		f 4 1024 969 -912 -969
		mu 0 4 676 677 529 543
		f 4 1025 970 -913 -970
		mu 0 4 677 678 530 529
		f 4 1026 -860 -914 858
		mu 0 4 679 680 446 496
		f 4 1027 -861 -915 859
		mu 0 4 680 681 384 446
		f 4 1028 -862 -916 860
		mu 0 4 681 682 333 384
		f 4 1029 -863 -917 861
		mu 0 4 682 683 202 333
		f 4 -918 862 1030 -864
		mu 0 4 1041 202 683 1047
		f 4 -919 863 1031 -865
		mu 0 4 1043 199 684 1044
		f 4 -920 864 1032 -866
		mu 0 4 204 200 685 686
		f 4 -921 865 1033 -867
		mu 0 4 332 204 686 687
		f 4 -922 866 1034 -868
		mu 0 4 383 332 687 688
		f 4 -923 867 1035 -869
		mu 0 4 445 383 688 689
		f 4 -924 868 1036 982
		mu 0 4 495 445 689 1177
		f 4 1037 983 -925 -983
		mu 0 4 690 691 525 1178
		f 4 1038 984 -926 -984
		mu 0 4 691 692 527 525
		f 4 1039 985 -927 -985
		mu 0 4 692 693 541 527
		f 4 1040 986 -928 -986
		mu 0 4 693 694 533 541
		f 4 2103 2072 987 -2072
		mu 0 4 1151 1152 695 534
		f 4 1042 988 -930 -988
		mu 0 4 695 696 545 534
		f 4 1043 2026 -931 -989
		mu 0 4 696 1103 1104 545
		f 4 1044 990 -932 -990
		mu 0 4 1175 698 436 1176
		f 4 1045 991 -933 -991
		mu 0 4 698 699 398 436
		f 4 1046 992 -934 -992
		mu 0 4 699 700 348 398
		f 4 1047 993 -935 -993
		mu 0 4 700 701 184 348
		f 4 1048 994 -936 -994
		mu 0 4 701 702 150 184
		f 4 1049 995 -937 -995
		mu 0 4 702 703 151 150
		f 4 1050 996 -938 -996
		mu 0 4 703 704 106 151
		f 4 1051 939 -939 -997
		mu 0 4 704 640 107 106
		f 4 2046 2015 -941 -2015
		mu 0 4 1124 1125 291 641
		f 4 -999 940 366 -942
		mu 0 4 642 641 291 258
		f 4 2083 -1000 941 320
		mu 0 4 1130 1131 642 258
		f 4 -1001 942 230 285
		mu 0 4 644 643 62 63
		f 4 -1002 -286 262 -945
		mu 0 4 645 644 63 65
		f 4 -1003 944 41 33
		mu 0 4 646 645 65 64
		f 4 -1004 -34 42 34
		mu 0 4 1070 646 64 1086
		f 4 -1005 -35 43 35
		mu 0 4 1052 647 66 67
		f 4 -1006 -36 44 36
		mu 0 4 1050 648 1061 1060
		f 4 -37 -1806 -1523 -1950
		mu 0 4 649 206 705 650
		f 4 -1007 949 45 37
		mu 0 4 652 651 706 707
		f 4 -952 -1008 -38 46
		mu 0 4 708 653 652 707
		f 4 239 -1009 951 252
		mu 0 4 709 654 653 708
		f 4 329 -1267 1291 1238
		mu 0 4 710 656 655 711
		f 4 375 -1011 -330 306
		mu 0 4 712 657 656 710
		f 4 808 -1360 1385 1330
		mu 0 4 713 659 658 714
		f 4 1409 -1013 -809 786
		mu 0 4 715 660 659 713
		f 4 -1014 -39 106 -958
		mu 0 4 662 661 716 717
		f 4 -1015 957 178 111
		mu 0 4 663 662 717 718
		f 4 -1016 -112 142 146
		mu 0 4 664 663 718 719
		f 4 -1017 -147 434 442
		mu 0 4 665 664 719 720
		f 4 -1018 -443 505 513
		mu 0 4 666 665 720 721
		f 4 -1019 -514 567 578
		mu 0 4 667 666 721 722
		f 4 -1020 -579 639 650
		mu 0 4 668 667 722 723
		f 4 1427 1400 -965 -1400
		mu 0 4 669 724 725 670
		f 4 1367 -1021 964 799
		mu 0 4 726 671 670 725
		f 4 707 719 -1022 -729
		mu 0 4 727 728 673 672
		f 4 698 1274 -1023 -720
		mu 0 4 728 729 674 673
		f 4 -706 724 -1024 -721
		mu 0 4 730 731 676 675
		f 4 701 714 -1025 -725
		mu 0 4 731 732 677 676
		f 4 694 711 -1026 -715
		mu 0 4 732 733 678 677
		f 4 -973 -1027 971 -635
		mu 0 4 734 680 679 735
		f 4 -974 -1028 972 -563
		mu 0 4 736 681 680 734
		f 4 -975 -1029 973 -481
		mu 0 4 737 682 681 736
		f 4 -976 -1030 974 -409
		mu 0 4 738 683 682 737
		f 4 -1031 975 -153 -977
		mu 0 4 1047 683 738 169
		f 4 -1032 976 -119 -978
		mu 0 4 1044 684 1048 1046
		f 4 -1033 977 151 -979
		mu 0 4 686 685 168 190;
	setAttr ".fc[500:999]"
		f 4 -1034 978 407 -980
		mu 0 4 687 686 190 329
		f 4 -1035 979 479 -981
		mu 0 4 688 687 329 380
		f 4 -1036 980 561 -982
		mu 0 4 689 688 380 430
		f 4 -1037 981 633 709
		mu 0 4 1177 689 430 1179
		f 4 -692 708 -1038 -710
		mu 0 4 480 519 691 690
		f 4 -694 712 -1039 -709
		mu 0 4 519 520 692 691
		f 4 -701 722 -1040 -713
		mu 0 4 520 523 693 692
		f 4 704 717 -1041 -723
		mu 0 4 523 522 694 693
		f 4 2104 -698 716 -2073
		mu 0 4 1152 1153 521 695
		f 4 -707 726 -1043 -717
		mu 0 4 521 524 696 695
		f 4 -1994 2025 -1044 -727
		mu 0 4 524 1102 1103 696
		f 4 576 -1045 -649 -638
		mu 0 4 431 698 1175 1190
		f 4 511 -1046 -577 -566
		mu 0 4 394 699 698 431
		f 4 440 -1047 -512 -504
		mu 0 4 344 700 699 394
		f 4 144 -1048 -441 -433
		mu 0 4 182 701 700 344
		f 4 108 -1049 -145 -141
		mu 0 4 148 702 701 182
		f 4 182 -1050 -109 -176
		mu 0 4 147 703 702 148
		f 4 39 -1051 -183 -105
		mu 0 4 70 704 703 147
		f 4 47 31 -1052 -40
		mu 0 4 70 69 640 704
		f 4 -1054 -1111 -65 -264
		mu 0 4 57 82 87 2
		f 4 250 -1112 1053 -230
		mu 0 4 56 83 82 57
		f 4 341 -2055 2086 -320
		mu 0 4 255 256 1133 1134
		f 4 387 -1114 -342 -366
		mu 0 4 288 289 256 255
		f 4 2043 -1115 -388 -2012
		mu 0 4 1121 1122 289 288
		f 4 -1116 1057 -82 -1059
		mu 0 4 109 108 32 17
		f 4 -1117 1058 107 -1060
		mu 0 4 152 109 17 154
		f 4 -1118 1059 176 -1061
		mu 0 4 153 152 154 1235
		f 4 -1119 1060 143 -1062
		mu 0 4 185 153 1235 194
		f 4 -1120 1061 439 -1063
		mu 0 4 349 185 194 355
		f 4 -1121 1062 510 -1064
		mu 0 4 399 349 355 405
		f 4 -1122 1063 575 -1065
		mu 0 4 437 399 405 443
		f 4 -1123 1064 647 -1066
		mu 0 4 1174 437 443 493
		f 4 -1997 2028 1997 -1067
		mu 0 4 546 1105 1106 577
		f 4 -1125 1066 731 -1068
		mu 0 4 535 546 577 566
		f 4 2101 -1126 1067 718
		mu 0 4 1149 1150 535 566
		f 4 -1127 1068 -730 -1070
		mu 0 4 542 536 565 573
		f 4 -1128 1069 723 -1071
		mu 0 4 528 542 573 559
		f 4 -1129 1070 713 -1072
		mu 0 4 526 528 559 556
		f 4 -1130 1071 710 -1073
		mu 0 4 1172 526 556 1173
		f 4 775 764 -1131 1072
		mu 0 4 555 594 444 494
		f 4 776 765 -1132 -765
		mu 0 4 594 596 382 444
		f 4 777 766 -1133 -766
		mu 0 4 596 598 331 382
		f 4 778 767 -1134 -767
		mu 0 4 598 600 203 331
		f 4 779 768 -1135 -768
		mu 0 4 600 602 1042 203
		f 4 780 769 -1136 -769
		mu 0 4 1035 604 1040 197
		f 4 781 770 -1137 -770
		mu 0 4 1033 606 201 198
		f 4 -1138 -771 782 771
		mu 0 4 334 201 606 607
		f 4 -1139 -772 783 772
		mu 0 4 385 334 607 609
		f 4 -1140 -773 784 773
		mu 0 4 447 385 609 611
		f 4 -1141 -774 785 774
		mu 0 4 497 447 611 613
		f 4 -1142 1084 -716 -1086
		mu 0 4 532 531 562 561
		f 4 -1143 1085 -726 -1087
		mu 0 4 544 532 561 575
		f 4 -1144 1086 730 -1088
		mu 0 4 552 544 575 583
		f 4 -1251 1277 -722 -1089
		mu 0 4 540 539 570 569
		f 4 -1146 1088 -733 -1090
		mu 0 4 554 540 569 585
		f 4 818 -1343 1370 -799
		mu 0 4 582 549 548 579
		f 4 1424 -1148 -819 -1398
		mu 0 4 628 629 549 582
		f 4 -1093 -1149 1091 -650
		mu 0 4 441 438 488 491
		f 4 -1094 -1150 1092 -578
		mu 0 4 403 400 438 441
		f 4 -1095 -1151 1093 -513
		mu 0 4 353 350 400 403
		f 4 -1096 -1152 1094 -442
		mu 0 4 196 186 350 353
		f 4 -1097 -1153 1095 -146
		mu 0 4 156 158 186 196
		f 4 184 -1154 1096 -178
		mu 0 4 155 159 158 156
		f 4 -1099 -1155 -185 -110
		mu 0 4 16 207 159 155
		f 4 1412 -788 -1100 -1387
		mu 0 4 616 617 306 305
		f 4 1382 -1156 1099 -1357
		mu 0 4 309 302 305 306
		f 4 -1157 1100 -308 -1102
		mu 0 4 235 274 275 236
		f 4 1288 -1158 1101 -1264
		mu 0 4 239 232 235 236
		f 4 -1159 1102 -276 296
		mu 0 4 105 104 46 49
		f 4 -1160 -297 -80 -1105
		mu 0 4 98 105 49 15
		f 4 -79 69 -1161 1104
		mu 0 4 15 14 99 98
		f 4 -1107 -1826 -1533 -1788
		mu 0 4 11 94 97 30
		f 4 -78 -1108 -1162 1106
		mu 0 4 1039 1037 1036 1038
		f 4 -77 -1109 -1163 1107
		mu 0 4 10 1067 1066 92
		f 4 -76 -1110 -1164 1108
		mu 0 4 29 3 86 90
		f 4 -75 64 -1165 1109
		mu 0 4 3 2 87 86
		f 4 -99 155 -1203 -155
		mu 0 4 1242 1239 1234 1236
		f 4 133 156 -1204 -156
		mu 0 4 1240 181 193 192
		f 4 -1205 -157 435 444
		mu 0 4 354 193 181 347
		f 4 -1206 -445 506 515
		mu 0 4 404 354 347 397
		f 4 -1207 -516 571 580
		mu 0 4 442 404 397 435
		f 4 -1208 -581 643 652
		mu 0 4 1170 442 435 1189
		f 4 -1999 2030 1999 -1173
		mu 0 4 578 1107 1108 592
		f 4 -1210 1172 756 -1174
		mu 0 4 567 578 592 590
		f 4 2099 -1211 1173 743
		mu 0 4 1147 1148 567 590
		f 4 -1212 1174 -755 -1176
		mu 0 4 574 568 589 591
		f 4 -1213 1175 748 -1177
		mu 0 4 560 574 591 588
		f 4 -1214 1176 738 -1178
		mu 0 4 557 560 588 587
		f 4 -1215 1177 735 -1179
		mu 0 4 1168 557 587 1169
		f 4 581 -1216 1178 -641
		mu 0 4 433 593 558 483
		f 4 485 -1217 -582 -569
		mu 0 4 381 595 593 433
		f 4 413 -1218 -486 -483
		mu 0 4 330 597 595 381
		f 4 161 -1219 -414 -411
		mu 0 4 179 599 597 330
		f 4 -131 158 -1220 -162
		mu 0 4 179 129 1034 599
		f 4 -96 159 -1221 -159
		mu 0 4 1057 1055 1032 601
		f 4 132 160 -1222 -160
		mu 0 4 131 739 605 603
		f 4 -1223 -161 412 414
		mu 0 4 608 605 739 740
		f 4 -1224 -415 484 486
		mu 0 4 610 608 740 741
		f 4 -1225 -487 570 582
		mu 0 4 612 610 741 742
		f 4 -1226 -583 642 653
		mu 0 4 614 612 742 743
		f 4 -1227 1190 -741 -1192
		mu 0 4 564 563 744 745
		f 4 -1228 1191 -751 -1193
		mu 0 4 576 564 745 746
		f 4 -1229 1192 755 -1194
		mu 0 4 584 576 746 747
		f 4 -1253 1279 -747 -1195
		mu 0 4 572 571 748 749
		f 4 -1231 1194 -758 -1196
		mu 0 4 586 572 749 750
		f 4 817 -1345 1372 -798
		mu 0 4 751 581 580 752
		f 4 1422 -1233 -818 -1397
		mu 0 4 753 627 581 751
		f 4 579 -1234 -652 -645
		mu 0 4 754 440 490 755
		f 4 514 -1235 -580 -573
		mu 0 4 756 402 440 754
		f 4 443 -1236 -515 -508
		mu 0 4 757 352 402 756
		f 4 157 -1237 -444 -437
		mu 0 4 758 195 352 757
		f 4 -135 154 -1238 -158
		mu 0 4 758 135 191 195
		f 4 -1240 -1852 -1582 -1794
		mu 0 4 43 229 231 44
		f 4 -1268 1239 -239 -1241
		mu 0 4 227 229 43 143
		f 4 -1269 1240 -238 -1242
		mu 0 4 224 227 143 142
		f 4 -1270 1241 -237 -1243
		mu 0 4 225 224 142 41
		f 4 -1271 1242 454 -1244
		mu 0 4 368 225 41 365
		f 4 -1272 1243 524 -1245
		mu 0 4 414 368 365 416
		f 4 -1273 1244 608 -1246
		mu 0 4 468 414 416 465
		f 4 -1274 1245 677 -1247
		mu 0 4 515 468 465 517
		f 4 -1275 1247 720 -1249
		mu 0 4 674 729 730 675
		f 4 -1276 1248 967 -1250
		mu 0 4 538 674 675 551
		f 4 -1277 1249 854 1144
		mu 0 4 539 538 551 552
		f 4 -1278 -1145 1087 -1252
		mu 0 4 570 539 552 583
		f 4 -1279 1251 745 1229
		mu 0 4 571 570 583 584
		f 4 -1280 -1230 1193 -1254
		mu 0 4 748 571 584 747
		f 4 -1256 -1281 1254 -622
		mu 0 4 425 452 502 475
		f 4 -1257 -1282 1255 -550
		mu 0 4 375 390 452 425
		f 4 -1258 -1283 1256 -468
		mu 0 4 324 341 390 375
		f 4 -1259 -1284 1257 -396
		mu 0 4 177 246 341 324
		f 4 -244 -1260 -1285 1258
		mu 0 4 177 125 244 246
		f 4 -243 220 -1286 1259
		mu 0 4 125 124 240 244
		f 4 -242 -1262 -1287 -221
		mu 0 4 124 212 241 240
		f 4 -1308 1326 -241 217
		mu 0 4 239 238 47 46
		f 4 -1265 -1289 -218 -1103
		mu 0 4 104 232 239 46
		f 4 896 -1290 1264 -840
		mu 0 4 103 233 232 104
		f 4 1009 -1291 -897 -953
		mu 0 4 654 655 233 103
		f 4 -1292 -1010 -240 216
		mu 0 4 711 655 654 709
		f 4 -1293 -1789 -1491 -1816
		mu 0 4 214 8 31 759
		f 4 55 -1294 -1313 1292
		mu 0 4 1031 1029 1028 1030
		f 4 56 -1295 -1314 1293
		mu 0 4 73 1065 1064 9
		f 4 57 -1296 -1315 1294
		mu 0 4 72 74 0 28
		f 4 58 51 -1316 1295
		mu 0 4 74 75 1 0
		f 4 -1298 -1317 -52 59
		mu 0 4 77 54 1 75
		f 4 249 -1318 1297 264
		mu 0 4 76 55 54 77
		f 4 340 -2057 2088 2057
		mu 0 4 253 254 1135 1136
		f 4 386 -1320 -341 318
		mu 0 4 286 287 254 253
		f 4 2041 -1321 -387 364
		mu 0 4 1119 1120 287 286
		f 4 -1322 1301 60 -1303
		mu 0 4 1232 33 79 1233
		f 4 -1323 1302 61 -1304
		mu 0 4 1230 18 78 1231
		f 4 1414 1388 -1305 -1388
		mu 0 4 618 760 761 307
		f 4 1380 -1324 1304 788
		mu 0 4 762 308 307 761
		f 4 -1325 1305 354 -1307
		mu 0 4 237 276 763 764
		f 4 -1326 1306 308 1287
		mu 0 4 238 237 764 765
		f 4 -1327 -1288 1262 -1309
		mu 0 4 47 238 765 766
		f 4 -1328 1308 218 295
		mu 0 4 48 47 766 767
		f 4 -1329 -296 274 -1311
		mu 0 4 12 48 767 768
		f 4 62 54 -1330 1310
		mu 0 4 768 769 13 12
		f 4 -1332 -1866 -1605 -1861
		mu 0 4 271 299 301 272
		f 4 -1361 1331 -375 -1333
		mu 0 4 297 299 271 270
		f 4 -1362 1332 -374 -1334
		mu 0 4 294 297 270 269
		f 4 -1363 1333 -373 -1335
		mu 0 4 295 294 269 268
		f 4 -1364 1334 446 -1336
		mu 0 4 359 295 268 357
		f 4 -1365 1335 517 -1337
		mu 0 4 408 359 357 417
		f 4 -1366 1336 599 -1338
		mu 0 4 459 408 417 457
		f 4 -1367 1337 669 -1339
		mu 0 4 508 459 457 518
		f 4 -1341 -1368 1339 728
		mu 0 4 672 671 726 727
		f 4 -1342 -1369 1340 965
		mu 0 4 553 547 671 672
		f 4 1146 -1370 1341 852
		mu 0 4 554 548 547 553
		f 4 -1371 -1147 1089 -1344
		mu 0 4 579 548 554 585
		f 4 1231 -1372 1343 753
		mu 0 4 586 580 579 585
		f 4 -1373 -1232 1195 -1346
		mu 0 4 752 580 586 750
		f 4 -1348 -1374 1346 -674
		mu 0 4 463 461 510 512
		f 4 -1349 -1375 1347 -605
		mu 0 4 418 410 461 463
		f 4 -1350 -1376 1348 -523
		mu 0 4 361 362 410 418
		f 4 -1351 -1377 1349 -452
		mu 0 4 280 316 362 361
		f 4 -380 -1352 -1378 1350
		mu 0 4 280 279 314 316
		f 4 -379 356 -1379 1351
		mu 0 4 279 278 310 314
		f 4 -378 -1354 -1380 -357
		mu 0 4 278 277 311 310
		f 4 -1356 -1381 1354 -1306
		mu 0 4 276 308 762 763
		f 4 -1382 1355 -377 353
		mu 0 4 309 308 276 275
		f 4 -1358 -1383 -354 -1101
		mu 0 4 274 302 309 275
		f 4 898 -1384 1357 -842
		mu 0 4 273 303 302 274
		f 4 1011 -1385 -899 -955
		mu 0 4 657 658 303 273
		f 4 -1386 -1012 -376 352
		mu 0 4 714 658 657 712
		f 4 1436 1437 1438 1439
		mu 0 4 770 1330 1314 773
		f 4 1440 1441 1442 1443
		mu 0 4 1331 770 775 639
		f 4 1444 1445 1461 1462
		mu 0 4 771 774 776 1367
		f 4 -1443 1446 1447 1448
		mu 0 4 639 775 778 1264
		f 4 1449 1450 1451 1452
		mu 0 4 1328 780 781 1315
		f 4 1453 1454 1459 1460
		mu 0 4 782 1371 1366 784
		f 4 1455 1456 1457 1458
		mu 0 4 780 1327 1318 785
		f 4 1463 1464 1465 1466
		mu 0 4 1369 1326 788 1365
		f 4 1467 1468 1469 1470
		mu 0 4 787 790 791 792
		f 4 1471 1472 1473 1474
		mu 0 4 790 1325 1321 793
		f 4 1475 1476 1477 1478
		mu 0 4 1324 795 796 1320
		f 4 1479 1480 1488 1489
		mu 0 4 798 1368 1364 800
		f 4 1481 1482 1483 1484
		mu 0 4 795 1323 1322 802
		f 4 -1484 1485 1486 1487
		mu 0 4 802 1322 1261 804
		f 4 -1474 1490 1491 1492
		mu 0 4 793 1321 1313 805
		f 4 -1478 1493 1494 1495
		mu 0 4 1320 796 806 1312
		f 4 -1462 1496 1497 1498
		mu 0 4 1367 776 808 1361
		f 4 -1460 1499 1500 1501
		mu 0 4 784 1366 1360 811
		f 4 -1466 1502 1503 1504
		mu 0 4 1365 788 812 1362
		f 4 -1489 1505 1506 1507
		mu 0 4 800 1364 1363 815
		f 4 1508 1509 1510 1511
		mu 0 4 816 1319 1306 817
		f 4 -1509 1512 -1458 1513
		mu 0 4 1319 816 785 1318
		f 4 1514 1515 1516 1517
		mu 0 4 1316 819 820 1305
		f 4 -1515 1518 -1470 1519
		mu 0 4 819 1316 792 791
		f 4 -1452 1520 1521 1522
		mu 0 4 1315 781 822 1256
		f 4 -1439 1523 1524 1525
		mu 0 4 773 1314 1253 824
		f 4 -1492 1526 1527 1528
		mu 0 4 805 1313 1311 825
		f 4 -1495 1529 1530 1531
		mu 0 4 1312 806 826 1309
		f 4 -1528 1532 1533 1534
		mu 0 4 825 1311 1310 828
		f 4 -1534 1535 1536 1537
		mu 0 4 828 1310 1255 829
		f 4 -1531 1538 1539 1540
		mu 0 4 1309 826 830 1308
		f 4 -1540 1541 1542 1543
		mu 0 4 1308 830 832 1254
		f 4 -1507 1544 1545 1546
		mu 0 4 815 1363 1359 835
		f 4 -1504 1547 1548 1549
		mu 0 4 1362 812 836 1357
		f 4 -1498 1550 1551 1552
		mu 0 4 1361 808 838 1355
		f 4 -1501 1553 1554 1555
		mu 0 4 811 1360 1353 841
		f 4 -1546 1556 1557 1558
		mu 0 4 835 1359 1358 843
		f 4 -1558 1559 1560 1561
		mu 0 4 843 1358 1348 845
		f 4 -1549 1562 1563 1564
		mu 0 4 1357 836 846 1356
		f 4 -1564 1565 1566 1567
		mu 0 4 1356 846 848 1351
		f 4 -1552 1568 1569 1570
		mu 0 4 1355 838 850 1354
		f 4 -1570 1571 1572 1573
		mu 0 4 1354 850 852 1349
		f 4 -1555 1574 1575 1576
		mu 0 4 841 1353 1352 855
		f 4 -1576 1577 1578 1579
		mu 0 4 855 1352 1350 857
		f 4 1580 1581 1582 1583
		mu 0 4 858 1307 1302 859
		f 4 -1581 1584 -1511 1585
		mu 0 4 1307 858 817 1306
		f 4 1586 1587 1588 1589
		mu 0 4 1304 861 862 1301
		f 4 -1587 1590 -1517 1591
		mu 0 4 861 1304 1305 820
		f 4 1592 1593 1594 1595
		mu 0 4 864 1303 1299 865
		f 4 -1593 1596 -1583 1597
		mu 0 4 1303 864 859 1302
		f 4 1598 1599 1600 1601
		mu 0 4 1300 867 868 1298
		f 4 -1599 1602 -1589 1603
		mu 0 4 867 1300 1301 862
		f 4 -1595 1604 1605 1606
		mu 0 4 865 1299 1263 870
		f 4 -1601 1607 1608 1609
		mu 0 4 1298 868 871 1262
		f 4 -1567 1610 1611 1612
		mu 0 4 1351 848 873 1347
		f 4 -1579 1613 1614 1615
		mu 0 4 857 1350 1346 876
		f 4 -1573 1616 1617 1618
		mu 0 4 1349 852 877 1345
		f 4 -1561 1619 1620 1621
		mu 0 4 845 1348 1344 880
		f 4 -1612 1622 1623 1624
		mu 0 4 1347 873 881 1343
		f 4 -1615 1625 1626 1627
		mu 0 4 876 1346 1342 884
		f 4 -1618 1628 1629 1630
		mu 0 4 1345 877 885 1341
		f 4 -1621 1631 1632 1633
		mu 0 4 880 1344 1340 888
		f 4 -1624 1634 1635 1636
		mu 0 4 1343 881 889 1339
		f 4 -1627 1637 1638 1639
		mu 0 4 884 1342 1336 892
		f 4 -1630 1640 1641 1642
		mu 0 4 1341 885 893 1335
		f 4 -1633 1643 1644 1645
		mu 0 4 888 1340 1332 896
		f 4 -1636 1646 1647 1648
		mu 0 4 1339 889 897 1292
		f 4 -1639 1649 1650 1651
		mu 0 4 892 1336 1337 1290
		f 4 -1642 1652 1653 1654
		mu 0 4 1335 893 901 1286
		f 4 -1645 1655 1656 1657
		mu 0 4 896 1332 1333 1283
		f 4 1658 1659 1660 1661
		mu 0 4 1297 906 907 1296
		f 4 -1659 1662 1663 1664
		mu 0 4 906 1297 1293 910
		f 4 -1661 1665 1666 1667
		mu 0 4 1296 907 911 1295
		f 4 1668 1669 1670 1671
		mu 0 4 912 1294 1274 915
		f 4 -1669 1672 -1664 1673
		mu 0 4 1294 912 910 1293
		f 4 1674 1675 1676 1677
		mu 0 4 898 911 916 1284
		f 4 1678 1679 1680 1681
		mu 0 4 918 1291 1288 920
		f 4 1682 1683 1684 1685
		mu 0 4 900 918 921 1289
		f 4 -1685 1686 1687 1688
		mu 0 4 1289 921 923 1277
		f 4 -1681 1689 1690 1691
		mu 0 4 920 1288 1248 926
		f 4 1692 1693 1694 1695
		mu 0 4 927 1287 1270 929
		f 4 1696 1697 1698 1699
		mu 0 4 902 927 930 1285
		f 4 -1699 1700 1701 1702
		mu 0 4 1285 930 932 1280
		f 4 -1677 1703 1704 1705
		mu 0 4 1284 916 934 1278
		f 4 1706 1707 1708 1709
		mu 0 4 904 936 937 1269
		f 4 1710 1711 1712 1713
		mu 0 4 936 1282 1281 940
		f 4 -1713 1714 1715 1716
		mu 0 4 940 1281 1279 942
		f 4 -1702 1717 1718 1719
		mu 0 4 1280 932 943 1252
		f 4 -1716 1720 1721 1722
		mu 0 4 942 1279 1250 946
		f 4 -1705 1723 1724 1725
		mu 0 4 1278 934 947 1266
		f 4 -1688 1726 1727 1728
		mu 0 4 1277 923 949 1272
		f 4 1729 1730 1731 1732
		mu 0 4 1276 952 953 1267
		f 4 -1730 1733 1734 1735
		mu 0 4 952 1276 1275 956
		f 4 -1735 1736 1737 1738
		mu 0 4 956 1275 1271 958
		f 4 1739 1740 -1671 1741
		mu 0 4 1273 960 915 1274
		f 4 -1740 1742 1743 1744
		mu 0 4 960 1273 1268 962
		f 4 -1728 1745 -1738 1746
		mu 0 4 1272 949 958 1271
		f 4 -1695 1747 1748 1749
		mu 0 4 929 1270 1257 964
		f 4 -1709 1750 1751 1752
		mu 0 4 1269 937 965 1260
		f 4 -1744 1753 1754 1755
		mu 0 4 962 1268 1259 968
		f 4 -1732 1756 1757 1758
		mu 0 4 1267 953 969 1258
		f 4 -1725 1759 1760 1761
		mu 0 4 1266 947 971 1265
		f 4 -1761 1762 1763 1764
		mu 0 4 1265 971 973 1249
		f 4 -1448 1765 -1606 1766
		mu 0 4 1264 778 870 1263
		f 4 -1487 1767 -1609 1768
		mu 0 4 804 1261 1262 871
		f 4 -1752 1769 -1755 1770
		mu 0 4 1260 965 968 1259
		f 4 -1749 1771 -1758 1772
		mu 0 4 964 1257 1258 969
		f 4 -1537 1773 -1522 1774
		mu 0 4 829 1255 1256 822
		f 4 -1543 1775 -1525 1776
		mu 0 4 1254 832 824 1253
		f 4 -1719 1777 1778 1779
		mu 0 4 1252 943 975 1251
		f 4 -1779 1780 -1722 1781
		mu 0 4 1251 975 946 1250
		f 4 -1764 1782 -1691 1783
		mu 0 4 1249 973 926 1248
		f 4 -1519 1786 15 28
		mu 0 4 1317 818 216 215
		f 4 1789 -1532 1790 71
		mu 0 4 19 807 827 16
		f 4 -1660 1791 740 1792
		mu 0 4 907 906 745 744
		f 4 1796 -1591 1795 219
		mu 0 4 211 821 860 212
		f 4 -1673 1797 -756 1798
		mu 0 4 910 912 747 746
		f 4 -1666 -1793 1799 -1676
		mu 0 4 911 907 744 916
		f 4 -29 1800 -1465 -1471
		mu 0 4 1317 215 788 1326
		f 4 1801 -1312 1802 -1529
		mu 0 4 825 14 13 805
		f 4 -1786 -1457 -1461 1803
		mu 0 4 4 23 782 784
		f 4 1804 -1455 -1453 1805
		mu 0 4 206 783 779 705
		f 4 -1459 1806 1807 -1451
		mu 0 4 780 785 706 781
		f 4 -46 -1807 -1513 1808
		mu 0 4 707 706 785 816
		f 4 1809 -253 1810 -1585
		mu 0 4 858 709 708 817
		f 4 1811 -1438 -1463 1812
		mu 0 4 716 772 1370 777
		f 4 1813 -1698 -1696 1814
		mu 0 4 724 930 927 929
		f 4 1815 -1473 -1467 1816
		mu 0 4 214 759 786 789
		f 4 1817 -1481 -1479 1818
		mu 0 4 213 799 794 797
		f 4 1819 -219 1820 -1592
		mu 0 4 820 767 766 861
		f 4 1821 -63 1822 -1520
		mu 0 4 791 769 768 819
		f 4 1823 -1822 -1469 -1475
		mu 0 4 793 769 791 790
		f 4 1826 -1106 1827 -1538
		mu 0 4 829 100 99 828
		f 4 1828 -1544 1829 843
		mu 0 4 207 831 833 208
		f 4 -1778 1830 -1426 1831
		mu 0 4 975 943 630 629
		f 4 1832 195 1833 -1548
		mu 0 4 812 114 117 836
		f 4 1834 -1550 1835 -195
		mu 0 4 130 813 837 131
		f 4 1836 187 1837 -1545
		mu 0 4 814 132 135 834
		f 4 1838 -1553 1839 -179
		mu 0 4 717 809 839 718
		f 4 1840 -1556 1841 -166
		mu 0 4 205 811 841 977
		f 4 1842 166 1843 -1554
		mu 0 4 810 166 169 840
		f 4 -1834 124 1844 -1563
		mu 0 4 836 117 173 846
		f 4 -1836 -1565 1845 -133
		mu 0 4 131 837 847 739
		f 4 -1838 134 1846 -1557
		mu 0 4 834 135 758 842
		f 4 -1840 -1571 1847 -143
		mu 0 4 718 839 851 719
		f 4 -1842 -1577 1848 -151
		mu 0 4 977 841 855 335
		f 4 -1844 152 1849 -1575
		mu 0 4 840 169 738 854
		f 4 -1804 -1502 -1841 -116
		mu 0 4 4 784 811 205
		f 4 -1805 117 -1843 -1500
		mu 0 4 783 206 166 810
		f 4 -1813 -1499 -1839 -107
		mu 0 4 716 777 809 717
		f 4 -1818 97 -1837 -1506
		mu 0 4 799 213 132 814
		f 4 -1817 -1505 -1835 -95
		mu 0 4 214 789 813 130
		f 4 -1801 86 -1833 -1503
		mu 0 4 788 215 114 812
		f 4 1852 -1239 1853 -1597
		mu 0 4 864 710 711 859
		f 4 1854 -309 1855 -1604
		mu 0 4 862 765 764 867
		f 4 1857 -1603 1856 309
		mu 0 4 241 863 866 242
		f 4 1858 -1741 1859 746
		mu 0 4 748 915 960 749
		f 4 -1811 -47 -1809 -1512
		mu 0 4 817 708 707 816
		f 4 -1665 -1799 750 -1792
		mu 0 4 906 910 746 745
		f 4 -1787 -1518 -1797 273
		mu 0 4 216 818 821 211
		f 4 -1823 -275 -1820 -1516
		mu 0 4 819 768 767 820
		f 4 1861 -307 -1853 -1596
		mu 0 4 865 712 710 864
		f 4 -1856 -355 1862 -1600
		mu 0 4 867 764 763 868
		f 4 -1857 -1602 1863 355
		mu 0 4 242 866 869 277
		f 4 1866 -1331 1867 -1766
		mu 0 4 778 713 714 870
		f 4 1868 -789 1869 -1769
		mu 0 4 871 762 761 804
		f 4 1871 -1768 1870 789
		mu 0 4 311 872 803 312
		f 4 1872 -1770 1873 797
		mu 0 4 752 968 965 751
		f 4 -1845 393 1874 -1566
		mu 0 4 846 173 321 848
		f 4 -1849 -1580 1875 -407
		mu 0 4 335 855 857 336
		f 4 -1850 408 1876 -1578
		mu 0 4 854 738 737 856
		f 4 -1846 -1568 1877 -413
		mu 0 4 739 847 849 740
		f 4 -1848 -1574 1878 -435
		mu 0 4 719 851 853 720
		f 4 -1847 436 1879 -1560
		mu 0 4 842 758 757 844
		f 4 -1875 465 1880 -1611
		mu 0 4 848 321 372 873
		f 4 -1876 -1616 1881 -479
		mu 0 4 336 857 876 386
		f 4 -1877 480 1882 -1614
		mu 0 4 856 737 736 875
		f 4 -1878 -1613 1883 -485
		mu 0 4 740 849 874 741
		f 4 -1879 -1619 1884 -506
		mu 0 4 720 853 878 721
		f 4 -1880 507 1885 -1620
		mu 0 4 844 757 756 879
		f 4 -1881 547 1886 -1623
		mu 0 4 873 372 422 881
		f 4 -1882 -1628 1887 -561
		mu 0 4 386 876 884 448
		f 4 -1883 562 1888 -1626
		mu 0 4 875 736 734 883
		f 4 -1885 -1631 1889 -568
		mu 0 4 721 878 886 722
		f 4 -1884 -1625 1890 -571
		mu 0 4 741 874 882 742
		f 4 -1886 572 1891 -1632
		mu 0 4 879 756 754 887
		f 4 -1887 619 1892 -1635
		mu 0 4 881 422 472 889
		f 4 -1888 -1640 1893 -633
		mu 0 4 448 884 892 498
		f 4 -1889 634 1894 -1638
		mu 0 4 883 734 735 891
		f 4 -1890 -1643 1895 -640
		mu 0 4 722 886 894 723
		f 4 -1891 -1637 1896 -643
		mu 0 4 742 882 890 743
		f 4 -1892 644 1897 -1644
		mu 0 4 887 754 755 895
		f 4 -1746 1898 705 1899
		mu 0 4 958 949 731 730
		f 4 -621 1900 -1662 1901
		mu 0 4 472 471 905 908
		f 4 -627 1902 -1674 1903
		mu 0 4 476 475 913 909
		f 4 -1893 -1902 -1668 -1647
		mu 0 4 889 472 908 897
		f 4 -1894 -1652 -1686 1904
		mu 0 4 498 892 1290 922
		f 4 -1895 1905 -1680 -1650
		mu 0 4 891 735 919 899
		f 4 -1896 -1655 -1700 1906
		mu 0 4 723 894 1334 931
		f 4 -1897 -1649 -1678 1907
		mu 0 4 743 890 1338 917
		f 4 -1898 1908 -1712 -1656
		mu 0 4 895 755 939 903
		f 4 1909 -851 1910 -1780
		mu 0 4 976 488 489 944
		f 4 1911 1197 1912 -1721
		mu 0 4 941 490 491 945
		f 4 1913 -1084 1914 -1765
		mu 0 4 974 496 497 972
		f 4 656 -1905 -1689 1915
		mu 0 4 499 498 922 924
		f 4 681 1916 -1734 1917
		mu 0 4 516 515 955 951
		f 4 1918 -662 1919 -1742
		mu 0 4 914 502 503 959
		f 4 665 -1916 -1729 1920
		mu 0 4 505 499 924 950
		f 4 -668 -1904 -1663 -1901
		mu 0 4 471 476 909 905
		f 4 1921 800 1922 -1772
		mu 0 4 963 507 508 970
		f 4 1923 -797 1924 -1771
		mu 0 4 967 510 511 966
		f 4 674 1925 -1743 -1920
		mu 0 4 503 512 961 959
		f 4 -685 -1921 -1747 1926
		mu 0 4 517 505 950 957
		f 4 689 -1918 -1733 1927
		mu 0 4 518 516 951 954
		f 4 1928 -1684 -1682 1929
		mu 0 4 733 921 918 920
		f 4 -1929 -695 1930 -1687
		mu 0 4 921 733 732 923
		f 4 1931 -699 1932 -1736
		mu 0 4 956 729 728 952
		f 4 -1931 -702 -1899 -1727
		mu 0 4 923 732 731 949
		f 4 1933 -800 1934 -1773
		mu 0 4 969 726 725 964
		f 4 -1933 -708 1935 -1731
		mu 0 4 952 728 727 953
		f 4 1936 -858 1937 -1763
		mu 0 4 971 531 530 973
		f 4 1938 -737 1939 -1724
		mu 0 4 934 563 562 947
		f 4 757 -1860 -1745 1940
		mu 0 4 750 749 960 962
		f 4 1941 -1190 1942 -1726
		mu 0 4 948 613 614 935
		f 4 1943 -787 -1867 -1447
		mu 0 4 775 715 713 778
		f 4 -1870 -1389 1944 -1488
		mu 0 4 804 761 760 802
		f 4 -1871 -1486 1945 1389
		mu 0 4 312 803 801 619
		f 4 -1925 -1396 1946 -1753
		mu 0 4 966 511 626 938
		f 4 -1874 -1751 1947 1396
		mu 0 4 751 965 937 753
		f 4 -1935 -1401 -1815 -1750
		mu 0 4 964 725 724 929
		f 4 1948 1401 -1922 -1748
		mu 0 4 928 631 507 963
		f 4 1950 -837 -1827 -1775
		mu 0 4 822 651 100 829
		f 4 -1830 -1777 1951 956
		mu 0 4 208 833 823 661
		f 4 -1911 -964 1952 -1720
		mu 0 4 944 489 668 933
		f 4 -1831 -1718 1953 -1427
		mu 0 4 630 943 932 669
		f 4 -1938 -971 1954 -1783
		mu 0 4 973 530 678 926
		f 4 1955 -859 -1914 -1784
		mu 0 4 925 679 496 974
		f 4 -1808 -950 -1951 -1521
		mu 0 4 781 706 651 822
		f 4 -1952 -1524 -1812 38
		mu 0 4 661 823 772 716
		f 4 -1953 -651 -1907 -1703
		mu 0 4 933 668 723 931
		f 4 -1701 -1814 -1428 -1954
		mu 0 4 932 930 724 669
		f 4 -712 -1930 -1692 -1955
		mu 0 4 678 733 920 926
		f 4 -972 -1956 -1690 -1906
		mu 0 4 735 679 925 919
		f 4 -1915 -775 -1942 -1762
		mu 0 4 972 497 613 948
		f 4 -1940 -1085 -1937 -1760
		mu 0 4 947 562 531 971
		f 4 -1781 -1832 -1425 1956
		mu 0 4 946 975 629 628
		f 4 -1092 -1910 -1782 -1913
		mu 0 4 491 488 976 945
		f 4 -1791 -1541 -1829 1098
		mu 0 4 16 827 831 207
		f 4 -1828 -70 -1802 -1535
		mu 0 4 828 99 14 825
		f 4 -1943 -654 -1908 -1706
		mu 0 4 935 614 743 917
		f 4 -1800 -1191 -1939 -1704
		mu 0 4 916 744 563 934
		f 4 651 -1912 -1715 -1909
		mu 0 4 755 490 941 939
		f 4 -1854 -217 -1810 -1584
		mu 0 4 859 711 709 858
		f 4 -1917 1246 -1927 -1737
		mu 0 4 955 515 517 957
		f 4 -1900 -1248 -1932 -1739
		mu 0 4 958 730 729 956
		f 4 -1798 -1672 -1859 1253
		mu 0 4 747 912 915 748
		f 4 -1255 -1919 -1670 -1903
		mu 0 4 475 502 914 913
		f 4 -1796 -1590 -1858 1261
		mu 0 4 212 860 863 241
		f 4 -1821 -1263 -1855 -1588
		mu 0 4 861 766 765 862
		f 4 -1819 -1496 -1790 1303
		mu 0 4 213 797 807 19
		f 4 -1803 -55 -1824 -1493
		mu 0 4 805 13 769 793
		f 4 -1868 -353 -1862 -1607
		mu 0 4 870 714 712 865
		f 4 -1923 1338 -1928 -1759
		mu 0 4 970 508 518 954
		f 4 -1936 -1340 -1934 -1757
		mu 0 4 953 727 726 969
		f 4 -1941 -1756 -1873 1345
		mu 0 4 750 962 968 752
		f 4 -1347 -1924 -1754 -1926
		mu 0 4 512 510 967 961
		f 4 -1864 -1610 -1872 1353
		mu 0 4 277 869 872 311
		f 4 -1863 -1355 -1869 -1608
		mu 0 4 868 763 762 871
		f 4 1957 -1944 -1442 -1440
		mu 0 4 773 715 775 770
		f 4 1958 -1410 -1958 -1526
		mu 0 4 824 660 715 773
		f 4 1959 -1411 -1959 -1776
		mu 0 4 832 615 660 824
		f 4 1960 -1412 -1960 -1542
		mu 0 4 830 616 615 832
		f 4 1961 -1413 -1961 -1539
		mu 0 4 826 617 616 830
		f 4 1962 -1414 -1962 -1530
		mu 0 4 806 618 617 826
		f 4 1963 -1415 -1963 -1494
		mu 0 4 796 760 618 806
		f 4 -1945 -1964 -1477 -1485
		mu 0 4 802 760 796 795
		f 4 -1946 -1483 -1490 1964
		mu 0 4 619 801 798 800
		f 4 -1416 -1965 -1508 1965
		mu 0 4 620 619 800 815
		f 4 -1417 -1966 -1547 1966
		mu 0 4 621 620 815 835
		f 4 -1418 -1967 -1559 1967
		mu 0 4 622 621 835 843
		f 4 -1419 -1968 -1562 1968
		mu 0 4 623 622 843 845
		f 4 -1420 -1969 -1622 1969
		mu 0 4 624 623 845 880
		f 4 -1421 -1970 -1634 1970
		mu 0 4 625 624 880 888
		f 4 -1422 -1971 -1646 1971
		mu 0 4 626 625 888 896
		f 4 -1947 -1972 -1658 -1710
		mu 0 4 938 626 896 1283
		f 4 -1708 -1714 1972 -1948
		mu 0 4 937 936 940 753
		f 4 1973 -1423 -1973 -1717
		mu 0 4 942 627 753 940
		f 4 -1957 -1424 -1974 -1723
		mu 0 4 946 628 627 942
		f 4 1974 -1949 -1694 -1653
		mu 0 4 893 631 928 901
		f 4 1975 -1429 -1975 -1641
		mu 0 4 885 632 631 893
		f 4 1976 -1430 -1976 -1629
		mu 0 4 877 633 632 885
		f 4 1977 -1431 -1977 -1617
		mu 0 4 852 634 633 877
		f 4 1978 -1432 -1978 -1572
		mu 0 4 850 635 634 852
		f 4 1979 -1433 -1979 -1569
		mu 0 4 838 636 635 850
		f 4 1980 -1434 -1980 -1551
		mu 0 4 808 637 636 838
		f 4 1981 -1435 -1981 -1497
		mu 0 4 776 638 637 808
		f 4 -1436 -1982 -1446 -1444
		mu 0 4 1329 638 776 774
		f 3 -1441 -1445 -1437
		mu 0 3 770 1331 1330
		f 3 -1454 -1456 -1450
		mu 0 3 1328 1327 780
		f 3 -1464 -1472 -1468
		mu 0 3 787 1325 790
		f 3 -1480 -1482 -1476
		mu 0 3 1324 1323 795
		f 3 -1648 -1667 -1675
		mu 0 3 898 1295 911
		f 3 -1683 -1651 -1679
		mu 0 3 918 900 1291
		f 3 -1697 -1654 -1693
		mu 0 3 927 902 1287
		f 3 -1657 -1711 -1707
		mu 0 3 904 1282 936
		f 4 -138 1982 150 -164
		mu 0 4 260 259 977 335
		f 4 -180 205 165 -1983
		mu 0 4 259 210 205 977
		f 4 173 1983 -165 -207
		mu 0 4 209 261 164 995
		f 4 136 162 -148 -1984
		mu 0 4 261 262 188 164
		f 4 -2017 -1 4 6
		mu 0 4 1094 1093 1229 1223
		f 4 -2018 -7 102 -1987
		mu 0 4 1095 1094 1223 146
		f 4 -2019 1986 174 103
		mu 0 4 1096 1095 146 149
		f 4 -2020 -104 138 139
		mu 0 4 1097 1096 149 1211
		f 4 -2021 -140 431 448
		mu 0 4 1098 1097 1211 1207
		f 4 -2022 -449 502 519
		mu 0 4 1099 1098 1207 1203;
	setAttr ".fc[1000:1057]"
		f 4 -2023 -520 564 601
		mu 0 4 1100 1099 1203 1196
		f 4 -2024 -602 636 670
		mu 0 4 1166 1100 1196 1197
		f 4 -2025 -671 638 703
		mu 0 4 1102 1101 482 481
		f 4 -2026 -704 648 -1995
		mu 0 4 1103 1102 481 697
		f 4 -2027 1994 989 -1996
		mu 0 4 1104 1103 697 486
		f 4 -2028 1995 876 1123
		mu 0 4 1105 1104 486 487
		f 4 -2029 -1124 1065 727
		mu 0 4 1106 1105 487 1171
		f 4 -2030 -728 -1172 1208
		mu 0 4 1107 1106 1171 492
		f 4 -2031 -1209 -653 752
		mu 0 4 1108 1107 492 485
		f 4 -2032 -753 646 672
		mu 0 4 1164 1108 485 1183
		f 4 603 -2033 -673 -646
		mu 0 4 434 1110 1109 484
		f 4 521 -2034 -604 -574
		mu 0 4 396 1111 1110 434
		f 4 450 -2035 -522 -509
		mu 0 4 346 1112 1111 396
		f 4 127 -2036 -451 -438
		mu 0 4 180 1113 1112 346
		f 4 89 -2037 -128 -127
		mu 0 4 1217 1114 1113 180
		f 4 199 -2038 -90 -190
		mu 0 4 136 1115 1114 1217
		f 4 9 -2039 -200 -89
		mu 0 4 81 1116 1115 136
		f 4 1 -2040 -10 -8
		mu 0 4 1227 1117 1116 81
		f 4 -2010 -2041 -2 -53
		mu 0 4 1063 1119 1118 1084
		f 4 -2011 -2042 2009 -1302
		mu 0 4 1062 1120 1119 1063
		f 4 73 -2043 2010 -64
		mu 0 4 1069 1121 1120 1062
		f 4 -2013 -2044 -74 -1058
		mu 0 4 1068 1122 1121 1069
		f 4 884 -2045 2012 -827
		mu 0 4 1073 1123 1122 1068
		f 4 997 -2046 -885 -940
		mu 0 4 1072 1124 1123 1073
		f 4 40 -2047 -998 -32
		mu 0 4 1087 1125 1124 1072
		f 4 0 -2048 -41 -3
		mu 0 4 1091 1092 1125 1087
		f 4 -233 -2050 -2081 -210
		mu 0 4 140 37 1127 1126
		f 4 -232 -2051 -2082 2049
		mu 0 4 37 1079 1129 1127
		f 4 -2083 2050 -252 -2052
		mu 0 4 1130 1128 36 62
		f 4 -2053 -2084 2051 -943
		mu 0 4 643 1131 1130 62
		f 4 -2054 -2085 2052 -830
		mu 0 4 84 1132 1131 643
		f 4 1112 -2086 2053 -1055
		mu 0 4 83 1133 1132 84
		f 4 -2087 -1113 -251 -2056
		mu 0 4 1134 1133 83 56
		f 4 1318 -2088 2055 -1299
		mu 0 4 55 1135 1134 56
		f 4 -2089 -1319 -250 228
		mu 0 4 1136 1135 55 76
		f 4 -2090 -229 -249 -2059
		mu 0 4 1138 1136 76 1078
		f 4 -2091 2058 -248 -2060
		mu 0 4 1139 1137 51 50
		f 4 -2092 2059 -247 -2061
		mu 0 4 1140 1139 50 119
		f 4 -2093 2060 -246 -2062
		mu 0 4 1141 1140 119 118
		f 4 -2094 2061 -245 -2063
		mu 0 4 1142 1141 118 174
		f 4 -2095 2062 396 -2064
		mu 0 4 1143 1142 174 323
		f 4 -2096 2063 468 -2065
		mu 0 4 1144 1143 323 374
		f 4 -2097 2064 550 -2066
		mu 0 4 1145 1144 374 424
		f 4 -2098 2065 622 -2067
		mu 0 4 1162 1145 424 1163
		f 4 -2068 -2099 2066 -762
		mu 0 4 589 1147 1146 474
		f 4 -2069 -2100 2067 -1175
		mu 0 4 568 1148 1147 589
		f 4 -2070 -2101 2068 -743
		mu 0 4 565 1149 1148 568
		f 4 -2071 -2102 2069 -1069
		mu 0 4 536 1150 1149 565
		f 4 928 -2103 2070 -874
		mu 0 4 533 1151 1150 536
		f 4 1041 -2104 -929 -987
		mu 0 4 694 1152 1151 533
		f 4 -2074 -2105 -1042 -718
		mu 0 4 522 1153 1152 694
		f 4 -2075 -2106 2073 -697
		mu 0 4 1161 1160 1153 522
		f 4 -2076 -2107 2074 -677
		mu 0 4 464 1155 1154 514
		f 4 -2077 -2108 2075 -608
		mu 0 4 413 1156 1155 464
		f 4 -2078 -2109 2076 -524
		mu 0 4 364 1157 1156 413
		f 4 -2079 -2110 2077 -454
		mu 0 4 40 1158 1157 364
		f 4 -235 -2080 -2111 2078
		mu 0 4 40 141 1159 1158
		f 4 -234 209 -2112 2079
		mu 0 4 141 140 1126 1159;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "0236FC20-4BB6-230A-788B-B4A1C89B8FDB";
	setAttr -s 108 ".lnk";
	setAttr -s 108 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "831B266D-4DE3-5EB8-BB79-AAACD7DCAFE8";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "186EDEFC-42E9-A48B-DC23-0299CF5F8E69";
createNode displayLayerManager -n "layerManager";
	rename -uid "4D4EAD63-4EDA-FDC9-4D3F-089A7CBCF68C";
	setAttr ".cdl" 1;
	setAttr -s 2 ".dli[1]"  1;
	setAttr -s 2 ".dli";
createNode displayLayer -n "defaultLayer";
	rename -uid "A4382E73-4D52-CE28-3EF6-4190835D8E5F";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "86109B0D-4074-139D-549B-1AB707665570";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "FA2D4826-43D9-9B5D-FB5E-318E755F2959";
	setAttr ".g" yes;
createNode phong -n "MaterialFBXASC046002";
	rename -uid "1086B742-44DA-30A4-5353-E39454403914";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_OuterShellMain_GeoSG";
	rename -uid "5AC33E9C-409A-42B1-E3F2-2098C6B0EA31";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo1";
	rename -uid "00A79AFB-46FA-5175-0D92-B1869C429D59";
createNode phong -n "WorldGridMaterial";
	rename -uid "92369AF2-4580-444D-4224-68AFF2A4C34F";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG";
	rename -uid "5CFC6C76-4657-9429-12B0-3BA4A05FF883";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo2";
	rename -uid "796A0F1D-409C-ED22-CFFA-F2901B7B8D9B";
createNode phong -n "M_Grey";
	rename -uid "BB138866-4974-D236-75BA-D0A83EB89C5F";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG1";
	rename -uid "654259FF-433C-3791-E8E2-FA808D5FB19C";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo3";
	rename -uid "9E8CE286-4343-2F6E-D27C-D8956CB3F2C0";
createNode phong -n "M_BlueGrey";
	rename -uid "171F93D8-4FB5-501F-DAFC-BBB051772F66";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG2";
	rename -uid "8E52F125-4987-8F65-C853-F3AD5BB81B01";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo4";
	rename -uid "A3C7F9C4-46CA-BD6F-C564-93B2AC975F53";
createNode phong -n "M_DarkGrey";
	rename -uid "CA73BFD9-4E25-B058-D3AB-A0BFB357A9FE";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG3";
	rename -uid "CB1ED89D-4936-928F-4552-9CA80DE38DDD";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo5";
	rename -uid "E9EE0C71-463D-8660-6050-B58E635D7E8F";
createNode phong -n "M_LightBlueGrey";
	rename -uid "B869F44B-457E-B8E2-2AAC-2FA137F3F751";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG4";
	rename -uid "83C44714-421D-45C4-6AA8-44ACF3EE51E8";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo6";
	rename -uid "39364479-4634-2675-1FBD-B98904B5F0A1";
createNode phong -n "M_DarkBlueGrey";
	rename -uid "98F26DAA-4A62-C888-0E20-FB8C254B5E01";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG5";
	rename -uid "0830A263-44CE-3FE6-731F-19B38831D59B";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo7";
	rename -uid "7CE29A27-4848-F376-A89D-A8BC739F6E49";
createNode phong -n "M_Teal";
	rename -uid "F55A1BCC-481D-E0AC-4C6A-6787CBE67A68";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG6";
	rename -uid "3B7ADB49-4914-3E72-F413-E4BFEFF5E36B";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo8";
	rename -uid "FF78EF4B-4242-6FBC-8C32-05A3492B3814";
createNode phong -n "Transparent";
	rename -uid "9B70E111-4ABB-1EEE-65B1-209463E59B8D";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG7";
	rename -uid "A25B9FF5-487A-AB58-B5AB-93A699E00972";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo9";
	rename -uid "369C57AB-4176-D553-3A8A-57B0E220F008";
createNode phong -n "M_LightBlue";
	rename -uid "87197C02-4E94-B7CA-6F3B-D99ED609FC70";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG8";
	rename -uid "FA976AC6-4942-3190-E814-2098A55B1208";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo10";
	rename -uid "1B5BED4A-45FA-B17B-6DA9-21A08C9425C4";
createNode phong -n "MaterialFBXASC046001";
	rename -uid "E8FA4D0A-4375-6D25-9E18-68A0E6EF0077";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MiddleFloor_PlatStairs_GeoSG9";
	rename -uid "DFF591BC-4726-427B-67AA-4EB2DFFBD977";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo11";
	rename -uid "DFF0E1CA-4FDE-52B2-AF3C-F3A49A5F9FA4";
createNode script -n "uiConfigurationScriptNode";
	rename -uid "739435D7-4856-9254-DFB4-29A20F415C12";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $nodeEditorPanelVisible = stringArrayContains(\"nodeEditorPanel1\", `getPanel -vis`);\n\tint    $nodeEditorWorkspaceControlOpen = (`workspaceControl -exists nodeEditorPanel1Window` && `workspaceControl -q -visible nodeEditorPanel1Window`);\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\n\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"top\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n"
		+ "            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n"
		+ "            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 351\n            -height 384\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"side\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 1\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n"
		+ "            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n"
		+ "            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 350\n            -height 383\n"
		+ "            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"front\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n"
		+ "            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n"
		+ "            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n"
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 351\n            -height 383\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 708\n            -height 811\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
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
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 708\\n    -height 811\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 708\\n    -height 811\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "B1E7D19A-45C1-591E-33C4-4D8BCCBD8B75";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
createNode polyExtrudeVertex -n "polyExtrudeVertex1";
	rename -uid "2EF0A2FC-4CAD-C22D-EC30-B9A24E91FBC5";
	setAttr ".ics" -type "componentList" 1 "vtx[32]";
	setAttr ".ix" -type "matrix" 0.99999997764825821 0 0 0 0 -1.6292067597231507e-07 -0.99999997764824511 0
		 0 0.99999997764824511 -1.6292067597231507e-07 0 0 0 0 1;
	setAttr ".l" 1;
	setAttr ".w" 0.5;
createNode polyUnite -n "polyUnite1";
	rename -uid "77984686-4767-C8A8-F788-00B5E5453E91";
createNode phong -n "MaterialFBXASC046003";
	rename -uid "CC593C12-414F-EF99-9C94-5C9DE1E4E594";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MiddleFloorBase_GeoSG";
	rename -uid "1171B255-4BD3-DE51-4A6F-C491838B4A69";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo12";
	rename -uid "FA05D04C-40EB-4CA8-23B5-FFBE67B09825";
createNode phong -n "WorldGridMaterial1";
	rename -uid "89AF366B-4039-B979-AF7B-8EA228AB655B";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG";
	rename -uid "BFE254B8-44B1-5A57-EB5B-C3BCFCEF1332";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo13";
	rename -uid "D0350E1B-48F1-72A0-2BEA-2B85A3C14764";
createNode phong -n "M_Grey1";
	rename -uid "AC0F0C5B-464A-3453-6940-67840E512326";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG1";
	rename -uid "2F27C217-4AA6-CA16-7AFA-40B969FA78CA";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo14";
	rename -uid "A0C69033-495C-B612-DFE4-3790988B15DF";
createNode phong -n "M_BlueGrey1";
	rename -uid "82F81FBA-4151-60A3-C711-5BA95CA0D09C";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG2";
	rename -uid "9E81E4EE-4BA8-BE86-D021-93A0B8D586B0";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo15";
	rename -uid "CE7406E0-417C-31F0-C522-6F99BE880E96";
createNode phong -n "M_DarkGrey1";
	rename -uid "95E87974-4B87-354D-EAD9-2C977CBDFDC8";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG3";
	rename -uid "BCF6D8B2-4EF3-700B-747E-A381DEF87FCF";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo16";
	rename -uid "E286164E-4EC5-B849-932F-269B6CCF4475";
createNode phong -n "M_LightBlueGrey1";
	rename -uid "E292B213-453E-2AB1-E2B6-069540EC9EA6";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG4";
	rename -uid "A9053035-4727-29CA-A129-ADB29D8E0AA1";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo17";
	rename -uid "733DE829-4F6B-3460-6950-EC9329137398";
createNode phong -n "M_DarkBlueGrey1";
	rename -uid "0B3ED946-4518-06B5-4E7D-7A889342BD16";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG5";
	rename -uid "C818888E-439F-0C5A-D42C-9C9B440EBB12";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo18";
	rename -uid "05760679-4F72-0EC3-5F52-8CA34D2722D6";
createNode phong -n "M_Teal1";
	rename -uid "9A6B136F-48FC-3DFD-EA8B-F8A77B18DA15";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG6";
	rename -uid "C5C4B701-49E8-D8DE-F087-208D1A4B40FB";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo19";
	rename -uid "50CD49A8-4BF2-B08C-DFE2-0DA8B595FA0B";
createNode phong -n "Transparent1";
	rename -uid "D392A29F-4812-ACF3-2282-98BDE552FCE5";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG7";
	rename -uid "0986C378-4CD4-1AA3-8B00-BEB7F571A539";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo20";
	rename -uid "900C9E56-4874-9685-4A27-EF8CD40AC593";
createNode phong -n "M_LightBlue1";
	rename -uid "88C10376-42DC-A3BC-D1E3-50A7C7FF81C8";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG8";
	rename -uid "B9ACC667-4337-7270-03A2-10BA2E5F5CE2";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo21";
	rename -uid "44DC9184-4BFD-63A0-C731-0EA8FA6965A8";
createNode phong -n "MaterialFBXASC046004";
	rename -uid "D9D0248F-47BE-84D3-C453-B5ACB9C03F40";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG9";
	rename -uid "C8C58221-4183-008F-EA86-8AA304BE6B94";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo22";
	rename -uid "61AC6207-4C3F-446C-496C-BB9F76DD00B6";
createNode phong -n "WorldGridMaterial2";
	rename -uid "549586DD-4EF3-BAD1-B432-BC98B2CEC3D2";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG";
	rename -uid "FC48FA7A-4558-DBE6-150D-899C09C04408";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo23";
	rename -uid "CFDAFD69-415E-83E3-9D48-A9B5EBA9DABD";
createNode phong -n "M_Grey2";
	rename -uid "F8070A49-4CD2-0D3C-FB20-7E957957DE5C";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG1";
	rename -uid "96CBD5FD-4314-DBEC-CC9F-49AD5687F040";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo24";
	rename -uid "3B422A3C-4F06-5ABC-3E3B-918ED32FFDDA";
createNode phong -n "M_BlueGrey2";
	rename -uid "FC59F2AC-4838-F599-DBB0-BF9F40B61274";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG2";
	rename -uid "391837C9-4804-49E0-56AE-D5B110CDBBB8";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo25";
	rename -uid "8849F71E-4539-C7CB-E651-85BD812655D0";
createNode phong -n "M_DarkGrey2";
	rename -uid "30C25C52-4727-4D74-FEA1-CFBE1EE02A96";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG3";
	rename -uid "9FD1EDF9-48FA-F556-2390-A59CAE16D5D8";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo26";
	rename -uid "05E495D7-4BF1-CA41-E274-28A02CD12A8E";
createNode phong -n "M_LightBlueGrey2";
	rename -uid "37AFCE53-48B2-7B0A-F5B4-AD8FD7B0CB12";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG4";
	rename -uid "D306A86C-4C61-8121-F1DE-AD9BABF57EE3";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo27";
	rename -uid "3ECA8231-46B5-E8EA-2EB7-DE9BC51BF99F";
createNode phong -n "M_DarkBlueGrey2";
	rename -uid "53981D50-4427-90D0-D53F-D7B537031C50";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG5";
	rename -uid "80748B7D-42FF-326F-E1A2-BD9D016C5277";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo28";
	rename -uid "28AECBE7-4689-5DCB-C03C-BB8AF124365B";
createNode phong -n "M_Teal2";
	rename -uid "BE8C4E3A-47A1-E999-AE66-028BEDA8A06B";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG6";
	rename -uid "840EE33F-4E20-1CEA-4B73-54985DB6AFC5";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo29";
	rename -uid "1EECABAE-4BD4-BF9E-918D-8A99BC36BA3C";
createNode phong -n "Transparent2";
	rename -uid "5DD896B2-4EB7-7A1D-1B26-59BBA5C899E7";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG7";
	rename -uid "B6956BE5-4DD9-BA32-7F7B-5FA8D47402F5";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo30";
	rename -uid "2B575A6A-4E52-0FD1-146D-0DA1D3CDDBB5";
createNode phong -n "M_LightBlue2";
	rename -uid "D27BAE8B-40DA-C232-B905-58B19F680E48";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG8";
	rename -uid "DC9B097F-4876-9BEE-3512-95A6E1D8CD6E";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo31";
	rename -uid "04F9C11D-4C86-D633-E76B-E69D61302447";
createNode phong -n "MaterialFBXASC046005";
	rename -uid "3A34FEFF-4FCA-41F6-E97C-23BD843D9449";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "BASE_CAVE_GEO_StaticMeshSG9";
	rename -uid "5A55FA49-4AC3-BE0F-8F16-C194602822B1";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo32";
	rename -uid "3BBB132A-4527-26D9-1C52-8A8AF885EF2E";
createNode phong -n "MaterialFBXASC046006";
	rename -uid "E72B3F87-40BB-3A4D-9A18-1DA0EED0D301";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_RailingtoLB_GeoSG";
	rename -uid "AE7ED935-4688-EDA1-788D-A29B4B5171D9";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo33";
	rename -uid "EB3A8A4F-4E0F-B34C-FA29-5BB0C4A816CF";
createNode phong -n "MaterialFBXASC046007";
	rename -uid "A0040CDC-4F74-8C9A-5539-5D87C425737F";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MiddleFloorBase_GeoSG1";
	rename -uid "DA3BD4E2-4DFB-3F87-4516-44AD7BF214D7";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo34";
	rename -uid "4AF6C426-4EBB-91F0-2716-258DA9C8FB8A";
createNode phong -n "WorldGridMaterial3";
	rename -uid "A948656F-4AF1-5F82-8B19-CF98C28F276E";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG10";
	rename -uid "94DF989E-43A8-7A83-1A0A-259B2727DBA6";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo35";
	rename -uid "FAEF49FF-484F-D177-A7FB-CC9204AE0DC7";
createNode phong -n "M_Grey3";
	rename -uid "382CC311-4DE2-A0A0-1BA2-B69846756AD4";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG11";
	rename -uid "CA186406-46BC-1AEF-CCD2-428D8A6C8862";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo36";
	rename -uid "C848B4D4-44B1-533D-737C-D7A2C05636BD";
createNode phong -n "M_BlueGrey3";
	rename -uid "BD10E28E-4531-7BE3-E913-60899CAF5635";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG12";
	rename -uid "8BE7485C-4275-51B4-850D-2CB75ADB4B18";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo37";
	rename -uid "90E1D2D6-4C1F-2DF8-A04F-F58A1F16E18A";
createNode phong -n "M_DarkGrey3";
	rename -uid "373964B2-46F0-E09D-C84F-1B8E63C35A6D";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG13";
	rename -uid "A8D8F6C7-4542-5657-C01C-7C92116FEB7E";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo38";
	rename -uid "A81600AC-47DC-1506-5580-7BAE6FBF3D43";
createNode phong -n "M_LightBlueGrey3";
	rename -uid "9A6798B7-44A2-1F93-D96C-149DA108A80F";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG14";
	rename -uid "70F5FA6C-4999-61C7-CE58-8DBE38EBC8B4";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo39";
	rename -uid "AE6429FC-4249-4919-FD03-9E966643233F";
createNode phong -n "M_DarkBlueGrey3";
	rename -uid "89F3E9D5-4956-291D-E63E-6DBA32B31F29";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG15";
	rename -uid "E90B61C5-4020-A588-F294-C782869E7191";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo40";
	rename -uid "BFC8F00F-4EC4-123E-F6B2-7DB370AD4302";
createNode phong -n "M_Teal3";
	rename -uid "838494DC-467D-BF95-B64B-398530855556";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG16";
	rename -uid "674A5928-450A-5532-07CE-EDA599DBB8C8";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo41";
	rename -uid "10635FAF-4E41-7FAF-E02C-78998CCC1CAD";
createNode phong -n "Transparent3";
	rename -uid "375DE520-4497-959B-315A-E58F40521FC5";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG17";
	rename -uid "B857AECB-4D30-7801-9CE2-E0B62B7386B0";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo42";
	rename -uid "EB967620-4005-39A5-F220-2FBC97D6917F";
createNode phong -n "M_LightBlue3";
	rename -uid "F9062A97-4FE5-A9E3-7E2F-678D6F267663";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG18";
	rename -uid "8BCCC848-4F9B-84B0-31B7-D58C1344EF52";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo43";
	rename -uid "94849792-471A-2CD4-9CD1-68B025192192";
createNode phong -n "MaterialFBXASC046008";
	rename -uid "6A3A6CA4-40F5-A027-C220-78A6BDD2E282";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG19";
	rename -uid "CD617FCE-4882-F9EA-840D-D4A8DC95ECA9";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo44";
	rename -uid "1E226499-4921-521A-D58C-869B7AD1404F";
createNode phong -n "MaterialFBXASC046009";
	rename -uid "E12999B8-4A1B-2DF1-4600-C59222997684";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MiddleFloorBase_GeoSG2";
	rename -uid "04B10215-422B-BCE3-379D-62A834FAB3E4";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo45";
	rename -uid "4109E8CA-48DD-4EBD-5FF5-9AB65DC502FA";
createNode phong -n "WorldGridMaterial4";
	rename -uid "478BA9F1-48BE-B860-3F8E-EFB54E404711";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG20";
	rename -uid "8133EE35-47F2-3C1B-8567-859586D0EC14";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo46";
	rename -uid "0DB2442D-4D44-3333-81A3-1CAB36EA8108";
createNode phong -n "M_Grey4";
	rename -uid "23B6D60D-4DAA-B20E-D623-54B358A64478";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG21";
	rename -uid "50C83560-4E29-408E-329D-299DCCACCE82";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo47";
	rename -uid "1DBD11C7-4A00-1553-159E-D683CDF9868F";
createNode phong -n "M_BlueGrey4";
	rename -uid "940901C7-4F89-1E46-22CE-8B9B308D88E7";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG22";
	rename -uid "A34648A3-4D60-596B-C4A2-4B95F2977A51";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo48";
	rename -uid "7F34E047-4362-4909-CC10-5696A9DA1FFD";
createNode phong -n "M_DarkGrey4";
	rename -uid "0329A5CF-4749-FDF2-EAFC-31891F6B0EF6";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG23";
	rename -uid "4A1C261B-40F5-F307-50CE-748901493F53";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo49";
	rename -uid "DB4287C1-43E0-F892-C09C-DCA03A186F0F";
createNode phong -n "M_LightBlueGrey4";
	rename -uid "A8CE3BC2-43A0-CD43-85E5-8BA246C0FB40";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG24";
	rename -uid "2F5E13B4-4458-2FB9-9B6A-4899E3B0EDEC";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo50";
	rename -uid "3928B3A7-42A6-285B-3001-4EB95FF89A16";
createNode phong -n "M_DarkBlueGrey4";
	rename -uid "23E9C346-4E3F-0350-0F51-5EA20B2462BE";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG25";
	rename -uid "75BFA8F3-4CA2-0B48-14C4-DAA47FAC0ED6";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo51";
	rename -uid "1DFE5910-4AA7-B117-FB01-7FB8FDA97C02";
createNode phong -n "M_Teal4";
	rename -uid "8CB75622-410D-4C33-7B1A-DDB0E99D6CBD";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG26";
	rename -uid "8885367A-49C3-DAA3-FDD0-A88A88954F85";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo52";
	rename -uid "A8974602-4B30-EBDB-7FED-2E8999C24F12";
createNode phong -n "Transparent4";
	rename -uid "84041B64-43F8-C924-BA27-15977D69C316";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG27";
	rename -uid "D1192324-41F3-93EB-8A47-B08F01634D91";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo53";
	rename -uid "6556CE0F-4AD5-A483-C2CC-8784B433BF26";
createNode phong -n "M_LightBlue4";
	rename -uid "15966ECA-4938-DCB0-5615-A5BB6669D952";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG28";
	rename -uid "53A0905E-49A1-6F1E-6C56-C5B9989384F4";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo54";
	rename -uid "AB1B0568-4B2C-673B-1BF7-71A8593C1D02";
createNode phong -n "MaterialFBXASC046010";
	rename -uid "26957EB1-40BF-BF6E-F41E-5E99B0BB91C5";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG29";
	rename -uid "4BD2671D-4EF7-6E73-047D-D495583D5F1B";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo55";
	rename -uid "7FCFEEC4-4A28-6D48-E6FB-33BB0643351E";
createNode shadingEngine -n "ShellBeveled:Material_001";
	rename -uid "47BB5C98-48D4-3EB4-0CFE-05B165BEF377";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "ShellBeveled:materialInfo1";
	rename -uid "78E36132-4343-E8BF-2952-549D053CBCAD";
createNode phong -n "ShellBeveled:Material_002";
	rename -uid "8E9BD9C9-4726-700B-ED04-E3904A61CAC7";
	setAttr ".rfi" 1.4500000476837158;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".ambc" -type "float3" 1 1 1 ;
	setAttr ".cp" 227;
createNode shadingEngine -n "ShellBeveled:WorldGridMaterial";
	rename -uid "5582D831-46B4-28B4-EE93-54BF50308FB2";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "ShellBeveled:materialInfo2";
	rename -uid "A9C49F58-4485-6E45-D04C-BCB75CF181CC";
createNode phong -n "ShellBeveled:WorldGridMaterial1";
	rename -uid "0FE9129C-4913-708B-93EA-2DB05044F3A7";
	setAttr ".rfi" 1.4500000476837158;
	setAttr ".c" -type "float3" 0.21586099 0.21586099 0.21586099 ;
	setAttr ".ambc" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 1 1 1 ;
	setAttr ".cp" 182;
createNode shadingEngine -n "ShellBeveled:Material_003";
	rename -uid "4BB596F1-4743-9677-37E5-CBB7361ED8EF";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "ShellBeveled:materialInfo3";
	rename -uid "2B961755-4E4C-7204-571A-E3A5D18F48AF";
createNode phong -n "ShellBeveled:Material_004";
	rename -uid "7F49016E-4EB5-1D7A-4E2B-969D6DE34774";
	setAttr ".rfi" 1.4500000476837158;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".ambc" -type "float3" 1 1 1 ;
	setAttr ".cp" 227;
createNode shadingEngine -n "ShellBeveled1:Material_002";
	rename -uid "5F608FFF-4F30-467D-9A91-D794A87BDC6D";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "ShellBeveled1:materialInfo1";
	rename -uid "D6D7FE9D-4E11-320E-6BAC-6EBA77E664C9";
createNode phong -n "ShellBeveled1:Material_003";
	rename -uid "88245202-4C97-38FD-1098-E09FC2C0592A";
	setAttr ".rfi" 1.4500000476837158;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".ambc" -type "float3" 1 1 1 ;
	setAttr ".cp" 227;
createNode phong -n "MaterialFBXASC046011";
	rename -uid "00847D97-4501-9070-E760-8085404C8EF0";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MiddleFloorBase_GeoSG3";
	rename -uid "CCF599E3-495F-0FA1-4389-7EA5AD26DC82";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo56";
	rename -uid "90E8FC02-4FEB-03B8-6565-9F9BE23EA12B";
createNode phong -n "WorldGridMaterial5";
	rename -uid "5A3ECF9A-4919-B203-A94F-A2862708EC16";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG30";
	rename -uid "3C8ACAE4-42AA-BF7D-72FD-AFA058B15203";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo57";
	rename -uid "66E79010-4D0B-3A05-149E-5992E45C8C45";
createNode phong -n "M_Grey5";
	rename -uid "CEB31738-4B23-199D-0B9D-A28B77F8E7C3";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG31";
	rename -uid "3EFC91EE-41D1-98A4-10F0-6187D0436CD9";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo58";
	rename -uid "EC70CAAD-49A3-5C3D-B0DF-4CA40FE57D01";
createNode phong -n "M_BlueGrey5";
	rename -uid "EAAD902A-4C0F-4D80-22F0-FF87EE637893";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG32";
	rename -uid "E2C90CD1-4F4A-E7D7-9112-04B14341080B";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo59";
	rename -uid "149774BA-46FB-4062-3AB2-6AAA99C7D4CC";
createNode phong -n "M_DarkGrey5";
	rename -uid "6BC4458F-4F9E-9B99-F0A7-4BAF112D2698";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG33";
	rename -uid "0F7E57EB-4A4A-ACE1-E5C5-B79445364C7E";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo60";
	rename -uid "A95E804A-4B36-4D67-D242-96823CB6F140";
createNode phong -n "M_LightBlueGrey5";
	rename -uid "96B07D52-44FA-1E69-D5DF-66B38FDA5AC0";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG34";
	rename -uid "1698A208-4D46-96B8-1CED-15ABF844C87D";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo61";
	rename -uid "A1CCD9A6-4AD4-9D42-59A3-818598B3251F";
createNode phong -n "M_DarkBlueGrey5";
	rename -uid "61AE67EE-4BF9-57B5-3DFB-10893794EF91";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG35";
	rename -uid "045F338F-43DB-BCDF-03ED-F4ACEE2C28F4";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo62";
	rename -uid "41E9FCDA-49E0-3308-A047-BC8DEE0AF18B";
createNode phong -n "M_Teal5";
	rename -uid "047445E9-4FB4-09E3-12B2-7482E1225A92";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG36";
	rename -uid "2C4EE1FC-47DE-1FCB-3CF9-C497FEB7E69F";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo63";
	rename -uid "2131CD64-4D29-15AF-46DB-BB8D770971D3";
createNode phong -n "Transparent5";
	rename -uid "DA687DD4-4538-313C-FFD9-C28F78766F6A";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG37";
	rename -uid "E3A7ECBA-4355-82CB-2837-268BA36AB1E9";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo64";
	rename -uid "482CEA23-4B10-D1C9-8D6D-E99235508691";
createNode phong -n "M_LightBlue5";
	rename -uid "E9A72AF7-428E-2764-4184-D8894847CD37";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG38";
	rename -uid "68B473C3-4502-D10B-6AC9-A6955F4150AE";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo65";
	rename -uid "2B8E575B-4F41-8DEE-3FBD-798292988CAD";
createNode phong -n "MaterialFBXASC046012";
	rename -uid "320945E6-4190-4AC4-93F8-54ACE8820629";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG39";
	rename -uid "10658D63-4CCE-AC2C-069C-45B1C0C3FA33";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo66";
	rename -uid "E55B6753-4601-3042-140B-49A7D10BD701";
createNode phong -n "MaterialFBXASC046013";
	rename -uid "102089B6-4AB5-4920-D524-BAA5F6570F72";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MiddleFloorBase_GeoSG4";
	rename -uid "2BCB05FF-4FE9-47D7-475C-4587228D92FA";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo67";
	rename -uid "33A20CD8-49AE-B3FD-7DB5-7AA9426B7CAD";
createNode phong -n "WorldGridMaterial6";
	rename -uid "BABEFC81-4F89-70E9-1974-48B9CAC3E5A8";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG40";
	rename -uid "7A558746-4A96-1CDA-84DB-C4BDE1D794A7";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo68";
	rename -uid "0F70EB83-446D-C82E-E748-77A403203AF3";
createNode phong -n "M_Grey6";
	rename -uid "23F9AB94-475C-83EB-72D5-A3AFC3DBA701";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG41";
	rename -uid "B241422C-42F6-B487-0984-FE8E836DD183";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo69";
	rename -uid "06BE0603-43E0-47C8-AD8A-D7AFC9560FD3";
createNode phong -n "M_BlueGrey6";
	rename -uid "6F16CAB6-4B69-D903-0FDD-8DA389EDA083";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG42";
	rename -uid "5E1E2C2D-4DF9-250D-88A7-62BA6800B4F1";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo70";
	rename -uid "DBCB888B-4DD7-74B3-3F5E-D9A087178EC6";
createNode phong -n "M_DarkGrey6";
	rename -uid "3721AFFD-4DA8-A777-0C29-8084B23ABFC4";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG43";
	rename -uid "C35004A2-4665-E7AA-645C-C4A8A6F15C5A";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo71";
	rename -uid "8E7B1526-445E-AABB-B7FC-E4AF78EFE8D0";
createNode phong -n "M_LightBlueGrey6";
	rename -uid "70DC46F1-4F1B-2113-E1AC-0886EC3C2BA6";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG44";
	rename -uid "247E6D28-4B32-FEC6-63F2-DCBECD4E91EF";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo72";
	rename -uid "1957054E-4888-0F4D-9973-588EDADA815B";
createNode phong -n "M_DarkBlueGrey6";
	rename -uid "0D97DF03-469D-A5F8-389F-3A8E42BCB7E2";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG45";
	rename -uid "BAA6BB15-4A96-3011-F5F8-7E95D88204A1";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo73";
	rename -uid "145A1211-481C-B8B1-E79F-5DA3D9BA10CB";
createNode phong -n "M_Teal6";
	rename -uid "08EDA3F2-4E5F-F10C-9EE5-A993078354C6";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG46";
	rename -uid "9CA436E5-4845-7E76-51DA-0BB56C1F7A01";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo74";
	rename -uid "1A439D11-4DA2-51D2-FE5B-5C8F2B025DFE";
createNode phong -n "Transparent6";
	rename -uid "4402D7C4-40DC-F53E-8FB2-58BF885F436F";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG47";
	rename -uid "BDB336AC-4B13-DB10-C740-44AE32BE75AF";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo75";
	rename -uid "D3E3CE21-4B93-DD38-C814-E78B5135C56D";
createNode phong -n "M_LightBlue6";
	rename -uid "9017F503-40C5-4C41-0713-F8AEEB6FAF51";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG48";
	rename -uid "3D4A86C2-4CEC-F45C-15DC-19AA9EC5A3B4";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo76";
	rename -uid "7DB58047-4EF7-112D-5178-EDA168B12FBB";
createNode phong -n "MaterialFBXASC046014";
	rename -uid "296E8E2E-4115-87CF-7D6E-838BC44D8A59";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG49";
	rename -uid "E787E1BB-44FD-4E6E-0508-8B883A74EBE0";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo77";
	rename -uid "3CD951CB-452D-EFB4-1A08-5D99F1FA331D";
createNode phong -n "MaterialFBXASC046015";
	rename -uid "936BFF57-43F9-6AFF-1DD3-CD9CBA918699";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MiddleFloorBase_GeoSG5";
	rename -uid "4D7F53C8-4053-9926-18B8-1296A51C92E6";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo78";
	rename -uid "C59DA471-459A-8127-BB1A-70A7B844F704";
createNode phong -n "WorldGridMaterial7";
	rename -uid "A6B3EAC7-4443-E8A0-7865-5FAD21A65079";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG50";
	rename -uid "098F7C82-4DA9-529D-8673-3FBF82DF5A4E";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo79";
	rename -uid "02CBFA99-4F87-E8EB-BBB3-7BAA6626AEED";
createNode phong -n "M_Grey7";
	rename -uid "7611DBB7-4E76-F7EE-E98B-41B74B56A753";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG51";
	rename -uid "811D6B9F-4A70-9AF1-3F39-D495F345CC07";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo80";
	rename -uid "9151CC0F-4ABF-1BB0-8259-88BF2CEF1370";
createNode phong -n "M_BlueGrey7";
	rename -uid "4CA61655-4372-78F1-407B-4187287E8DB0";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG52";
	rename -uid "DE08591D-4132-F14E-70B2-94B33C4AE070";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo81";
	rename -uid "EA43A952-4C34-A75B-2885-06B883C93E06";
createNode phong -n "M_DarkGrey7";
	rename -uid "896E1E69-4198-00D4-91FC-F28BD053787D";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG53";
	rename -uid "7613C2EC-48D6-16F6-C841-7D8998C6F426";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo82";
	rename -uid "11D2C1D2-47E0-5153-0837-63A7C31F6FF7";
createNode phong -n "M_LightBlueGrey7";
	rename -uid "EAB9A647-4909-D9FE-856F-87A0C6EBAD91";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG54";
	rename -uid "79F45EBF-466B-9E4F-E0E5-5C91A878D233";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo83";
	rename -uid "3B1B8D49-4BF2-FC1E-5268-9EB0898D8E1B";
createNode phong -n "M_DarkBlueGrey7";
	rename -uid "3B9226C0-46F0-C714-5A03-38B204CAD1EF";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG55";
	rename -uid "8DC1E5E4-40DA-2BB9-1173-E0A05ABB02E5";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo84";
	rename -uid "46B3C5F2-4B70-5251-AABA-4AB13027CB11";
createNode phong -n "M_Teal7";
	rename -uid "66735FDB-4945-8C86-8EAA-FB964ABB6004";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG56";
	rename -uid "8CA1C1BE-4BD6-6081-AECB-1A81ED6089BB";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo85";
	rename -uid "57119C91-4D58-AFF2-B610-5F90882EFC7C";
createNode phong -n "Transparent7";
	rename -uid "8BC07B1C-4F11-B37A-C87D-4F931EC2DCF8";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG57";
	rename -uid "FA7FACCC-419B-EFD1-934D-C0A4EDFD274F";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo86";
	rename -uid "FD492334-49C3-7C2B-4DF3-0AA01FE26A73";
createNode phong -n "M_LightBlue7";
	rename -uid "A8CA360B-4FD6-6386-C63C-CB93F8BE4F1F";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG58";
	rename -uid "64E16418-442A-48C3-8552-4AB649BB6ACB";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo87";
	rename -uid "36BC0142-4F8B-D7BD-7DCC-BEB5DD3974CB";
createNode phong -n "MaterialFBXASC046016";
	rename -uid "4045CE6D-4426-98C0-E35B-87B0E6F41B56";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG59";
	rename -uid "5256B3C0-47A1-EEEC-0E65-E4BADD42D700";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo88";
	rename -uid "B5E6CE2C-4BA1-C89C-8A5D-4989E1EA2ED5";
createNode phong -n "MaterialFBXASC046017";
	rename -uid "ED549594-4183-F40B-F72D-D188A6565ECA";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "WorkSG";
	rename -uid "D888471A-4BCC-82A7-6A63-469F5E083C1D";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo89";
	rename -uid "92C5DBC0-4776-77B6-E418-978D3551A814";
createNode phong -n "MaterialFBXASC046018";
	rename -uid "2820BE4F-4E68-7BC6-5F1A-20B6998C7411";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MiddleFloorBase_GeoSG6";
	rename -uid "88F638BB-4BCD-331B-941D-78B94C105B4E";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo90";
	rename -uid "18596B3F-429E-E518-3687-F6A7C762DFE0";
createNode phong -n "WorldGridMaterial8";
	rename -uid "57B47CA5-4144-8381-E053-0EAABE93CA06";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.10793025 0.10793025 0.10793025 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0.2158605 0.2158605 0.2158605 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG60";
	rename -uid "E1B0A7A0-418A-F8E5-A492-858E3877629F";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo91";
	rename -uid "4D317EE0-4EA0-6ACB-5FEF-578EB963D763";
createNode phong -n "M_Grey8";
	rename -uid "94F70984-4722-DEC5-7D26-139326A19749";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG61";
	rename -uid "58012BAA-43C1-E4DA-A800-3EB0938F299E";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo92";
	rename -uid "D36004A3-4ACC-68DD-D606-36B3F34427FB";
createNode phong -n "M_BlueGrey8";
	rename -uid "8212B337-464F-AABB-5A4B-A48E8BB7C443";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG62";
	rename -uid "C0790A8F-4685-FED5-C4EC-4AA310EEE2DF";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo93";
	rename -uid "D8B25B6A-46F8-BD6B-616C-EC8FADA8C6C7";
createNode phong -n "M_DarkGrey8";
	rename -uid "649AE9E6-40A0-3B7C-F88C-ADB883568079";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG63";
	rename -uid "C4AFECCD-4623-259C-36A5-BCB98CA26284";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo94";
	rename -uid "C194214A-46AC-0A77-4B92-CB8A7FB115FA";
createNode phong -n "M_LightBlueGrey8";
	rename -uid "3BC8FF1E-454C-1296-EAE4-46AD4FE17DB5";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG64";
	rename -uid "523F6B09-4800-A589-1C3F-B5BD76C6641E";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo95";
	rename -uid "B6AC8E84-4B2E-5779-F6C3-889AF648EC10";
createNode phong -n "M_DarkBlueGrey8";
	rename -uid "0970638E-4945-A7F7-4DE6-FCAAB5E9F4A8";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG65";
	rename -uid "6D77364A-44BA-4C80-3416-D4B4002E5C5C";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo96";
	rename -uid "A31E9BF1-452F-B2F0-B446-0495BEF171BE";
createNode phong -n "M_Teal8";
	rename -uid "F38E3819-4F68-455D-88EF-C6AB6D968561";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG66";
	rename -uid "80F97567-4BE2-AC69-5A53-9E9049406AA5";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo97";
	rename -uid "03CEB3CA-4815-5328-B6DE-4B9314B3304C";
createNode phong -n "Transparent8";
	rename -uid "9306A0AF-40B6-5C1A-5158-DEA3367599E0";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".it" -type "float3" 1 1 1 ;
	setAttr ".sc" -type "float3" 0 0 0 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG67";
	rename -uid "691F3B38-4DFD-1280-67DF-E0B21E8AB8AD";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo98";
	rename -uid "0DA726BF-4B24-0A40-1A54-E29E9899CB6A";
createNode phong -n "M_LightBlue8";
	rename -uid "EB90E320-4231-9B40-D303-97A9AE83A255";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0.00030352699 ;
	setAttr ".sc" -type "float3" 0 0 0.0001517635 ;
	setAttr ".rfl" 1;
	setAttr ".rc" -type "float3" 0 0 0.00030352699 ;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG68";
	rename -uid "3D3FB220-4CDB-4922-FAB6-699B09B9EC1B";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo99";
	rename -uid "E60B1AAA-40CA-B35A-0F1C-548B9115328D";
createNode phong -n "MaterialFBXASC046019";
	rename -uid "BF319EA2-43E0-E15D-EE72-139415B026A0";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "SB_MainStairCase_Stairs_GeoSG69";
	rename -uid "4D0533F6-4B04-FD2B-5B9D-D288AD20CD0E";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo100";
	rename -uid "0E6B6F56-4C3D-552E-6946-B5A766994905";
createNode lambert -n "lambert2";
	rename -uid "3438BA2D-4242-8BFC-4434-F6AB8139D3C1";
createNode shadingEngine -n "lambert2SG";
	rename -uid "788B2597-4731-4BEA-8A4F-D8A098C2F556";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo101";
	rename -uid "F4A7893F-4414-CFD2-784E-859DD4EF1DDE";
createNode phong -n "MaterialFBXASC046020";
	rename -uid "432EAB4D-498D-1501-40C5-FD83276E0725";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 0;
	setAttr ".rc" -type "float3" 0.80000001 0.80000001 0.80000001 ;
	setAttr ".cp" 25;
createNode shadingEngine -n "f2_floor_2SG";
	rename -uid "8CF52FAD-4126-5FFE-B4EE-F98BC49B13E2";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo102";
	rename -uid "0E44DAF0-43E0-264E-F662-2E87D84EA1FE";
createNode displayLayer -n "layer1";
	rename -uid "88879320-4F64-1831-E733-88B8CDBC9015";
	setAttr ".dt" 1;
	setAttr ".do" 1;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "91B43643-4CEF-7FD3-F3A0-5C887FB36EBA";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".esi" 2;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "I:/Cavalry/Maya Project Files//Env/Exports/SecurityBuilding";
	setAttr ".exf" -type "string" "SecurityBuilding_01_SM_Low";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "D25423AD-4AB4-CEE7-DC4C-94A4B6C7CA0A";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "06299779-47E7-CA75-028D-67848EBFB841";
	setAttr ".pn" -type "string" "TE Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 3;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode polyLayoutUV -n "polyLayoutUV1";
	rename -uid "E9F9FBBB-4E5B-B01B-EC09-C68C16E8C2FB";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:9]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV2";
	rename -uid "405D40B1-4545-1F5D-4E15-9FA88ACA7504";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:11]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV3";
	rename -uid "A617FBDE-49BC-0EC5-EE75-77909D948132";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:19]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV4";
	rename -uid "BA7BA5BB-4328-4B42-2F1F-52B4270F2B78";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:51]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV5";
	rename -uid "6508AE55-4DAD-BBA2-7564-A7A8A113378C";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:69]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV6";
	rename -uid "C140AEFB-4F15-4B55-8B18-67BFDE73226A";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:52]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV7";
	rename -uid "D6400F72-4DA5-D583-AF18-04972179C041";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:30]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV8";
	rename -uid "C7723319-4914-6209-5051-63A027D73BD3";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:73]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV9";
	rename -uid "EBC7B523-4AC0-3CFE-84A0-6ABA54C5EFF1";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:42]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV10";
	rename -uid "65C42E27-44F0-2213-3948-B0A40FF1AB44";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:11]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV11";
	rename -uid "4F8BF482-404E-0B48-117A-F3BFA1013665";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:65]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV12";
	rename -uid "263FA799-45AD-6ADD-B8A9-429B9CDC1EFF";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:116]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV13";
	rename -uid "240EBFAD-4D41-480D-47AF-01B10AEB38FE";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:81]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV14";
	rename -uid "C621E0AB-4A64-CF7A-519F-AE9D0109059E";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:31]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyLayoutUV -n "polyLayoutUV15";
	rename -uid "DDB23710-4B3F-777D-792B-6199300CE002";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "f[0:1057]";
	setAttr ".fr" no;
	setAttr ".l" 0;
	setAttr ".ps" 0.20000000298023224;
	setAttr ".sc" 0;
	setAttr ".dl" yes;
	setAttr ".rbf" 3;
	setAttr ".lm" 1;
createNode polyTweakUV -n "polyTweakUV1";
	rename -uid "67348DAA-4EB7-1012-2097-138F51A77F79";
	setAttr ".uopa" yes;
	setAttr -s 24 ".uvtk[0:23]" -type "float2" 0.36404097 -0.32922596 0.52610576
		 -0.32923883 0.52613151 -0.0046190992 0.36406678 -0.0046062246 0.51069885 -0.15114771
		 0.48058963 0.0023066029 0.54151255 -0.50733006 0.5261057 -0.32923895 0.16938466 -0.36009932
		 0.18479151 -0.53819042 0.88282686 -0.29837856 0.89823377 -0.4764697 0.52474999 -0.6615181
		 0.86742002 -0.12028733 0.52608001 -0.65385866 0.68814468 -0.65387154 0.68817043 -0.32925171
		 0.68819624 -0.0046319589 0.52479714 -0.32960883 0.52484423 0.0023003146 0.48054248
		 -0.32960257 0.15397775 -0.18200812 0.48049539 -0.66151184 0.36401522 -0.65384579;
createNode polyTweakUV -n "polyTweakUV2";
	rename -uid "8340BDE9-408D-CEE5-10B7-D8BB917F92CE";
	setAttr ".uopa" yes;
	setAttr -s 28 ".uvtk[0:27]" -type "float2" 0.39634281 -0.32923198 0.52610576
		 -0.32923883 0.49114835 -0.32442379 0.39635652 -0.06931366 0.51071763 -0.18234496
		 0.21648538 -0.21316779 0.23187357 -0.36006173 0.52610576 -0.32923892 0.80494988 -0.15152209
		 0.82033807 -0.29841602 -0.39714575 -0.32441789 0.52609205 -0.58915728 0.65585494
		 -0.58916414 0.65586865 -0.32924569 0.65588236 -0.069327295 0.66859269 -0.27703494
		 0.54149389 -0.47613281 0.83572614 -0.44531 0.49114865 -0.27703381 0.24726164 -0.50695574
		 0.52611941 -0.069320478 0.31370419 -0.3244226 -0.041720748 -0.32442027 -0.04172051
		 -0.27703023 0.31370449 -0.27703261 0.66859233 -0.32442498 -0.39714539 -0.27702788
		 0.3963291 -0.58915049;
createNode polyTweakUV -n "polyTweakUV3";
	rename -uid "65EAC1FE-4203-EA33-8821-C4960AEFD356";
	setAttr ".uopa" yes;
	setAttr -s 39 ".uvtk[0:38]" -type "float2" 0.57185155 -0.19274285 0.57186198
		 -0.33006221 0.67645884 -0.33005422 0.67644835 -0.19273488 0.57187259 -0.46959057
		 0.55359071 -0.18495896 0.55360669 -0.29821643 0.6764695 -0.46958262 0.18387461 -0.33009174
		 0.25807136 -0.33008611 0.25806081 -0.19276676 0.18386412 -0.1927724 -0.22122201 -0.24820788
		 -0.22125837 -0.05437535 0.52147853 -0.18496355 0.52149457 -0.29822093 -0.1792922
		 -0.44515079 -0.22118506 -0.44515857 0.25808197 -0.46961451 0.36265773 -0.19275877
		 0.36266816 -0.33007815 0.46726507 -0.3300702 0.46725464 -0.1927508 0.36267883 -0.46960652
		 0.46727574 -0.46959859 0.55355871 0.041555882 0.46727672 -0.48212111 0.52146256 -0.071706086
		 0.52144659 0.041551352 0.25808293 -0.48213705 0.52143061 0.15480879 0.36267978 -0.4821291
		 0.55357468 -0.071701556 0.57187355 -0.48211318 0.6764704 -0.48210514 -0.17932919
		 -0.24820006 -0.17936555 -0.054367468 0.18388522 -0.4696202 0.55354267 0.15481329;
createNode polyTweakUV -n "polyTweakUV4";
	rename -uid "644897C9-4754-48BF-9A7B-A1A400000544";
	setAttr ".uopa" yes;
	setAttr -s 80 ".uvtk[0:79]" -type "float2" 0.39065629 -0.031577051 0.4499352
		 0.095816165 0.60631305 0.095842868 0.5503993 -0.031576455 0.55039847 0.21331424 0.46435475
		 -0.075038075 0.44993538 0.095816284 0.39065549 0.2133137 0.435516 0.2666705 0.23091251
		 0.21331316 0.23091334 -0.031577647 0.29355747 0.095789343 0.29359514 -0.12455434
		 0.4499729 -0.12452757 0.60635078 -0.12450087 0.76269096 0.095869571 0.76272863 -0.12447411
		 0.76265329 0.31621349 0.71014154 0.2133148 0.47877416 -0.24589247 0.42109662 0.4375248
		 0.18035471 0.41720721 0.07117033 -0.031578183 0.13717961 0.095762581 0.13721728 -0.1245811
		 0.71951586 -0.22557485 0.70509648 -0.054720461 0.69067705 0.1161339 0.67625773 0.28698805
		 0.66183829 0.45784241 0.071170211 -0.0040860176 0.07117027 -0.017426431 0.23091328
		 -0.017425895 0.23091328 -0.0040854812 0.39065623 -0.017425239 0.39065617 -0.0040849447
		 0.071169972 0.065487266 0.071170032 0.052146912 0.23091304 0.052147448 0.23091304
		 0.065487802 0.39065602 0.052148044 0.39065599 0.065488338 0.71014166 0.18582273 0.7101416
		 0.19916293 0.55039859 0.19916239 0.55039859 0.18582216 0.39065549 0.19916186 0.39065552
		 0.18582156 0.71014184 0.11624944 0.71014184 0.12958974 0.55039883 0.1295892 0.55039883
		 0.11624891 0.39065576 0.12958866 0.39065579 0.11624837 0.23091257 0.19916132 0.23091263
		 0.18582103 0.071169496 0.19916075 0.071169555 0.18582049 0.2309128 0.12958804 0.23091286
		 0.11624783 0.071169794 0.1295875 0.071169853 0.11624727 0.55039907 0.052148581 0.55039907
		 0.065488875 0.71014208 0.052149117 0.71014208 0.065489471 0.5503993 -0.017424703
		 0.55039924 -0.0040844083 0.71014237 -0.017424166 0.71014225 -0.0040838718 0.29351974
		 0.31613323 0.44989756 0.31616002 0.19477409 0.24635282 0.071169436 0.2133126 0.22361284
		 -0.09535569 0.20919347 0.07549867 0.60627544 0.31618676 0.71014237 -0.031575918 0.23803228
		 -0.26620996 0.13714188 0.31610647;
createNode polyTweakUV -n "polyTweakUV5";
	rename -uid "3B0C1D15-4FE2-F8EE-7B9F-F3A5A24EF123";
	setAttr ".uopa" yes;
	setAttr -s 116 ".uvtk[0:115]" -type "float2" 0.39268321 0.018079281 0.45560342
		 0.018089771 0.4555881 0.1096454 0.39266789 0.10963491 0.50165313 -0.069847703 0.43829536
		 -0.069850922 0.43830007 -0.16204327 0.50165778 -0.16204005 0.53436822 0.018102914
		 0.61313295 0.018116087 0.61311769 0.10967171 0.53435296 0.10965857 0.35898286 -0.069855034
		 0.27967042 -0.069859028 0.27967513 -0.16205132 0.35898757 -0.16204739 0.39269853
		 -0.073476374 0.45561874 -0.073465884 0.53438348 -0.073452711 0.61314833 -0.073439598
		 0.455634 -0.16502154 0.39271379 -0.16503203 0.53439879 -0.16500837 0.61316359 -0.16499519
		 0.61310244 0.20122737 0.53433764 0.20121422 0.45557284 0.20120105 0.50994694 -0.63150269
		 0.4495492 -0.63150167 0.43828136 0.2067259 0.43828601 0.11453357 0.50164378 0.11453679
		 0.50163913 0.20672911 0.35896879 0.20672187 0.3589735 0.11452955 0.27965635 0.20671785
		 0.279661 0.1145255 0.27966571 0.022333235 0.35897815 0.022337288 0.43829072 0.022341341
		 0.50164849 0.0223445 0.52417576 -0.63150293 -0.34107015 0.065800965 0.52748632 -0.52470112
		 0.52417755 -0.52470112 0.53433543 0.21451253 -0.34106594 0.16043305 0.61310023 0.2145257
		 -0.34106186 0.2523275 0.45557243 0.20354754 0.51325756 -0.52470088 0.50994879 -0.52470088
		 0.51325941 -0.41789907 0.50995064 -0.41789904 0.52748817 -0.41789934 0.52417934 -0.41789928
		 0.51326299 -0.20429547 0.47606999 0.046934873 0.50995243 -0.3110972 0.5132612 -0.31109726
		 0.41774899 0.049893409 0.41774914 0.046932548 0.36152172 0.049891204 0.3615219 0.046930343
		 0.47606942 0.062628418 0.47397584 0.059667438 0.52418125 -0.31109744 0.52749002 -0.3110975
		 0.41774851 0.062626123 0.4177486 0.059665233 0.3615213 0.062623918 0.36152136 0.059663028
		 0.44955468 -0.31109616 0.53011703 0.046936959 0.58788776 -0.31109855 0.58788961 -0.20195708
		 0.47607052 0.034084439 0.53011751 0.034086585 0.53011584 0.075480938 0.47606888 0.075478822
		 0.41774797 0.075476527 0.36152071 0.075474322 0.41774961 0.034082115 0.36152238 0.034079909
		 0.44955105 -0.52469981 0.44955283 -0.417898 0.58788413 -0.52470219 0.58788592 -0.41790038
		 -0.33833569 -0.0048701763 0.50163841 0.22012042 -0.42753029 -0.0048661828 -0.42752761
		 0.068458438 0.43828064 0.22011666 -0.42752293 0.16043693 0.35896814 0.22011317 -0.42751878
		 0.25233132 -0.43138951 0.2523315 0.53011644 0.062630534 0.52749193 -0.20195605 0.52418309
		 -0.20429565 0.47397622 0.049895614 0.50995433 -0.20195574 0.44955659 -0.20195469
		 -0.33719844 0.068538427 0.51325572 -0.63150275 0.58788228 -0.631504 0.52748448 -0.63384265
		 0.45322639 0.20120066 0.39265263 0.20119053 0.27965569 0.22010916 -0.43139362 0.16043708
		 -0.43139827 0.0685426 -0.43140095 -0.0048660636 -0.33719432 0.16043293 -0.3371903
		 0.25232729 0.45557064 0.21449937;
createNode polyTweakUV -n "polyTweakUV6";
	rename -uid "9EC92F70-4329-2AFC-1797-3C9F6903BBB0";
	setAttr ".uopa" yes;
	setAttr -s 85 ".uvtk[0:84]" -type "float2" 0.3120361 0.044718325 0.31510419
		 0.036042631 0.52583104 0.036058724 -0.14806283 0.073737562 -0.28362384 0.081050336
		 -0.28621322 0.073724329 0.31509483 0.15664643 0.31509548 0.1479705 0.5258224 0.14798662
		 0.52582169 0.15666258 0.67698264 0.14799824 0.67698199 0.15667415 -0.14287969 0.042234898
		 0.51969332 0.073367596 -0.28621089 0.049546957 -0.28362015 0.042221427 0.31510067
		 0.082027912 0.31203389 0.073351622 0.52582455 0.11935329 0.52582526 0.1106773 0.6769855
		 0.11068892 0.67698485 0.11936486 0.31509775 0.11933714 0.31509835 0.11066115 0.082033992
		 -0.44651869 -0.70584512 0.081009984 0.089299023 -0.27519959 0.082034588 -0.27263126
		 0.050794423 -0.45165539 -0.70066196 0.04950738 0.058059454 -0.27263117 0.050795019
		 -0.27519947 0.67697978 0.18530747 -0.14286751 -0.085401416 -0.283636 0.20868665 -0.2836079
		 -0.085414886 -0.70585722 0.2086463 0.11840975 -0.57822388 0.11841023 -0.45165563
		 0.050794005 -0.57822371 0.021682501 -0.45165527 0.021682024 -0.57822359 0.11841083
		 -0.27519971 0.021683156 -0.27519938 -0.42436427 0.081036925 -0.42437646 0.20867324
		 -0.56511682 0.20865977 -0.56510472 0.081023455 -0.42436358 0.073711157 -0.56251395
		 0.073697865 -0.42436126 0.049533784 -0.56251156 0.049520552 -0.42436054 0.042207956
		 -0.56510097 0.042194486 -0.42434835 -0.085428357 -0.56508875 -0.085441828 0.11841148
		 -0.098743878 0.089299619 -0.098743796 0.082035184 -0.098743774 0.05806011 -0.098743662
		 0.050795674 -0.09874364 0.021683753 -0.098743528 0.10437727 0.036026418 0.10436809
		 0.15663028 0.10436875 0.14795434 0.10437095 0.11932096 0.10437167 0.11064509 0.10437381
		 0.0820117 0.10437447 0.073335767 0.10437667 0.044702411 -0.70584124 0.042181075 -0.70582914
		 -0.085455239 0.08929795 -0.57822376 0.089298427 -0.45165548 -0.70066428 0.073684692
		 0.058058858 -0.44651866 0.52582747 0.082044005 0.67698771 0.082055569 -0.14289558
		 0.20870006 -0.14288338 0.081063807 0.51969552 0.04473424 -0.14806052 0.04956013 0.3150928
		 0.18527979 0.52581954 0.18529594 0.10436594 0.1852636;
createNode polyTweakUV -n "polyTweakUV7";
	rename -uid "EFFD408D-4D24-70D7-8770-7089207573DF";
	setAttr ".uopa" yes;
	setAttr -s 51 ".uvtk[0:50]" -type "float2" 0.53974903 -0.33642289 0.52770042
		 -0.34068263 0.52769661 -0.63332307 0.35467756 0.10203409 0.33972228 -0.16616347 0.354693
		 -0.17145532 0.48793668 -0.34068188 0.47588822 -0.34068176 0.47588438 -0.63332242
		 0.48793283 -0.6333226 0.47588158 -0.84324169 0.48793003 -0.84324187 0.419054 0.11262327
		 0.57950884 -0.62480426 0.40409958 -0.17145249 0.41906968 -0.16615897 0.59156108 -0.34068346
		 0.5795126 -0.3364234 0.43612069 -0.63332188 0.42407221 -0.6333217 0.4240694 -0.84324104
		 0.43611789 -0.84324121 0.43612456 -0.3406812 0.42407608 -0.34068102 0.52769375 -0.84324241
		 0.6798802 0.112638 0.078896046 -0.16617805 0.67989594 -0.16614437 0.078911722 -0.44496024
		 0.33973801 -0.4449456 0.35470825 -0.4449448 0.40411496 -0.444942 0.41908526 -0.44494119
		 0.67991149 -0.44492644 0.52770424 -0.048041902 0.48794061 -0.048041381 0.4758921
		 -0.048041213 0.43612838 -0.048040707 0.42407995 -0.048040546 0.38431621 -0.048040017
		 0.57951647 -0.048042603 0.53975284 -0.048042055 0.38431239 -0.34068069 0.59156495
		 -0.048042763 0.59155726 -0.63332391 0.38430852 -0.63332123 0.38430572 -0.8432405
		 0.078880429 0.11260423 0.33970666 0.11261886 0.53974515 -0.62480372 0.40408424 0.10203686;
createNode polyTweakUV -n "polyTweakUV8";
	rename -uid "D9CEE137-4406-0577-9A26-E1BCF85BE3B5";
	setAttr ".uopa" yes;
	setAttr -s 117 ".uvtk[0:116]" -type "float2" 0.0016978979 -0.20020379
		 0.0016961694 -0.2852231 0.067108393 -0.28522438 0.067110181 -0.20020513 0.12699881
		 -0.20020634 0.12699705 -0.28522563 0.18688571 -0.28522685 0.18688741 -0.20020756
		 0.18688142 -0.49867508 0.12699282 -0.49867383 0.12699127 -0.57280117 0.1868799 -0.57280242
		 0.0016944408 -0.37024236 0.53736693 0.25267863 0.067105651 -0.42454535 0.067106664
		 -0.37024367 0.18688405 -0.37024611 0.12699533 -0.37024489 0.12699425 -0.42454657
		 0.18688291 -0.42454779 0.45002446 -0.37719479 0.45002922 -0.40369421 0.48006755 -0.40368885
		 0.48006275 -0.3771894 0.45003572 -0.43986863 0.48007399 -0.43986326 0.24198526 0.0041550398
		 0.5285024 0.18593639 0.53740788 0.034672916 0.53739369 0.11030549 0.18346125 0.055787265
		 0.12494278 0.055780947 0.30549842 0.0041618943 0.30549282 0.055800438 0.12493765
		 0.10305893 0.18345612 0.10306525 0.183451 0.1503433 0.12493259 0.15033695 0.24197459
		 0.10307157 0.30548775 0.10307842 0.30548269 0.15035647 0.24196953 0.15034962 0.36229259
		 0.004167974 0.36228698 0.055806577 0.36228192 0.10308456 0.36227673 0.15036258 0.36227304
		 0.18476766 0.30547893 0.18476155 0.30546319 0.33053797 0.3622573 0.33054411 0.36225212
		 0.37913626 0.30545795 0.37913015 0.21518815 0.33052826 0.21518296 0.37912041 0.17004544
		 0.37911549 0.17005068 0.33052337 -0.063716054 -0.28522176 -0.063714325 -0.20020245
		 -0.063717842 -0.37024105 -0.063718855 -0.4245427 0.52847725 0.31941754 0.30550396
		 -0.047476649 0.36229813 -0.04747057 0.38994801 -0.37720558 0.38995272 -0.40370497
		 0.41999102 -0.40369964 0.41998625 -0.37720016 0.38995916 -0.43987939 0.41999751 -0.43987402
		 0.35990971 -0.37721092 0.35991448 -0.4037104 0.35992098 -0.43988478 0.35992748 -0.47605923
		 0.38996565 -0.4760538 0.42000398 -0.47604847 0.45004225 -0.47604305 0.48008046 -0.47603771
		 0.21519971 0.22362557 0.21519339 0.28193608 0.17005587 0.28193125 0.17006218 0.22362065
		 0.30547476 0.22363532 0.36226887 0.2236414 0.36226255 0.28195196 0.30546844 0.28194588
		 0.41908669 0.0041741729 0.4190923 -0.047464371 0.41908109 0.055812657 0.41907603
		 0.1030907 0.4190709 0.15036872 0.41906714 0.18477383 0.41906303 0.22364756 0.41905671
		 0.2819581 0.41905141 0.33055025 0.41904616 0.3791424 0.17006642 0.18474692 0.21520388
		 0.18475184 0.26034141 0.1847567 0.26033723 0.22363043 0.26033098 0.281941 0.26032567
		 0.33053309 0.26032048 0.3791253 0.12490791 0.37911063 0.12491316 0.33051845 0.1249184
		 0.28192633 0.12492472 0.2236158 0.12492889 0.18474203 0.067104101 -0.49867269 0.067102611
		 -0.57279998 0.001693368 -0.42454404 0.53737944 0.185938 0.53735441 0.31941921 0.52851653
		 0.11030382 0.52853078 0.034671247 0.52848983 0.25267693 0.24197972 0.055793524 0.24199086
		 -0.047483504;
createNode polyTweakUV -n "polyTweakUV9";
	rename -uid "8C4A5F17-434E-EEC1-E926-A085BE3EE0DF";
	setAttr ".uopa" yes;
	setAttr -s 83 ".uvtk[0:82]" -type "float2" -0.35444552 0.03218475 -0.27634513
		 0.032197356 -0.27635837 0.11443299 -0.35445875 0.11442044 -0.039417565 -0.033618242
		 0.44343758 -0.19679934 0.0094462633 -0.02546525 0.38129002 -0.23782763 0.31639695
		 -0.1600216 0.31640995 -0.23783845 -0.43917954 0.03217116 -0.43919277 0.11440679 0.38126302
		 -0.075584382 0.31638288 -0.07559517 0.4434393 -0.12948883 0.050199628 -0.025463283
		 0.53099954 -0.19680154 0.53100121 -0.12949103 0.44616321 -0.075573593 0.53100336
		 -0.045345962 0.44344142 -0.045343727 0.52730918 -0.1599865 0.52729511 -0.075560063
		 0.36273247 -0.12948683 0.099063843 -0.025460958 0.36273462 -0.0453417 0.52732211
		 -0.23780331 -0.43916634 -0.050064564 -0.35443228 -0.050050914 -0.2763319 -0.050038338
		 -0.35441899 -0.13228661 -0.43915311 -0.1323002 -0.27631867 -0.13227397 -0.27637163
		 0.19666865 -0.35447198 0.19665608 -0.43920606 0.19664246 0.68957311 -0.1599595 0.60844111
		 -0.159973 0.60845411 -0.23778978 0.68958604 -0.23777631 0.60842705 -0.075546563 0.68955898
		 -0.075533062 0.44344354 0.038801372 0.53100544 0.038799167 0.53100753 0.12294427
		 0.44344565 0.12294646 0.3627367 0.038803399 0.36273879 0.12294848 0.13005751 -0.3263554
		 0.13006783 -0.24610792 0.045571446 -0.24609703 0.045561016 -0.32634455 0.13004625
		 -0.41341895 0.04554981 -0.41340804 0.21455401 -0.32636628 0.21456432 -0.24611881
		 0.21454281 -0.41342986 -0.038925052 -0.24608615 -0.038935423 -0.32633364 -0.038946629
		 -0.41339716 -0.35447347 0.20603117 0.25513577 -0.1600318 0.25512165 -0.075605392
		 -0.43920755 0.20601752 -0.27637312 0.20604375 -0.27637392 0.21120879 0.44343591 -0.26408896
		 0.36272907 -0.26408693 0.29903919 -0.4134407 0.29906076 -0.24612966 0.29905039 -0.32637718
		 0.53099781 -0.26409119 0.44617724 -0.16 0.44619021 -0.23781681 0.050200015 -0.03361395
		 0.099064231 -0.033611625 0.38127708 -0.16001081 0.0094466507 -0.033615917 -0.039417982
		 -0.025467575 0.36273074 -0.19679734 0.25514871 -0.23784861 -0.35447428 0.21119624
		 -0.43920839 0.21118259;
createNode polyTweakUV -n "polyTweakUV10";
	rename -uid "4491BDF1-46A4-D078-641B-C0AA848FDF8E";
	setAttr ".uopa" yes;
	setAttr -s 25 ".uvtk[0:24]" -type "float2" 0.57929653 -0.1339798 0.57929194
		 -0.21043101 0.70498455 -0.21043861 0.70498919 -0.13398738 0.27207899 -0.28176352
		 0.44999748 -0.28178516 -0.083758056 -0.28172022 0.32791126 -0.13396458 0.094157457
		 -0.30670595 0.094160497 -0.28174186 0.32790661 -0.21041587 0.45359927 -0.21042344
		 -0.26167959 -0.30666262 -0.26167655 -0.28169852 0.20221394 -0.21040824 0.20220935
		 -0.28685948 0.32790196 -0.28686711 0.45359462 -0.28687471 0.57928729 -0.28688225
		 0.7049799 -0.28688985 -0.083761036 -0.30668429 0.45360392 -0.13397221 0.27207592
		 -0.30672762 0.44999444 -0.30674928 0.20221859 -0.13395701;
createNode polyTweakUV -n "polyTweakUV11";
	rename -uid "7D49BF99-4587-FB0C-BB5A-D6B664DE659A";
	setAttr ".uopa" yes;
	setAttr -s 102 ".uvtk[0:101]" -type "float2" 0.034393132 0.38009077 -0.023350269
		 0.3801012 -0.023359597 0.32847637 0.034383774 0.32846588 0.034375221 0.28120035 -0.02336815
		 0.28121084 -0.023376733 0.23394531 0.034366667 0.23393488 -0.20119095 0.23397756
		 -0.20118237 0.28124309 -0.25968537 0.28125364 -0.25969389 0.23398817 -0.081093639
		 0.38011166 0.64135647 0.13557667 -0.14267084 0.32849795 -0.081102997 0.3284868 -0.081120133
		 0.2339558 -0.08111155 0.28122127 -0.14267939 0.28123242 -0.14268795 0.23396695 -0.023382962
		 0.19954938 0.034360439 0.19953889 0.034350902 0.14708501 -0.023392469 0.14709544
		 -0.023401976 0.094641566 0.034341425 0.094631135 -0.081145346 0.094652057 -0.081135839
		 0.14710587 -0.1257793 0.14711398 -0.12578881 0.094660163 -0.18165456 0.22267872 0.54798168
		 0.17940897 0.32294649 0.23643622 0.43341225 0.2014451 -0.22914112 0.16885829 -0.2291376
		 0.11504096 -0.18165724 0.2633971 -0.22914732 0.263394 -0.45216748 0.11502635 -0.45217103
		 0.16884369 -0.52651429 0.16883886 -0.52651083 0.11502147 -0.45217454 0.22266096 -0.45217723
		 0.2633794 -0.52652049 0.26337451 -0.52651781 0.22265613 -0.12576979 0.19956791 -0.081126332
		 0.19955981 -0.21505666 0.19958407 -0.21506616 0.14713013 -0.17042273 0.14712209 -0.17041326
		 0.19957602 -0.17043224 0.094668269 -0.21507564 0.094676316 -0.2597096 0.14713824
		 -0.25970009 0.19959217 -0.25971907 0.094684422 -0.023340911 0.43172607 0.03440249
		 0.43171564 -0.081084281 0.43173656 -0.14265209 0.4317477 0.74293852 0.11765438 -0.13416713
		 0.2634002 -0.30348089 0.11503607 -0.30348441 0.1688534 -0.37782776 0.16884857 -0.37782422
		 0.11503124 -0.37783122 0.22266585 -0.30348793 0.22267067 -0.30349058 0.26338911 -0.3778339
		 0.26338428 -0.13417248 0.34483707 -0.18166256 0.34483397 -0.18165989 0.30411553 -0.13416983
		 0.30411863 -0.22914997 0.30411243 -0.22915262 0.34483081 -0.30349326 0.30410755 -0.30349591
		 0.34482598 -0.37783659 0.30410266 -0.37783927 0.3448211 -0.45217985 0.30409783 -0.45218253
		 0.34481627 -0.52652311 0.30409294 -0.52652574 0.34481138 -0.18166521 0.38555241 -0.13417515
		 0.38555551 -0.2291553 0.38554925 -0.3034986 0.38554439 -0.37784189 0.38553953 -0.45218518
		 0.3855347 -0.52652848 0.38552985 0.43751585 0.21440014 0.32705015 0.24939126 0.64546013
		 0.14853171 -0.22914465 0.22267556 -0.14266148 0.38012281 0.54387796 0.16645393 -0.13416448
		 0.22268176 0.73883486 0.10469931 -0.20117381 0.32850856 -0.25967678 0.32851917;
createNode polyTweakUV -n "polyTweakUV12";
	rename -uid "3233F93B-459A-13EC-FDD4-9AA3DD523BE1";
	setAttr ".uopa" yes;
	setAttr -s 187 ".uvtk[0:186]" -type "float2" 0.5565716 -0.2575511 -0.24201299
		 -0.23632832 0.52649826 -0.07358402 0.55657321 -0.22845942 -0.24200891 -0.1951659
		 0.2246348 -0.152813 0.49572524 -0.22845605 0.49572369 -0.25754774 -0.18473861 -0.19517158
		 0.095969558 -0.15279335 -0.21337783 -0.23633115 -0.18474269 -0.236334 0.55656946
		 -0.29633841 0.49572152 -0.29633504 0.49571934 -0.33512235 0.55656731 -0.33512568
		 0.60481471 -0.25755376 0.52652484 0.066050112 0.6048125 -0.29634106 0.60481042 -0.33512837
		 -0.21338138 -0.27194712 -0.18474622 -0.27195001 0.6607486 -0.29634416 0.6607464 -0.33513153
		 -0.21338548 -0.31324244 -0.18475033 -0.31324533 0.52653486 0.11857742 0.60481632
		 -0.22846211 0.60481793 -0.1993705 0.52654481 0.17110473 0.66075236 -0.22846524 0.66075397
		 -0.19937357 -0.26349783 -0.31323752 -0.28497508 -0.3132354 0.42957902 -0.33511862
		 0.42958122 -0.29633135 0.36853284 -0.29632789 0.36853075 -0.33511522 0.42250973 -0.0778943
		 0.46847075 -0.077888042 0.46846092 -0.0055488944 0.4224999 -0.0055551529 0.51443172
		 -0.077881813 0.54890382 -0.077877134 0.54889399 -0.0055379868 0.51442182 -0.0055426359
		 0.42958331 -0.25754404 0.42958492 -0.22845237 0.36853659 -0.22844899 0.36853504 -0.25754064
		 0.52151662 -0.075743824 0.44676051 -0.075745732 0.44676372 -0.19829139 0.52151972
		 -0.19828942 0.022392511 -0.51434922 0.095914245 -0.51436043 0.095932722 -0.39383811
		 0.022410929 -0.39382684 0.37200454 -0.075747669 0.31593531 -0.075749099 0.31593841
		 -0.1982947 0.37200764 -0.19829333 0.16943598 -0.51437175 0.22457951 -0.51438022 0.22459796
		 -0.39385778 0.1694544 -0.3938494 0.30748457 -0.29632452 0.30748236 -0.33511186 0.42251956
		 -0.15023348 0.46848059 -0.15022725 0.51444161 -0.15022096 0.54891372 -0.15021628
		 0.30748832 -0.22844559 0.30748671 -0.25753722 0.31592906 0.16934228 0.37199828 0.16934374
		 0.44675425 0.16934568 0.5215103 0.16934758 0.24643624 -0.29632112 0.24643409 -0.33510846
		 0.46849042 -0.22256634 0.42252946 -0.22257262 0.54892355 -0.22255543 0.51445144 -0.22256011
		 0.24643999 -0.22844221 0.24643838 -0.25753385 -0.24202064 -0.31323963 0.66075069
		 -0.25755689 0.58339572 -0.22255072 0.58338583 -0.15021157 0.58337599 -0.077872485
		 0.58336616 -0.0055333376 0.58335626 0.06680578 0.25986916 -0.19829616 0.259866 -0.07575056
		 0.27974147 -0.39386624 0.27972299 -0.51438856 0.27977827 -0.15282145 -0.28496745
		 -0.23632404 0.54450154 -0.12611479 0.49572682 -0.19936439 0.42958653 -0.19936073
		 0.3685382 -0.19935733 0.30748993 -0.19935393 0.2464416 -0.19935054 0.5215134 0.046801865
		 0.44675741 0.046799958 0.37200138 0.04679805 0.31593215 0.04679659 0.2598629 0.04679516
		 0.27975991 -0.27334386 0.22461635 -0.27333537 0.16947287 -0.27332699 0.09595114 -0.2733157
		 0.022429347 -0.27330449 0.095895827 -0.63488281 0.16941756 -0.63489413 0.22456107
		 -0.63490248 0.27970457 -0.63491106 0.45604628 0.15221721 0.25987226 -0.32084191 0.49878931
		 0.15221202 0.55577785 0.15220499 0.61276639 0.15219802 0.022374034 -0.6348716 0.022367418
		 -0.67835641 0.61275208 0.035762787 0.5557636 0.035769761 0.095889151 -0.67836761
		 0.49877501 0.035776794 0.16941094 -0.67837894 0.45603192 0.035782099 0.22455442 -0.67838728
		 0.41328877 0.035787284 0.41328847 0.033278763 0.61276197 0.11654103 0.61276233 0.11904961
		 0.55577379 0.11905658 0.5557735 0.11654806 0.4987852 0.11906362 0.4987849 0.11655509
		 0.6127578 0.082100272 0.6127581 0.084608793 0.55576956 0.084615767 0.55576921 0.082107246
		 0.49878097 0.0846228 0.49878067 0.08211422 0.45604211 0.11906886 0.45604175 0.11656034
		 0.41329896 0.11907411 0.41329867 0.11656553 0.45603782 0.084628046 0.45603758 0.082119524
		 0.41329473 0.084633291 0.41329443 0.08212477 0.31594151 -0.32084045 0.41330314 0.15222245
		 0.44676682 -0.32083711 0.37201086 -0.32083908 0.52152282 -0.32083517 0.54888415 0.066801161
		 0.25985974 0.16934085 0.46845102 0.066790253 0.51441205 0.066796511 0.42249006 0.066784024
		 -0.26348615 -0.19516374 -0.28496334 -0.19516158 -0.21337377 -0.19516873 0.16949129
		 -0.15280458 0.022447765 -0.1527821 0.27969792 -0.67839575 0.45603162 0.033273518
		 0.49877477 0.033268213 0.55576324 0.03326124 0.61275184 0.033254206 0.54454809 0.11857396
		 0.54455811 0.17110127 -0.26349375 -0.27194214 -0.28497094 -0.27193999 0.54451156
		 -0.073587418 0.55657482 -0.19936776 -0.26349023 -0.23632616 0.52648824 -0.12611133
		 -0.24201652 -0.27194431 0.54453814 0.066046685 0.52650821 -0.021056652 0.54452151
		 -0.021060109;
createNode polyTweakUV -n "polyTweakUV13";
	rename -uid "29B038C8-4F82-7E36-8252-B094204DD547";
	setAttr ".uopa" yes;
	setAttr -s 127 ".uvtk[0:126]" -type "float2" 0.47072023 -0.073669255 0.47070384
		 0.018651307 -0.41890594 0.0062360764 -0.43578926 0.0062332749 0.44458407 0.018646657
		 0.44460046 -0.073673785 0.44461685 -0.16599441 0.47073662 -0.1659897 -0.16988708
		 -0.13610512 -0.1698924 -0.28622937 -0.12741853 -0.28623092 -0.12741324 -0.13610667
		 -0.60004979 0.0062063932 0.44456768 0.11096722 -0.51857364 0.096315801 -0.60006469
		 0.09630242 0.47068745 0.11097181 0.47067106 0.2032924 -0.25466025 0.096359193 -0.3361513
		 0.096345782 -0.25467506 0.18645534 -0.16987647 0.16414323 -0.12740262 0.16414171
		 -0.12739731 0.31426585 -0.12740792 0.014017522 -0.13309357 0.014017731 -0.41893557
		 0.18642834 -0.16988176 0.014019042 -0.72374237 0.31428698 -0.73178303 0.31428728
		 -0.10073187 0.16414076 -0.72374767 0.16416281 -0.10073718 0.014016569 -0.72375298
		 0.014038622 -0.19654192 0.31426835 -0.20458263 0.31426862 -0.20458792 0.16414446
		 -0.19654723 0.16414416 -0.20459326 0.014020294 -0.19655256 0.014019966 -0.52013212
		 -0.28621703 -0.5120914 -0.28621727 -0.51208609 -0.13609302 -0.52012682 -0.13609278
		 -0.51208079 0.014031142 -0.52012151 0.01403141 -0.41627604 -0.28622067 -0.40823537
		 -0.28622097 -0.40823007 -0.13609672 -0.41627076 -0.13609642 -0.40822479 0.014027476
		 -0.41626543 0.014027745 -0.1007425 -0.13610762 -0.72375828 -0.13608551 -0.1007478
		 -0.28623188 -0.72376359 -0.28620976 -0.20459856 -0.13610387 -0.19655785 -0.13610417
		 -0.20460387 -0.28622812 -0.19656318 -0.28622842 -0.40821946 0.16415164 -0.41626015
		 0.16415194 -0.40821412 0.3142758 -0.41625482 0.3142761 -0.51207554 0.1641553 -0.52011615
		 0.1641556 -0.51207018 0.31427953 -0.52011085 0.31427979 0.49201727 0.20329618 0.48707259
		 0.20329529 0.48708898 0.11097476 0.49203366 0.11097562 0.48710531 0.018654197 0.49205005
		 0.018655062 0.42814988 0.20328486 0.4232052 0.20328397 0.42322153 0.11096346 0.42816627
		 0.11096427 0.42323792 0.018642843 0.4281826 0.018643737 0.42325425 -0.073677599 0.42819899
		 -0.073676825 0.42327064 -0.1659981 0.42821538 -0.16599733 0.4871217 -0.073666275
		 0.49206644 -0.07366544 0.48713803 -0.16598678 0.49208277 -0.16598594 -0.44015402
		 0.0062326193 -0.4358041 0.096329391 -0.44016877 0.096328735 -0.12740773 0.01970318
		 0.47070318 0.022147715 -0.41455612 0.096332908 -0.41892079 0.096332163 -0.16988155
		 0.01970467 0.55404353 0.11098665 0.55405986 0.018666059 0.36121166 0.11095241 0.36122799
		 0.018631876 0.36124438 -0.073688686 0.36126083 -0.16600919 0.55407631 -0.073654413
		 0.55409271 -0.16597492 0.55402714 0.20330715 0.36119527 0.20327297 0.46720743 0.018650681
		 -0.41454133 0.0062367916 0.44458348 0.022143096 0.44808054 0.018647283 -0.33613658
		 0.0062497258 -0.51855874 0.0062196851 -0.25464547 0.0062631369 0.44455135 0.20328775
		 -0.41457096 0.18642905 -0.16419627 0.014018863 -0.43581894 0.18642551 -0.44018355
		 0.18642485 -0.5185883 0.18641201 -0.33616614 0.18644202 -0.16987117 0.31426737 -0.60007948
		 0.18639854 -0.73179895 -0.13608527 -0.73180425 -0.28620952 -0.73179364 0.014038891
		 -0.7317884 0.16416308 -0.10072655 0.31426492;
createNode polyTweakUV -n "polyTweakUV14";
	rename -uid "2486078E-4444-E83C-1922-B58B385E4BBC";
	setAttr ".uopa" yes;
	setAttr -s 45 ".uvtk[0:44]" -type "float2" 0.34603459 0.12414965 0.34602872
		 0.070478469 0.42003953 0.070470378 0.42004544 0.12414157 0.42002198 -0.09054324 0.3460111
		 -0.090535164 0.34600526 -0.14420637 0.42001605 -0.14421445 0.42003372 0.016799152
		 0.34602284 0.016807258 0.346017 -0.036863953 0.42002779 -0.036872029 0.42001024 -0.19788566
		 0.34599939 -0.19787759 0.34599352 -0.25154877 0.42000431 -0.25155687 0.19801289 0.12416586
		 0.19800705 0.070494652 0.2720179 0.07048656 0.27202374 0.12415776 0.19799531 -0.03684777
		 0.27200615 -0.036855847 0.272012 0.016815335 0.19800115 0.016823441 0.19798356 -0.14419019
		 0.27199441 -0.14419827 0.27200025 -0.090527058 0.19798946 -0.090518981 0.19797182
		 -0.25153261 0.27198267 -0.25154069 0.27198851 -0.19786951 0.19797772 -0.1978614 0.12400204
		 0.12417394 0.1239962 0.070502743 0.12398446 -0.036839664 0.12399036 0.016831547 0.12397271
		 -0.14418209 0.12397856 -0.090510905 0.12396097 -0.25152451 0.12396687 -0.1978533
		 0.19796598 -0.3052038 0.12395513 -0.30519569 0.2719768 -0.3052119 0.34598765 -0.30521995
		 0.4199985 -0.30522811;
createNode polyTweakUV -n "polyTweakUV15";
	rename -uid "B4B4B249-4C2C-5A5B-B602-D7BF9FF9E05B";
	setAttr ".uopa" yes;
	setAttr -s 1382 ".uvtk";
	setAttr ".uvtk[0:249]" -type "float2" -0.223443 0.06147933 -0.21900162 0.061480045
		 -0.21900243 0.066597402 -0.22344384 0.066596687 -0.34627157 -0.094899207 0.52698886
		 0.15634173 0.10641405 -0.1764389 -0.34183016 -0.094899625 0.25029045 0.37390697 -0.34634346
		 0.41574627 -0.34634411 0.42086363 0.25029004 0.37902433 -0.087561429 -0.13997352
		 -0.087569803 -0.13553463 -0.092679441 -0.13552172 -0.092679143 -0.13996641 0.091303647
		 0.25092053 0.058577061 0.43105215 0.53880113 0.19972682 0.091302693 0.24580318 0.10913458
		 -0.18088022 -0.21900648 0.092197925 -0.34182984 -0.091630578 -0.34627122 -0.091630131
		 0.038265407 0.088943511 0.038265407 0.091663957 -0.22344184 0.054119825 0.033823967
		 0.088943511 -0.23057303 0.061478198 -0.23057386 0.066595554 0.24702096 0.37902403
		 0.24702138 0.37390667 0.055856645 0.43105197 0.055857062 0.42593461 0.10641396 -0.17174998
		 -0.21431756 0.09219867 -0.20986873 0.092199385 0.10641387 -0.16730115 -0.33714253
		 -0.10824898 0.52698749 0.15634164 0.093064964 -0.16730142 -0.3326937 -0.1082494 -0.33714125
		 -0.094900072 -0.33269238 -0.094900519 -0.33269209 -0.091631472 -0.33714092 -0.091631025
		 -0.092676312 -0.14910221 -0.087554574 -0.14910585 -0.087555826 -0.14465919 -0.09267661
		 -0.14465475 0.047403157 0.088943511 0.047403157 0.091663957 0.042954326 0.091663957
		 0.042954326 0.088943511 -0.2143127 0.061480761 -0.20986387 0.061481476 -0.20986468
		 0.066598833 -0.21431351 0.066598177 -0.23057187 0.054118693 -0.34634253 0.40838677
		 -0.23057792 0.092196107 0.10641429 -0.18801031 -0.20986837 0.089968652 -0.2143172
		 0.089967936 -0.2234475 0.089966506 -0.21900612 0.089967191 -0.34362662 0.44423378
		 -0.34634703 0.44423342 0.055854619 0.45665249 0.055854797 0.45442173 0.058575213
		 0.45442197 0.058575034 0.45665267 -0.23057222 0.056360841 -0.3463428 0.41062891 -0.2234422
		 0.056361973 -0.21900079 0.056362689 -0.20986307 0.056364119 -0.2143119 0.056363404
		 0.53880072 0.19460946 0.05585742 0.4208172 0.055857599 0.41857505 0.081919968 0.088943541
		 -0.21431443 0.072440594 -0.2098656 0.07244131 -0.20986652 0.078283757 -0.21431535
		 0.078283042 -0.22344476 0.072439164 -0.21900335 0.072439879 -0.21900427 0.078282326
		 -0.22344565 0.078281611 -0.23057479 0.072438031 -0.23057571 0.078280479 -0.34634483
		 0.42670608 -0.34634557 0.43254852 0.25028956 0.38486674 0.25028902 0.39070919 0.24702001
		 0.39070895 0.24702048 0.38486651 -0.098519385 -0.13995604 -0.09851709 -0.1355098
		 -0.10435662 -0.13550255 -0.10435885 -0.13994944 -0.10436246 -0.14464185 -0.1043666
		 -0.14909193 -0.098522305 -0.14909679 -0.098520577 -0.14464757 0.058576167 0.44273707
		 0.055855691 0.44273683 0.055856168 0.43689439 0.058576584 0.43689463 0.038265407
		 0.083607107 0.033824027 0.083607107 0.033824027 0.078899115 0.038265407 0.078899115
		 -0.34914556 -0.36281723 -0.34914503 -0.35837585 -0.35385305 -0.35837528 -0.35385355
		 -0.36281669 0.047403157 0.078899115 0.047403157 0.083607137 0.042954326 0.083607137
		 0.042954326 0.078899115 -0.35385251 -0.35368636 -0.34914449 -0.35368693 -0.34914398
		 -0.34923807 -0.35385197 -0.3492375 -0.35167891 0.40838605 0.026694 0.078899115 -0.25095195
		 0.51913702 -0.3563872 0.41062766 0.25562727 0.36879003 0.26033527 0.36879039 0.085965365
		 0.24068677 0.063914239 0.42081785 0.53879982 0.18456513 0.081257373 0.24068761 0.081919968
		 0.083607167 0.06862247 0.41857606 0.096369565 -0.17175019 0.10107756 -0.1717501 0.10107747
		 -0.16730124 0.096369445 -0.16730136 -0.3326934 -0.10494491 -0.33269292 -0.10023692
		 -0.33714175 -0.10023648 -0.33714223 -0.1049445 0.10107675 -0.13278446 0.063911617
		 0.45442238 0.068619609 0.45442274 0.09636873 -0.13278455 0.068620563 0.44273785 0.063912511
		 0.44273749 0.063912988 0.43689504 0.06862098 0.4368954 0.063913465 0.43105257 0.085967243
		 0.25092149 0.081259221 0.25092232 0.53880244 0.21488851 0.081260294 0.2567648 0.085968316
		 0.25676396 0.085969359 0.26260641 0.081261367 0.26260725 0.10107791 -0.18801042 0.5269888
		 0.15100539 0.096369743 -0.18088049 -0.35639173 0.44646287 0.25562447 0.40239456 -0.35168344
		 0.44423276 -0.35639143 0.44423217 0.26033247 0.40239492 0.033824027 0.075594634 0.038265407
		 0.075594634 -0.35715753 -0.35837489 -0.35715804 -0.36281627 0.047403157 0.075594634
		 0.042954326 0.075594634 -0.35715699 -0.35368598 -0.35715646 -0.34923714 -0.35969138
		 0.4083851 -0.35969168 0.41062725 0.081919968 0.075594693 0.071926773 0.42081851 0.07192409
		 0.45442304 0.071923912 0.45665374 0.071925044 0.44273815 0.071925461 0.43689564 0.077955812
		 0.2567654 0.077956855 0.26260784 0.093065262 -0.18088055 0.093065441 -0.1880106 -0.35969594
		 0.44423175 0.081258297 0.24580497 0.068621874 0.42593563 0.071926355 0.42593586 0.071925938
		 0.43105322 0.077953815 0.24580562 0.077954739 0.25092292 -0.23016679 0.51914024 0.26033396
		 0.38486758 -0.22432421 0.51825279 -0.35638997 0.43254727 0.26363841 0.38486788 0.26363796
		 0.39071032 -0.35969371 0.42670441 -0.35969445 0.43254685 -0.34627208 -0.10023558
		 0.25028807 0.40239409 0.09130469 0.25676301 0.091305763 0.26260546 0.10107768 -0.17643902
		 -0.34183067 -0.10023603 -0.34380808 -0.35368752 -0.34380758 -0.34923869 0.091301769
		 0.24068582 0.25029087 0.36878961 -0.34380916 -0.36281785 -0.34380865 -0.35837644
		 -0.1965057 0.092201501 0.10641357 -0.15393811 0.1010772 -0.15393823 0.096369147 -0.15393832
		 0.52698731 0.15634161 -0.31933066 -0.10825071 -0.31933033 -0.10494623 -0.32623738
		 -0.10494554 -0.32623771 -0.10825005 -0.31932989 -0.1002382 -0.3262369 -0.10023755
		 -0.31932935 -0.09490183 -0.3262364 -0.094901145 -0.31932905 -0.091632783 -0.32623607
		 -0.091632098 -0.098526478 -0.15555143 -0.10437271 -0.15554738 -0.10437852 -0.162453
		 -0.098532587 -0.16245657 -0.092686594 -0.16246065 -0.087565422 -0.16246608 -0.087557763
		 -0.1555604 -0.09267965 -0.15555596 -0.34914321 -0.34278208 -0.34380683 -0.34278268
		 -0.34380603 -0.33587566 -0.3491424 -0.33587503 -0.35385123 -0.34278151 -0.35385042
		 -0.3358745 -0.35715571 -0.34278113 0.52610856 0.16076779 0.06076619 0.075594634 0.06076619
		 0.078899115;
	setAttr ".uvtk[250:499]" 0.06076619 0.083607137 0.06076619 0.088943541 0.06076619
		 0.091663957 -0.19650002 0.056366265 -0.19650084 0.061483622 -0.19650164 0.066600978
		 -0.19650257 0.072443396 -0.19650349 0.078285903 -0.19650534 0.089970767 -0.34183115
		 -0.10494402 -0.34183148 -0.1082485 0.096369624 -0.17643911 0.093065143 -0.17643917
		 -0.19205323 0.092202216 0.10641348 -0.14948565 0.10107711 -0.14948577 0.096369088
		 -0.14948586 0.093064606 -0.14948595 -0.3148782 -0.10825115 -0.31487787 -0.10494667
		 -0.31487742 -0.10023865 -0.31487691 -0.094902247 -0.31487659 -0.091633201 -0.10438034
		 -0.16690472 -0.098536253 -0.16690865 -0.092692584 -0.16691238 -0.087572783 -0.16691712
		 -0.34380549 -0.33142319 -0.3491419 -0.33142257 -0.35384989 -0.33142203 -0.35715437
		 -0.33142161 0.065218657 0.075594634 0.065218657 0.078899115 0.065218657 0.083607137
		 0.065218657 0.088943541 -0.19204721 0.054124773 -0.19204755 0.05636692 -0.19204837
		 0.061484337 -0.19204919 0.066601694 -0.1920501 0.072444111 -0.19205102 0.078286558
		 -0.19205289 0.089971453 -0.3066408 -0.10825196 -0.30664048 -0.10494745 -0.31109497
		 -0.10494703 -0.3110953 -0.10825151 -0.30664003 -0.10023946 -0.31109452 -0.10023901
		 -0.30663949 -0.094903052 -0.31109399 -0.094902635 -0.30663919 -0.091634005 -0.31109369
		 -0.091633558 -0.098539025 -0.17069247 -0.10438055 -0.17068779 -0.10437936 -0.17514357
		 -0.09854117 -0.17514995 -0.092703938 -0.17515281 -0.087591439 -0.17515194 -0.08758074
		 -0.17069829 -0.092698127 -0.17069569 -0.34914145 -0.32763967 -0.34380504 -0.3276403
		 -0.34380454 -0.3231858 -0.34914094 -0.32318518 -0.35384947 -0.3276391 -0.35384893
		 -0.32318461 -0.35715395 -0.32763875 -0.35715342 -0.32318425 0.033824027 0.070231169
		 0.038265407 0.070231169 -0.36252096 -0.3583743 -0.36252147 -0.36281568 0.042954326
		 0.070231169 0.047403157 0.070231229 -0.36251989 -0.34923649 -0.3625204 -0.35368535
		 -0.36505482 0.40838438 0.087701857 -0.1808807 0.087701976 -0.18801069 -0.36505935
		 0.44423103 -0.36505511 0.41062653 -0.36505714 0.42670375 -0.36505789 0.4325462 0.26900136
		 0.39071074 0.26900184 0.38486829 -0.34627289 -0.10824808 -0.34627336 -0.11361152
		 -0.34183198 -0.11361194 0.087701738 -0.17643929 0.06076622 0.070231229 0.52610803
		 0.14658391 -0.36251915 -0.34278053 0.52698654 0.15099627 -0.33714306 -0.11361241
		 0.077287495 0.45442346 0.077287316 0.45665416 0.081919998 0.070231229 0.077290177
		 0.42081892 0.077288449 0.44273856 0.077288926 0.43689612 0.072592378 0.25676641 0.072593451
		 0.26260886 0.072590411 0.24580657 0.072591335 0.25092393 0.07728976 0.42593628 0.077289402
		 0.43105364 0.087701201 -0.14948604 -0.31487873 -0.11361456 -0.30664131 -0.11361536
		 -0.31109583 -0.11361495 0.065218657 0.070231229 -0.3625178 -0.33142102 -0.36251736
		 -0.32763812 -0.36251685 -0.3231836 0.087701559 -0.16730154 -0.33269423 -0.11361283
		 0.52698684 0.15099818 -0.31933117 -0.11361414 -0.32623821 -0.11361346 0.033824027
		 0.063548028 0.038265407 0.063548028 -0.3692041 -0.35837349 -0.36920464 -0.36281487
		 0.043395281 0.063548028 0.047844768 0.063548028 -0.36920297 -0.3487941 -0.36920351
		 -0.35324365 -0.37173796 0.40838355 0.081018686 -0.18088081 0.081018865 -0.18801084
		 -0.37174249 0.4442302 -0.37173826 0.4106257 -0.37174028 0.42670286 -0.37174103 0.4325453
		 0.27568448 0.39071134 0.27568498 0.38486889 -0.34627402 -0.12029466 -0.34183264 -0.12029508
		 0.081018627 -0.1764394 0.059422523 0.063548088 -0.36920229 -0.34277973 -0.36920163
		 -0.33721638 0.5269888 0.15634164 -0.33670282 -0.12029558 0.083970666 0.45442399 0.083970487
		 0.4566547 0.081919998 0.063548088 0.083973348 0.42081946 0.08397159 0.4427391 0.083972067
		 0.43689659 0.065909266 0.2567676 0.06591028 0.26261005 0.06590724 0.24580777 0.065908194
		 0.25092512 0.083972931 0.42593682 0.083972514 0.43105417 0.08101809 -0.15082917 -0.30664197
		 -0.12029853 -0.31109649 -0.12029809 0.063875705 0.063548088 -0.36920053 -0.32763731
		 -0.36919999 -0.32318282 0.52698869 0.15634173 0.081018388 -0.16686007 -0.32623887
		 -0.1202966 -0.32067552 -0.12029716 -0.33225328 -0.12029603 -0.31622237 -0.12029758
		 -0.36920112 -0.3327632 0.033824027 0.058217704 0.038265407 0.058217704 -0.37453449
		 -0.35837287 -0.37453499 -0.36281425 0.043395281 0.058217704 0.047844827 0.058217704
		 -0.37453336 -0.34879351 -0.37453386 -0.35324302 -0.37706834 0.40838289 0.075688303
		 -0.1808809 0.075688481 -0.18801096 -0.37707287 0.44422954 0.08930105 0.45442441 0.089300871
		 0.45665511 -0.37706861 0.41062504 0.081919998 0.058217704 0.089303702 0.42081988
		 0.089301974 0.44273952 0.089302421 0.43689707 0.060578883 0.25676855 0.060579956
		 0.262611 0.060576856 0.24580872 0.06057781 0.25092608 0.089303315 0.42593724 0.089302897
		 0.43105459 -0.37707067 0.4267022 -0.37707138 0.43254465 0.28101486 0.39071175 0.28101534
		 0.38486931 -0.34627455 -0.12562501 -0.34183317 -0.12562546 0.075688243 -0.17643955
		 0.059422523 0.058217704 -0.37453264 -0.3427791 -0.37453198 -0.33721575 0.52698874
		 0.15101242 -0.33670333 -0.12562597 0.075687706 -0.15082926 -0.31622288 -0.12562796
		 -0.3066425 -0.12562889 -0.311097 -0.12562847 0.063875705 0.058217704 -0.37453088
		 -0.32763672 -0.37453038 -0.32318223 -0.37453148 -0.3327626 0.075688004 -0.16686019
		 -0.33225378 -0.12562639 0.52698898 0.15101439 -0.32067603 -0.12562752 -0.32623941
		 -0.12562698 0.25296658 -0.36737448 0.25296605 -0.3629331 -0.38175863 -0.35837203
		 -0.38175917 -0.36281341 0.25296539 -0.35780317 0.25296479 -0.35335362 -0.38175753
		 -0.34879267 -0.38175803 -0.35324219 -0.38429248 0.40838194 0.291044 -0.36736959 0.29104495
		 -0.37449965 0.28881419 -0.37449992 0.28880709 -0.31927395 0.29103786 -0.31927365
		 -0.38429281 0.41062415 0.081919998 0.050993562 0.25520259 -0.31927824 0.27712226
		 -0.31927544 0.27127981 -0.31927618 0.053354681 0.25676987 0.053355753 0.26261231
		 0.053352714 0.24581003 0.053353608 0.25092745 0.26031995 -0.31927758 0.09652707 0.43105519
		 -0.38429487 0.42670131 -0.38429558 0.43254375 0.28823903 0.39071235 0.28823954 0.3848699
		 -0.34627527 -0.13284922 -0.34183389 -0.13284966;
	setAttr ".uvtk[500:749]" 0.29104346 -0.36292821 0.2529633 -0.3417761 -0.38175684
		 -0.34277827 -0.38175619 -0.33721492 0.2910428 -0.3577984 -0.33670402 -0.13285014
		 0.068463504 -0.15082943 -0.30664319 -0.13285309 -0.31109771 -0.13285264 0.25296277
		 -0.33732292 -0.38175505 -0.32763588 -0.38175455 -0.32318139 -0.38175565 -0.33276176
		 0.29104078 -0.3417711 0.068463862 -0.16686034 -0.32624012 -0.13285115 -0.32067674
		 -0.13285172 -0.33225447 -0.13285059 -0.31622356 -0.13285214 0.28881323 -0.36736989
		 0.2888127 -0.36292851 0.28881001 -0.34177139 0.2888115 -0.35334915 0.28881204 -0.35779867
		 0.28880942 -0.33731824 0.2771284 -0.36737138 0.27128595 -0.36737216 0.2771278 -0.36293
		 0.27128536 -0.36293077 -0.14754713 -0.37665579 -0.15199155 -0.37665749 -0.15199485
		 -0.38249952 -0.14754945 -0.38249743 0.27712661 -0.35335058 0.27712512 -0.34177297
		 0.27128267 -0.34177375 0.27128416 -0.35335127 -0.12638855 -0.3766534 -0.13195139
		 -0.376652 -0.13195205 -0.38249671 -0.12638953 -0.38249764 0.27712721 -0.3578001 0.2712847
		 -0.35780081 -0.14241543 -0.37665313 -0.1424166 -0.38249603 0.27712452 -0.33731979
		 0.27128208 -0.3373206 -0.11680821 -0.37665808 -0.11680961 -0.3824982 -0.1123523 -0.38249758
		 -0.11235063 -0.37665996 -0.13796547 -0.37665173 -0.13796613 -0.38249576 -0.12193531
		 -0.37665531 -0.12193647 -0.38249817 -0.38429409 0.42085886 0.2654435 -0.3673729 0.26032615
		 -0.36737356 -0.38429344 0.4157415 0.26544291 -0.36293149 0.26032555 -0.36293215 -0.14754781
		 -0.38833797 -0.15199378 -0.38834131 -0.15198669 -0.39345574 -0.1475423 -0.39345211
		 0.26544172 -0.35335201 0.26544029 -0.34177452 0.26032287 -0.34177524 0.26032436 -0.35335261
		 -0.12638956 -0.3883425 -0.13195142 -0.38834146 -0.13195008 -0.39346087 -0.12638798
		 -0.39346284 0.26544225 -0.3578015 0.2603249 -0.35780215 -0.14241523 -0.38833785 -0.14241216
		 -0.39345402 0.26543963 -0.33732137 0.26032227 -0.33732206 -0.11681169 -0.38833943
		 -0.11681247 -0.39345872 -0.11236046 -0.39345127 -0.1123566 -0.38833576 -0.13796511
		 -0.3883391 -0.13796338 -0.393457 -0.12193754 -0.38834199 -0.12193596 -0.39346236
		 0.25520879 -0.36737421 0.25520819 -0.3629328 0.255207 -0.35335323 0.25520551 -0.34177589
		 0.25520754 -0.35780275 0.25520492 -0.33732274 -0.37706926 0.4157424 -0.37706992 0.42085975
		 -0.37173891 0.41574305 -0.37173954 0.42086041 -0.36505574 0.41574389 -0.3650564 0.42086124
		 -0.35969234 0.4157446 -0.35969299 0.42086196 -0.2411266 0.51913851 -0.35638851 0.42086238
		 0.26033485 0.3739078 -0.23600911 0.51825094 0.2636393 0.37390804 0.26363891 0.3790254
		 0.26900229 0.37902588 0.26900274 0.37390852 0.27568546 0.37902641 0.27568591 0.37390906
		 0.28101584 0.37902683 0.28101629 0.37390947 0.28824002 0.37902749 0.28824043 0.37391007
		 -0.10437909 -0.17960116 -0.098542303 -0.17960891 -0.092704952 -0.17961302 -0.087595016
		 -0.17961138 -0.34380403 -0.31873131 -0.34914041 -0.31873068 -0.35384843 -0.31873012
		 -0.35715291 -0.31872976 -0.36251634 -0.31872913 -0.36919945 -0.31872833 -0.37452984
		 -0.3187277 -0.38175404 -0.31872687 -0.10790774 -0.39344212 -0.10789932 -0.38833386
		 -0.10789376 -0.38249761 -0.1078914 -0.37665945 -0.30218869 -0.13285351 -0.30218801
		 -0.12562934 -0.30218747 -0.12029895 -0.30218682 -0.11361581 -0.30218631 -0.10825238
		 -0.30218598 -0.10494789 -0.30218554 -0.10023987 -0.302185 -0.094903499 -0.1192497
		 -0.17963222 0.055855215 0.44857928 -0.19205196 0.084129006 -0.19650441 0.08412832
		 -0.20986745 0.084126204 -0.21431628 0.084125489 -0.2190052 0.084124744 -0.22344658
		 0.084124058 -0.34362587 0.43839133 -0.28405041 0.51913202 0.25028855 0.39655164 0.24701953
		 0.3965514 -0.11019519 -0.1355017 -0.11019731 -0.13994743 -0.11020315 -0.14463842
		 -0.11020997 -0.14908785 -0.11021876 -0.15554395 -0.11022499 -0.16245079 -0.11022657
		 -0.16690239 -0.11022508 -0.17068389 -0.11021948 -0.17513692 -0.11021185 -0.17959058
		 0.091306806 0.26844791 0.085970432 0.26844886 0.08126241 0.26844969 0.077957958 0.26845029
		 0.072594523 0.2684513 0.065911353 0.2684525 0.060580969 0.26845345 0.053356826 0.26845476
		 -0.1078932 -0.37082294 -0.11235167 -0.37082231 -0.11680722 -0.37081718 -0.12193313
		 -0.37081215 -0.12638626 -0.37080902 -0.13194963 -0.37080699 -0.13796416 -0.3708069
		 -0.14241362 -0.37080896 -0.1475434 -0.37081322 -0.15198684 -0.37081569 0.28823858
		 0.3965548 0.28101441 0.3965542 0.27568403 0.39655378 0.26900089 0.39655319 0.26363742
		 0.39655277 -0.21848176 0.51825368 -0.35639071 0.43838972 -0.3596952 0.4383893 -0.3650586
		 0.43838859 -0.37174177 0.43838775 -0.37707213 0.4383871 0.28297174 -0.37450066 0.28297085
		 -0.36737067 0.28297025 -0.36292925 0.28296959 -0.35779938 0.28296906 -0.35334986
		 0.28296757 -0.34177217 0.28296697 -0.33731902 0.28296465 -0.31927466 0.089301497
		 0.44858196 0.083971143 0.44858155 0.077287972 0.44858101 0.071924567 0.44858059 0.068620086
		 0.44858029 0.063912034 0.44857994 0.05857569 0.44857952 0.24701899 0.40239385 -0.11602846
		 -0.13551229 -0.1160337 -0.13994844 -0.11604452 -0.1446338 -0.11605361 -0.14908168
		 -0.11607155 -0.16244999 -0.11606392 -0.15553927 -0.1160742 -0.16690499 -0.11606631
		 -0.17514214 -0.11607355 -0.17068902 -0.11604393 -0.17959014 0.091307878 0.27429035
		 0.085971475 0.27429131 0.081263483 0.27429214 0.077958971 0.27429274 0.072595596
		 0.27429375 0.065912426 0.27429494 0.060582042 0.2742959 0.053357899 0.27429721 -0.10790227
		 -0.36498418 -0.11235189 -0.36498043 -0.11680219 -0.36497369 -0.12192726 -0.36496809
		 -0.12638122 -0.3649646 -0.13194674 -0.3649621 -0.13796365 -0.3649624 -0.14241445
		 -0.36496437 -0.14754331 -0.36496985 -0.15197966 -0.36497971 0.28101391 0.40239665
		 0.28823805 0.40239725 0.27568352 0.40239623 0.26900041 0.40239564 0.26363698 0.40239522
		 0.26363975 0.36879069 0.26900315 0.36879116 0.27568632 0.3687917 0.28101668 0.36879212
		 0.28824085 0.36879271 -0.15196931 -0.39856479 -0.14753473 -0.39856464 -0.14241025
		 -0.39857018 -0.13796303 -0.39857498 -0.13194951 -0.39857978 -0.12638527 -0.39858314;
	setAttr ".uvtk[750:999]" -0.12193131 -0.39858407 -0.11235373 -0.39857271 -0.11680505
		 -0.39858124 -0.10790791 -0.39855012 0.060575962 0.24069136 0.05335176 0.24069268
		 0.065906286 0.24069041 0.072589487 0.24068922 0.077952862 0.2406882 0.24702179 0.36878932
		 -0.082493424 -0.17959687 -0.08247304 -0.17515683 -0.082460284 -0.17070886 -0.082452297
		 -0.16692731 -0.082444996 -0.16247448 -0.082436889 -0.15556464 -0.082432657 -0.14910534
		 -0.082432836 -0.14465514 -0.08243835 -0.13996811 -0.082457334 -0.13553731 -0.11885267
		 -0.18419293 -0.29718775 -0.091634929 0.094576925 0.27428976 -0.11604723 -0.18426856
		 -0.29752019 -0.091634899 -0.11891621 -0.17962301 -0.29752052 -0.094903946 0.091308385
		 0.27714655 -0.11892748 -0.17516145 0.24701881 0.40525004 -0.11893508 -0.12783074
		 -0.11607087 -0.12772568 -0.3540546 -0.091629386 0.25028783 0.40525034 -0.3540549
		 -0.094898432 -0.11887676 -0.13551717 0.24702203 0.36587638 -0.079226017 -0.12782387
		 -0.34381008 -0.37060121 0.25029111 0.36587667 -0.079553932 -0.12786214 -0.079529732
		 -0.13550951 -0.079196483 -0.13550319 -0.082431912 -0.12775248 0.094570309 0.23777229
		 -0.079599798 -0.18418494 -0.082461149 -0.18427926 0.094570816 0.24068522 -0.34053442
		 -0.31406718 0.091301233 0.23777288 -0.34380347 -0.31406683 -0.34053499 -0.3187317
		 -0.079561889 -0.17961767 -0.34053549 -0.32318616 -0.079556048 -0.17517355 -0.087538093
		 -0.1277318 -0.0875808 -0.18428493 0.094571769 0.24580258 -0.29752102 -0.10024035
		 0.085972011 0.2771475 0.25562423 0.40525076 -0.35405543 -0.10023484 -0.34914646 -0.37060058
		 0.25562745 0.36587709 0.085964859 0.23777384 -0.34913987 -0.3140662 -0.11888829 -0.13994385
		 -0.11890075 -0.1446273 -0.3405396 -0.35837683 -0.079521686 -0.13995399 -0.079517961
		 -0.14464939 -0.34053904 -0.35368791 -0.11020824 -0.12770316 0.094575882 0.26844731
		 -0.11022559 -0.18426612 -0.092656076 -0.12772614 -0.09270075 -0.184282 0.094572693
		 0.25091994 -0.098502904 -0.12771802 -0.1043534 -0.1277094 -0.098545432 -0.18427661
		 0.094573736 0.25676242 -0.10438776 -0.18426982 0.094574809 0.26260486 0.081256837
		 0.23777473 -0.35384786 -0.31406564 -0.35385448 -0.37060001 0.26033551 0.36587751
		 -0.2975215 -0.10494834 0.081263989 0.27714834 0.26033223 0.40525112 -0.35405591 -0.10494283
		 0.077952355 0.23777533 -0.35715234 -0.31406525 0.072588921 0.23777628 -0.36251578
		 -0.31406462 -0.35715896 -0.37059966 0.26363999 0.36587781 -0.36252236 -0.37059903
		 0.26900339 0.36587822 -0.29752183 -0.10825282 0.077959538 0.27714893 -0.29752234
		 -0.11361626 0.072596073 0.27714995 0.26363671 0.40525141 -0.35405621 -0.10824731
		 0.26900011 0.40525189 -0.35405675 -0.11361074 -0.11891025 -0.14907604 -0.11892071
		 -0.15553576 -0.34053853 -0.34923905 -0.079518616 -0.1491046 -0.079523146 -0.15556797
		 -0.34053779 -0.34278309 -0.11892861 -0.16244957 -0.11893186 -0.16690841 -0.34053695
		 -0.33587605 -0.079531223 -0.16248131 -0.079538405 -0.16693708 -0.34053645 -0.33142358
		 -0.11893225 -0.17069805 -0.079546094 -0.17072132 -0.340536 -0.32764065 -0.36920553
		 -0.37059826 0.27568656 0.36587876 0.27568331 0.40525243 -0.35405737 -0.12029392 -0.29752299
		 -0.1202994 0.065912962 0.27715114 0.065905809 0.23777753 -0.36919892 -0.31406385
		 -0.37453589 -0.3705976 0.28101695 0.36587924 0.2810137 0.40525284 -0.35405791 -0.12562427
		 -0.2975235 -0.12562978 0.060582578 0.27715215 0.060575426 0.23777848 -0.3745293 -0.31406322
		 -0.38176006 -0.37059677 0.28824112 0.36587977 0.28823784 0.4052535 -0.35405862 -0.13284847
		 -0.29752421 -0.13285396 0.053358376 0.2771534 0.053351223 0.2377798 -0.38175347 -0.31406239
		 -0.38230866 -0.37059671 -0.15996206 -0.4016034 0.28878647 0.4052535 -0.15971535 -0.36176798
		 -0.29752427 -0.13340256 -0.10297619 -0.36206922 0.052802622 0.23777986 -0.10326037
		 -0.4017418 -0.38230723 -0.35837197 -0.14753535 -0.40147549 -0.15195853 -0.40146983
		 -0.38230777 -0.36281335 -0.38230664 -0.35324213 -0.14241275 -0.40148312 -0.15964198
		 -0.40154368 -0.13796505 -0.40148842 -0.38230613 -0.34879258 -0.38230544 -0.34277821
		 -0.13195032 -0.40149328 -0.15975419 -0.39862233 0.28878945 0.36879277 -0.15967906
		 -0.36209601 0.28878671 0.4023973 -0.15977281 -0.36495885 -0.15198684 -0.36213183
		 -0.34627533 -0.13339782 -0.14754918 -0.36211351 -0.34183389 -0.13339823 0.28878716
		 0.39655486 -0.15977934 -0.37080789 -0.10329729 -0.36212328 -0.30218875 -0.13340211
		 -0.10790689 -0.36213243 -0.10323323 -0.36497679 0.052809298 0.27429733 -0.10322136
		 -0.37080976 0.052808225 0.26845488 -0.15978494 -0.39348501 0.28878903 0.37391013
		 -0.10330556 -0.40141636 -0.10787456 -0.40147972 -0.38230264 -0.31872681 0.052803159
		 0.24069279 -0.10322917 -0.39855579 0.052804112 0.24581015 -0.10323164 -0.39345676
		 -0.10322222 -0.37665677 0.052807152 0.26261243 0.052805007 0.25092751 -0.1032314
		 -0.38834426 -0.15978652 -0.38835424 0.28878862 0.37902749 -0.14241678 -0.3621071
		 -0.33670408 -0.13339874 -0.3206768 -0.13340032 -0.12637711 -0.3621079 -0.12192145
		 -0.36211133 -0.31622362 -0.13340074 -0.32624015 -0.13339975 -0.13194454 -0.36210549
		 -0.33225453 -0.13339919 -0.13796362 -0.36210582 -0.38230479 -0.33721486 -0.12638393
		 -0.40149659 -0.38230425 -0.33276168 -0.12192667 -0.40149856 -0.30664325 -0.13340166
		 -0.11234429 -0.36212322 -0.11233385 -0.40149069 -0.38230315 -0.3231813 -0.38230366
		 -0.32763579 -0.11679497 -0.40149653 -0.11679491 -0.36211687 -0.31109774 -0.13340124
		 -0.15978473 -0.38250148 0.28878814 0.38486996 -0.15978229 -0.3766523 0.28878766 0.39071241
		 -0.10322632 -0.38250175 0.052806079 0.25676998 -0.34627253 -0.1049436 0.52612829
		 0.14656395 0.52612841 0.16611952 0.52612829 0.15100539 0.52612829 0.15634176 0.52612841
		 0.16078311 0.52612889 0.15099645 0.52612811 0.14656258 0.52613163 0.16612101 0.087701619
		 -0.17175037 0.52698922 0.16612086 0.52698576 0.1465624 0.52613062 0.16077566 0.52698833
		 0.16077551 0.52612984 0.15634182 0.093065083 -0.17175025 0.52698898 0.16611952 0.5269888
		 0.14656395 0.10107774 -0.1808804 0.10641414 -0.18088028 0.52698892 0.16078311 0.52612835
		 0.15101242 0.52612829 0.14656377;
	setAttr ".uvtk[1000:1249]" 0.52612859 0.16611955 0.075688124 -0.17130971 0.52698898
		 0.16611952 0.52698863 0.14656377 0.52612847 0.16079029 0.52698886 0.16079026 0.52612847
		 0.1563417 0.081018507 -0.17130959 0.52698809 0.16611972 0.52698922 0.14656371 0.075687766
		 -0.15528244 0.52612913 0.14656365 0.52612805 0.16611969 0.52612889 0.15101433 0.52612865
		 0.15634167 0.08101815 -0.15528232 0.52612835 0.16079235 0.52698839 0.16079238 0.52698809
		 0.16612098 0.52698648 0.14656228 0.087701261 -0.1539385 0.52612913 0.14656234 0.52613074
		 0.1661211 0.52612948 0.15099823 0.5261299 0.1563417 0.093064725 -0.15393838 0.52613026
		 0.16077757 0.52698761 0.16077751 -0.26140571 0.51913542 -0.25628835 0.51913619 -0.26140559
		 0.51824701 -0.25628823 0.51824778 -0.24112646 0.51825011 0.26033443 0.37902516 -0.35638785
		 0.41574502 -0.23600924 0.51913935 -0.27236551 0.51913375 -0.26652306 0.51913464 -0.27236536
		 0.51824534 -0.26652294 0.51824623 -0.23016666 0.5182519 0.26033342 0.39071003 -0.35638922
		 0.42670482 -0.22432435 0.5191412 -0.21848191 0.51914209 -0.29993722 0.51912963 -0.21263948
		 0.51914299 0.26033294 0.39655247 -0.21263933 0.51825464 -0.2999371 0.51824123 -0.28405026
		 0.51824361 -0.27820784 0.5182445 -0.34634632 0.43839097 -0.27820796 0.51913285 -0.25095183
		 0.51824862 -0.24624382 0.51824933 -0.35167921 0.41062826 -0.24624397 0.51913774 -0.29522923
		 0.51913035 -0.29522911 0.51824194 -0.2898927 0.51824272 -0.28989282 0.51913112 -0.17534706
		 0.061486959 -0.17534626 0.056369603 -0.34362301 0.41574663 -0.34362239 0.41062927
		 -0.34362441 0.42670643 -0.34362367 0.42086399 -0.17534879 0.072446793 -0.17534788
		 0.066604316 -0.2305766 0.084122926 -0.34362516 0.43254888 -0.17535065 0.084131658
		 -0.17534971 0.078289241 0.065218657 0.091663986 -0.19649966 0.054124117 0.10913393
		 -0.14948559 0.10913402 -0.15393806 -0.20986271 0.054121971 0.10913429 -0.16730109
		 -0.21431151 0.054121256 -0.21900046 0.054120541 0.10913438 -0.17174992 0.10913447
		 -0.17643884 -0.1753459 0.054127455 0.02669394 0.091663927 -0.23057756 0.089965373
		 -0.17535158 0.089974105 0.033823967 0.091663927 -0.22344789 0.092197239 -0.34362692
		 0.44646448 -0.17535193 0.092204839 -0.18403837 0.092203468 0.10913375 -0.14147073
		 0.1064133 -0.14147079 0.10107693 -0.14147089 0.096368909 -0.141471 0.093064427 -0.14147106
		 0.087701023 -0.14147118 0.081017852 -0.14147133 0.075687528 -0.14147143 0.29103899
		 -0.3279601 0.28880823 -0.3279604 0.28296578 -0.32796115 0.27712333 -0.32796189 0.27128088
		 -0.32796264 0.26543844 -0.32796338 0.26032108 -0.32796404 0.25520372 -0.32796469
		 0.073233545 0.050993502 0.073233545 0.058217704 0.073233545 0.063548088 0.073233545
		 0.070231229 0.073233545 0.075594693 0.073233515 0.078899175 0.073233515 0.083607167
		 0.073233515 0.088943541 0.073233515 0.091663986 -0.18403235 0.054126024 -0.18403269
		 0.056368232 -0.18403351 0.061485589 -0.18403432 0.066602945 -0.18403524 0.072445363
		 -0.18403617 0.07828787 -0.18403709 0.084130287 -0.18403801 0.089972734 0.10107735
		 -0.16084525 0.10641372 -0.16084513 -0.20341274 0.092200398 0.10913417 -0.16084507
		 -0.20341238 0.089969665 -0.20341146 0.084127218 -0.20341054 0.07828477 -0.20340958
		 0.072442323 -0.20340866 0.066599846 -0.20340785 0.061482489 -0.20340705 0.056365132
		 0.053859174 0.091663957 -0.20340669 0.054122984 0.053859174 0.088943511 0.053859174
		 0.083607137 0.053859174 0.078899115 0.053859174 0.075594634 0.053859174 0.070231229
		 0.053859174 0.063548028 0.053859174 0.058217704 0.25296408 -0.34733933 0.25520623
		 -0.34733903 0.26032364 -0.34733838 0.26544094 -0.34733772 0.27128339 -0.34733701
		 0.27712584 -0.34733623 0.28296828 -0.34733549 0.28881073 -0.34733474 0.068463743
		 -0.16084594 0.075687885 -0.16084579 0.081018269 -0.16084567 0.08770144 -0.16084555
		 0.093064845 -0.16084543 0.096369326 -0.16084537 0.29104149 -0.34733444 0.29104227
		 -0.35334885 0.053859174 0.050993502 0.047844887 0.050993502 0.25296158 -0.32796496
		 0.063875616 0.050993502 0.068463326 -0.14147159 0.29104018 -0.33731794 0.26032704
		 -0.37450358 0.25520968 -0.37450424 0.096527487 0.42593783 0.2654373 -0.31927693 0.27128685
		 -0.37450218 0.2654444 -0.37450293 0.096526623 0.43689761 0.096525669 0.4485825 0.096526146
		 0.44274005 -0.3842963 0.43838614 0.27712929 -0.37450144 -0.38429704 0.44422859 0.068463624
		 -0.15528259 0.068463922 -0.17130986 0.059422433 0.050993502 0.25296044 -0.31927851
		 0.096525043 0.45665571 0.0433954 0.050993502 0.038265407 0.050993502 0.068464041
		 -0.1764397 0.06846416 -0.18088108 0.096527904 0.42082042 0.096525222 0.45442495 0.25296754
		 -0.37450451 0.068464279 -0.18801111 0.033824027 0.050993502 0.089303881 0.41857773
		 0.096528083 0.41857827 0.075687289 -0.13278498 0.068463147 -0.13278514 -0.37707317
		 0.44646025 -0.38429734 0.44645935 0.026694 0.058217645 0.026694 0.050993502 0.083973497
		 0.41857725 0.081017673 -0.13278487 -0.37174278 0.44646096 0.026694 0.063548028 0.077290356
		 0.41857672 0.087700844 -0.13278474 -0.36505964 0.4464618 0.026694 0.070231169 0.071926951
		 0.41857636 0.093064249 -0.13278462 -0.35969621 0.44646245 0.026694 0.075594634 0.026694
		 0.083607107 -0.3563869 0.40838552 0.063914478 0.4185757 0.081919968 0.078899175 0.063911438
		 0.45665309 0.06861943 0.45665351 -0.35168374 0.44646347 0.096369922 -0.18801054 -0.34634733
		 0.44646418 0.10641313 -0.13278434 0.02669394 0.088943481 0.058578074 0.41857529 -0.34362209
		 0.40838712 0.081919968 0.091663986 0.10913473 -0.18801025 0.10913357 -0.13278428
		 0.53969133 0.19972676 0.53969085 0.1946094 0.058577478 0.42593479 0.058577895 0.42081743
		 0.53880292 0.22000587 0.068621457 0.43105292 0.53969306 0.22000581 0.53969264 0.21488845
		 0.53880024 0.18927312 0.53880334 0.22512326 0.068622291 0.42081821 0.53969038 0.189273
		 0.53969353 0.22512314 0.53968996 0.18456501 0.53969222 0.21018049 0.53880209 0.21018052
		 0.53969175 0.20484412 0.53880161 0.20484418 -0.16011187 -0.37080529 -0.16011477 -0.37665164;
	setAttr ".uvtk[1250:1381]" -0.10289891 -0.38834512 -0.10289384 -0.38250223 -0.10288973
		 -0.37665665 -0.11022741 -0.18459865 -0.10438851 -0.18460232 -0.10435325 -0.12737688
		 -0.11021096 -0.12737048 -0.11234288 -0.36179075 -0.11679384 -0.3617844 -0.11679384
		 -0.401829 -0.11233133 -0.40182331 -0.079223543 -0.17517576 -0.079213619 -0.17072296
		 -0.11926475 -0.17069909 -0.11926007 -0.17516389 -0.16011721 -0.38250133 -0.16011906
		 -0.38835484 -0.12192068 -0.36177886 -0.12192619 -0.40183103 -0.10786527 -0.40181315
		 -0.10790135 -0.36179978 -0.13796359 -0.36177334 -0.1424171 -0.36177462 -0.12638384
		 -0.40182906 -0.1319505 -0.40182573 -0.13194427 -0.36177301 -0.12637657 -0.36177543
		 -0.14755023 -0.361781 -0.16011766 -0.39348859 -0.10289912 -0.39345881 -0.1028887
		 -0.37080789 -0.10289671 -0.39856738 -0.10298061 -0.40146905 -0.38230208 -0.31406233
		 -0.1600875 -0.39863878 -0.10289975 -0.36496505 -0.29719183 -0.13340259 -0.10325755
		 -0.36179537 -0.1601052 -0.3649447 -0.15199125 -0.3617985 -0.35405865 -0.13339704
		 -0.16000277 -0.36203885 -0.38230872 -0.37092915 -0.14241329 -0.40181559 -0.13796544
		 -0.4018209 -0.1596753 -0.40187323 -0.15196097 -0.40180245 -0.14753577 -0.40180799
		 -0.07920593 -0.1669383 -0.11926436 -0.16690877 -0.079198748 -0.16248211 -0.079190671
		 -0.15556839 -0.11925316 -0.15553528 -0.11926109 -0.16244945 -0.079186112 -0.14910457
		 -0.079185456 -0.1446487 -0.11923319 -0.14462632 -0.1192427 -0.14907527 -0.09854573
		 -0.18460909 -0.092700452 -0.18461451 -0.09850201 -0.12738553 -0.092654556 -0.12739365
		 -0.087578505 -0.18461764 -0.087534398 -0.1273993 -0.11605838 -0.18460101 -0.11608613
		 -0.1273924 -0.079189122 -0.13995226 -0.34054011 -0.36281824 -0.11920935 -0.13551408
		 -0.11922076 -0.13994284 -0.082448006 -0.18461269 -0.082416266 -0.12742017 -0.079229325
		 -0.17962527 -0.079272002 -0.1842269 -0.079543978 -0.18450627 -0.079495817 -0.12753832
		 -0.34054101 -0.37060156 -0.11926451 -0.12779675 -0.11899421 -0.12751068 -0.30218467
		 -0.091634452 -0.11890551 -0.1845178 -0.11917815 -0.18423799 -0.38175344 -0.31372994
		 -0.38230205 -0.31372988 0.052809775 0.27715352 -0.29719177 -0.13285398 -0.35439107
		 -0.13284841 -0.3543911 -0.13339701 0.28878969 0.36587989 -0.38176012 -0.37092924
		 -0.37452924 -0.31373078 -0.29719105 -0.12562981 -0.35439038 -0.12562424 -0.37453592
		 -0.37093008 -0.36919889 -0.3137314 -0.29719055 -0.12029943 -0.35438985 -0.12029386
		 -0.36920556 -0.3709307 -0.36251575 -0.31373218 -0.29718989 -0.11361629 -0.35438919
		 -0.11361071 -0.36252242 -0.37093148 -0.35438868 -0.10824728 -0.35438836 -0.1049428
		 -0.29718935 -0.10825285 -0.29718906 -0.10494837 -0.35715899 -0.3709321 -0.35385451
		 -0.37093249 -0.35715231 -0.3137328 -0.35384783 -0.31373319 -0.35438788 -0.10023481
		 -0.29718858 -0.10024038 -0.34914649 -0.37093303 -0.34913984 -0.31373373 -0.34380344
		 -0.31373435 -0.34381011 -0.37093365 -0.35438737 -0.094898403 -0.29718807 -0.094903976
		 -0.34053439 -0.31373474 -0.34054106 -0.37093404 0.094577461 0.27714595 -0.35438704
		 -0.091629356 0.5261088 0.16609949 -0.36251831 -0.33587348 0.52610815 0.15100998 0.52700925
		 0.16609949 0.52700853 0.14658391 0.52700865 0.15100998 0.52610838 0.15634167 0.52700883
		 0.1563417 0.52700901 0.16076779 -0.35715491 -0.33587408;
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
	setAttr -s 108 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 111 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderingList1;
select -ne :initialShadingGroup;
	setAttr -s 15 ".dsm";
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
connectAttr "polyTweakUV1.out" "Staircase_PlatformShape.i";
connectAttr "polyTweakUV1.uvtk[0]" "Staircase_PlatformShape.uvst[0].uvtw";
connectAttr "polyTweakUV2.out" "Staircase_Platform1Shape.i";
connectAttr "polyTweakUV2.uvtk[0]" "Staircase_Platform1Shape.uvst[0].uvtw";
connectAttr "polyTweakUV3.out" "Topfloor_PlatformShape.i";
connectAttr "polyTweakUV3.uvtk[0]" "Topfloor_PlatformShape.uvst[0].uvtw";
connectAttr "polyTweakUV4.out" "Topfloor_dividerShape.i";
connectAttr "polyTweakUV4.uvtk[0]" "Topfloor_dividerShape.uvst[0].uvtw";
connectAttr "polyTweakUV5.out" "topfloor_wallShape.i";
connectAttr "polyTweakUV5.uvtk[0]" "topfloor_wallShape.uvst[0].uvtw";
connectAttr "polyTweakUV6.out" "topfloor_wallShape3.i";
connectAttr "polyTweakUV6.uvtk[0]" "topfloor_wallShape3.uvst[0].uvtw";
connectAttr "polyTweakUV7.out" "topfloor_wallShape2.i";
connectAttr "polyTweakUV7.uvtk[0]" "topfloor_wallShape2.uvst[0].uvtw";
connectAttr "polyTweakUV8.out" "topfloor_floorShape.i";
connectAttr "polyTweakUV8.uvtk[0]" "topfloor_floorShape.uvst[0].uvtw";
connectAttr "polyTweakUV9.out" "MiddleFloor_WallShape.i";
connectAttr "polyTweakUV9.uvtk[0]" "MiddleFloor_WallShape.uvst[0].uvtw";
connectAttr "polyTweakUV10.out" "middlefloor_platformShape.i";
connectAttr "polyTweakUV10.uvtk[0]" "middlefloor_platformShape.uvst[0].uvtw";
connectAttr "polyTweakUV11.out" "middlefloor_floorShape.i";
connectAttr "polyTweakUV11.uvtk[0]" "middlefloor_floorShape.uvst[0].uvtw";
connectAttr "polyTweakUV12.out" "bottomfloor_wallShape1.i";
connectAttr "polyTweakUV12.uvtk[0]" "bottomfloor_wallShape1.uvst[0].uvtw";
connectAttr "polyTweakUV13.out" "bottomfloor_wallShape2.i";
connectAttr "polyTweakUV13.uvtk[0]" "bottomfloor_wallShape2.uvst[0].uvtw";
connectAttr "polyTweakUV14.out" "bottomfloor_floorShape.i";
connectAttr "polyTweakUV14.uvtk[0]" "bottomfloor_floorShape.uvst[0].uvtw";
connectAttr "polyTweakUV15.out" "outershellShape.i";
connectAttr "polyTweakUV15.uvtk[0]" "outershellShape.uvst[0].uvtw";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_OuterShellMain_GeoSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG2.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG3.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG4.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG5.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG6.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG7.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG8.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG9.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloorBase_GeoSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG2.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG3.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG4.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG5.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG6.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG7.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG8.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG9.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG2.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG3.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG4.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG5.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG6.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG7.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG8.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG9.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_RailingtoLB_GeoSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloorBase_GeoSG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG10.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG11.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG12.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG13.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG14.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG15.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG16.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG17.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG18.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG19.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloorBase_GeoSG2.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG20.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG21.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG22.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG23.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG24.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG25.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG26.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG27.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG28.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG29.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "ShellBeveled:Material_001.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "ShellBeveled:WorldGridMaterial.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "ShellBeveled:Material_003.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "ShellBeveled1:Material_002.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloorBase_GeoSG3.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG30.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG31.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG32.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG33.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG34.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG35.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG36.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG37.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG38.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG39.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloorBase_GeoSG4.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG40.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG41.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG42.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG43.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG44.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG45.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG46.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG47.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG48.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG49.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloorBase_GeoSG5.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG50.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG51.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG52.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG53.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG54.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG55.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG56.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG57.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG58.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG59.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "WorkSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MiddleFloorBase_GeoSG6.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG60.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG61.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG62.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG63.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG64.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG65.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG66.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG67.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG68.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG69.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "f2_floor_2SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_OuterShellMain_GeoSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG2.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG3.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG4.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG5.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG6.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG7.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG8.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloor_PlatStairs_GeoSG9.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloorBase_GeoSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG2.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG3.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG4.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG5.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG6.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG7.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG8.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG9.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG2.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG3.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG4.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG5.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG6.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG7.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG8.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "BASE_CAVE_GEO_StaticMeshSG9.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_RailingtoLB_GeoSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloorBase_GeoSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG10.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG11.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG12.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG13.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG14.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG15.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG16.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG17.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG18.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG19.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloorBase_GeoSG2.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG20.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG21.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG22.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG23.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG24.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG25.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG26.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG27.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG28.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG29.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "ShellBeveled:Material_001.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "ShellBeveled:WorldGridMaterial.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "ShellBeveled:Material_003.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "ShellBeveled1:Material_002.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloorBase_GeoSG3.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG30.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG31.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG32.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG33.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG34.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG35.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG36.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG37.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG38.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG39.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloorBase_GeoSG4.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG40.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG41.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG42.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG43.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG44.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG45.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG46.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG47.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG48.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG49.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloorBase_GeoSG5.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG50.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG51.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG52.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG53.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG54.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG55.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG56.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG57.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG58.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG59.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "WorkSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MiddleFloorBase_GeoSG6.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG60.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG61.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG62.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG63.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG64.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG65.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG66.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG67.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG68.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SB_MainStairCase_Stairs_GeoSG69.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "f2_floor_2SG.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "MaterialFBXASC046002.oc" "SB_OuterShellMain_GeoSG.ss";
connectAttr "SB_OuterShellMain_GeoSG.msg" "materialInfo1.sg";
connectAttr "MaterialFBXASC046002.msg" "materialInfo1.m";
connectAttr "WorldGridMaterial.oc" "SB_MiddleFloor_PlatStairs_GeoSG.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG.msg" "materialInfo2.sg";
connectAttr "WorldGridMaterial.msg" "materialInfo2.m";
connectAttr "M_Grey.oc" "SB_MiddleFloor_PlatStairs_GeoSG1.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG1.msg" "materialInfo3.sg";
connectAttr "M_Grey.msg" "materialInfo3.m";
connectAttr "M_BlueGrey.oc" "SB_MiddleFloor_PlatStairs_GeoSG2.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG2.msg" "materialInfo4.sg";
connectAttr "M_BlueGrey.msg" "materialInfo4.m";
connectAttr "M_DarkGrey.oc" "SB_MiddleFloor_PlatStairs_GeoSG3.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG3.msg" "materialInfo5.sg";
connectAttr "M_DarkGrey.msg" "materialInfo5.m";
connectAttr "M_LightBlueGrey.oc" "SB_MiddleFloor_PlatStairs_GeoSG4.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG4.msg" "materialInfo6.sg";
connectAttr "M_LightBlueGrey.msg" "materialInfo6.m";
connectAttr "M_DarkBlueGrey.oc" "SB_MiddleFloor_PlatStairs_GeoSG5.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG5.msg" "materialInfo7.sg";
connectAttr "M_DarkBlueGrey.msg" "materialInfo7.m";
connectAttr "M_Teal.oc" "SB_MiddleFloor_PlatStairs_GeoSG6.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG6.msg" "materialInfo8.sg";
connectAttr "M_Teal.msg" "materialInfo8.m";
connectAttr "Transparent.oc" "SB_MiddleFloor_PlatStairs_GeoSG7.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG7.msg" "materialInfo9.sg";
connectAttr "Transparent.msg" "materialInfo9.m";
connectAttr "M_LightBlue.oc" "SB_MiddleFloor_PlatStairs_GeoSG8.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG8.msg" "materialInfo10.sg";
connectAttr "M_LightBlue.msg" "materialInfo10.m";
connectAttr "MaterialFBXASC046001.oc" "SB_MiddleFloor_PlatStairs_GeoSG9.ss";
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG9.msg" "materialInfo11.sg";
connectAttr "MaterialFBXASC046001.msg" "materialInfo11.m";
connectAttr "MaterialFBXASC046003.oc" "SB_MiddleFloorBase_GeoSG.ss";
connectAttr "SB_MiddleFloorBase_GeoSG.msg" "materialInfo12.sg";
connectAttr "MaterialFBXASC046003.msg" "materialInfo12.m";
connectAttr "WorldGridMaterial1.oc" "SB_MainStairCase_Stairs_GeoSG.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG.msg" "materialInfo13.sg";
connectAttr "WorldGridMaterial1.msg" "materialInfo13.m";
connectAttr "M_Grey1.oc" "SB_MainStairCase_Stairs_GeoSG1.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG1.msg" "materialInfo14.sg";
connectAttr "M_Grey1.msg" "materialInfo14.m";
connectAttr "M_BlueGrey1.oc" "SB_MainStairCase_Stairs_GeoSG2.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG2.msg" "materialInfo15.sg";
connectAttr "M_BlueGrey1.msg" "materialInfo15.m";
connectAttr "M_DarkGrey1.oc" "SB_MainStairCase_Stairs_GeoSG3.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG3.msg" "materialInfo16.sg";
connectAttr "M_DarkGrey1.msg" "materialInfo16.m";
connectAttr "M_LightBlueGrey1.oc" "SB_MainStairCase_Stairs_GeoSG4.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG4.msg" "materialInfo17.sg";
connectAttr "M_LightBlueGrey1.msg" "materialInfo17.m";
connectAttr "M_DarkBlueGrey1.oc" "SB_MainStairCase_Stairs_GeoSG5.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG5.msg" "materialInfo18.sg";
connectAttr "M_DarkBlueGrey1.msg" "materialInfo18.m";
connectAttr "M_Teal1.oc" "SB_MainStairCase_Stairs_GeoSG6.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG6.msg" "materialInfo19.sg";
connectAttr "M_Teal1.msg" "materialInfo19.m";
connectAttr "Transparent1.oc" "SB_MainStairCase_Stairs_GeoSG7.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG7.msg" "materialInfo20.sg";
connectAttr "Transparent1.msg" "materialInfo20.m";
connectAttr "M_LightBlue1.oc" "SB_MainStairCase_Stairs_GeoSG8.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG8.msg" "materialInfo21.sg";
connectAttr "M_LightBlue1.msg" "materialInfo21.m";
connectAttr "MaterialFBXASC046004.oc" "SB_MainStairCase_Stairs_GeoSG9.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG9.msg" "materialInfo22.sg";
connectAttr "MaterialFBXASC046004.msg" "materialInfo22.m";
connectAttr "WorldGridMaterial2.oc" "BASE_CAVE_GEO_StaticMeshSG.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG.msg" "materialInfo23.sg";
connectAttr "WorldGridMaterial2.msg" "materialInfo23.m";
connectAttr "M_Grey2.oc" "BASE_CAVE_GEO_StaticMeshSG1.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG1.msg" "materialInfo24.sg";
connectAttr "M_Grey2.msg" "materialInfo24.m";
connectAttr "M_BlueGrey2.oc" "BASE_CAVE_GEO_StaticMeshSG2.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG2.msg" "materialInfo25.sg";
connectAttr "M_BlueGrey2.msg" "materialInfo25.m";
connectAttr "M_DarkGrey2.oc" "BASE_CAVE_GEO_StaticMeshSG3.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG3.msg" "materialInfo26.sg";
connectAttr "M_DarkGrey2.msg" "materialInfo26.m";
connectAttr "M_LightBlueGrey2.oc" "BASE_CAVE_GEO_StaticMeshSG4.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG4.msg" "materialInfo27.sg";
connectAttr "M_LightBlueGrey2.msg" "materialInfo27.m";
connectAttr "M_DarkBlueGrey2.oc" "BASE_CAVE_GEO_StaticMeshSG5.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG5.msg" "materialInfo28.sg";
connectAttr "M_DarkBlueGrey2.msg" "materialInfo28.m";
connectAttr "M_Teal2.oc" "BASE_CAVE_GEO_StaticMeshSG6.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG6.msg" "materialInfo29.sg";
connectAttr "M_Teal2.msg" "materialInfo29.m";
connectAttr "Transparent2.oc" "BASE_CAVE_GEO_StaticMeshSG7.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG7.msg" "materialInfo30.sg";
connectAttr "Transparent2.msg" "materialInfo30.m";
connectAttr "M_LightBlue2.oc" "BASE_CAVE_GEO_StaticMeshSG8.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG8.msg" "materialInfo31.sg";
connectAttr "M_LightBlue2.msg" "materialInfo31.m";
connectAttr "MaterialFBXASC046005.oc" "BASE_CAVE_GEO_StaticMeshSG9.ss";
connectAttr "BASE_CAVE_GEO_StaticMeshSG9.msg" "materialInfo32.sg";
connectAttr "MaterialFBXASC046005.msg" "materialInfo32.m";
connectAttr "MaterialFBXASC046006.oc" "SB_RailingtoLB_GeoSG.ss";
connectAttr "SB_RailingtoLB_GeoSG.msg" "materialInfo33.sg";
connectAttr "MaterialFBXASC046006.msg" "materialInfo33.m";
connectAttr "MaterialFBXASC046007.oc" "SB_MiddleFloorBase_GeoSG1.ss";
connectAttr "SB_MiddleFloorBase_GeoSG1.msg" "materialInfo34.sg";
connectAttr "MaterialFBXASC046007.msg" "materialInfo34.m";
connectAttr "WorldGridMaterial3.oc" "SB_MainStairCase_Stairs_GeoSG10.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG10.msg" "materialInfo35.sg";
connectAttr "WorldGridMaterial3.msg" "materialInfo35.m";
connectAttr "M_Grey3.oc" "SB_MainStairCase_Stairs_GeoSG11.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG11.msg" "materialInfo36.sg";
connectAttr "M_Grey3.msg" "materialInfo36.m";
connectAttr "M_BlueGrey3.oc" "SB_MainStairCase_Stairs_GeoSG12.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG12.msg" "materialInfo37.sg";
connectAttr "M_BlueGrey3.msg" "materialInfo37.m";
connectAttr "M_DarkGrey3.oc" "SB_MainStairCase_Stairs_GeoSG13.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG13.msg" "materialInfo38.sg";
connectAttr "M_DarkGrey3.msg" "materialInfo38.m";
connectAttr "M_LightBlueGrey3.oc" "SB_MainStairCase_Stairs_GeoSG14.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG14.msg" "materialInfo39.sg";
connectAttr "M_LightBlueGrey3.msg" "materialInfo39.m";
connectAttr "M_DarkBlueGrey3.oc" "SB_MainStairCase_Stairs_GeoSG15.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG15.msg" "materialInfo40.sg";
connectAttr "M_DarkBlueGrey3.msg" "materialInfo40.m";
connectAttr "M_Teal3.oc" "SB_MainStairCase_Stairs_GeoSG16.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG16.msg" "materialInfo41.sg";
connectAttr "M_Teal3.msg" "materialInfo41.m";
connectAttr "Transparent3.oc" "SB_MainStairCase_Stairs_GeoSG17.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG17.msg" "materialInfo42.sg";
connectAttr "Transparent3.msg" "materialInfo42.m";
connectAttr "M_LightBlue3.oc" "SB_MainStairCase_Stairs_GeoSG18.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG18.msg" "materialInfo43.sg";
connectAttr "M_LightBlue3.msg" "materialInfo43.m";
connectAttr "MaterialFBXASC046008.oc" "SB_MainStairCase_Stairs_GeoSG19.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG19.msg" "materialInfo44.sg";
connectAttr "MaterialFBXASC046008.msg" "materialInfo44.m";
connectAttr "MaterialFBXASC046009.oc" "SB_MiddleFloorBase_GeoSG2.ss";
connectAttr "SB_MiddleFloorBase_GeoSG2.msg" "materialInfo45.sg";
connectAttr "MaterialFBXASC046009.msg" "materialInfo45.m";
connectAttr "WorldGridMaterial4.oc" "SB_MainStairCase_Stairs_GeoSG20.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG20.msg" "materialInfo46.sg";
connectAttr "WorldGridMaterial4.msg" "materialInfo46.m";
connectAttr "M_Grey4.oc" "SB_MainStairCase_Stairs_GeoSG21.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG21.msg" "materialInfo47.sg";
connectAttr "M_Grey4.msg" "materialInfo47.m";
connectAttr "M_BlueGrey4.oc" "SB_MainStairCase_Stairs_GeoSG22.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG22.msg" "materialInfo48.sg";
connectAttr "M_BlueGrey4.msg" "materialInfo48.m";
connectAttr "M_DarkGrey4.oc" "SB_MainStairCase_Stairs_GeoSG23.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG23.msg" "materialInfo49.sg";
connectAttr "M_DarkGrey4.msg" "materialInfo49.m";
connectAttr "M_LightBlueGrey4.oc" "SB_MainStairCase_Stairs_GeoSG24.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG24.msg" "materialInfo50.sg";
connectAttr "M_LightBlueGrey4.msg" "materialInfo50.m";
connectAttr "M_DarkBlueGrey4.oc" "SB_MainStairCase_Stairs_GeoSG25.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG25.msg" "materialInfo51.sg";
connectAttr "M_DarkBlueGrey4.msg" "materialInfo51.m";
connectAttr "M_Teal4.oc" "SB_MainStairCase_Stairs_GeoSG26.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG26.msg" "materialInfo52.sg";
connectAttr "M_Teal4.msg" "materialInfo52.m";
connectAttr "Transparent4.oc" "SB_MainStairCase_Stairs_GeoSG27.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG27.msg" "materialInfo53.sg";
connectAttr "Transparent4.msg" "materialInfo53.m";
connectAttr "M_LightBlue4.oc" "SB_MainStairCase_Stairs_GeoSG28.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG28.msg" "materialInfo54.sg";
connectAttr "M_LightBlue4.msg" "materialInfo54.m";
connectAttr "MaterialFBXASC046010.oc" "SB_MainStairCase_Stairs_GeoSG29.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG29.msg" "materialInfo55.sg";
connectAttr "MaterialFBXASC046010.msg" "materialInfo55.m";
connectAttr "ShellBeveled:Material_002.oc" "ShellBeveled:Material_001.ss";
connectAttr "ShellBeveled:Material_001.msg" "ShellBeveled:materialInfo1.sg";
connectAttr "ShellBeveled:Material_002.msg" "ShellBeveled:materialInfo1.m";
connectAttr "ShellBeveled:WorldGridMaterial1.oc" "ShellBeveled:WorldGridMaterial.ss"
		;
connectAttr "ShellBeveled:WorldGridMaterial.msg" "ShellBeveled:materialInfo2.sg"
		;
connectAttr "ShellBeveled:WorldGridMaterial1.msg" "ShellBeveled:materialInfo2.m"
		;
connectAttr "ShellBeveled:Material_004.oc" "ShellBeveled:Material_003.ss";
connectAttr "ShellBeveled:Material_003.msg" "ShellBeveled:materialInfo3.sg";
connectAttr "ShellBeveled:Material_004.msg" "ShellBeveled:materialInfo3.m";
connectAttr "ShellBeveled1:Material_003.oc" "ShellBeveled1:Material_002.ss";
connectAttr "ShellBeveled1:Material_002.msg" "ShellBeveled1:materialInfo1.sg";
connectAttr "ShellBeveled1:Material_003.msg" "ShellBeveled1:materialInfo1.m";
connectAttr "MaterialFBXASC046011.oc" "SB_MiddleFloorBase_GeoSG3.ss";
connectAttr "SB_MiddleFloorBase_GeoSG3.msg" "materialInfo56.sg";
connectAttr "MaterialFBXASC046011.msg" "materialInfo56.m";
connectAttr "WorldGridMaterial5.oc" "SB_MainStairCase_Stairs_GeoSG30.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG30.msg" "materialInfo57.sg";
connectAttr "WorldGridMaterial5.msg" "materialInfo57.m";
connectAttr "M_Grey5.oc" "SB_MainStairCase_Stairs_GeoSG31.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG31.msg" "materialInfo58.sg";
connectAttr "M_Grey5.msg" "materialInfo58.m";
connectAttr "M_BlueGrey5.oc" "SB_MainStairCase_Stairs_GeoSG32.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG32.msg" "materialInfo59.sg";
connectAttr "M_BlueGrey5.msg" "materialInfo59.m";
connectAttr "M_DarkGrey5.oc" "SB_MainStairCase_Stairs_GeoSG33.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG33.msg" "materialInfo60.sg";
connectAttr "M_DarkGrey5.msg" "materialInfo60.m";
connectAttr "M_LightBlueGrey5.oc" "SB_MainStairCase_Stairs_GeoSG34.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG34.msg" "materialInfo61.sg";
connectAttr "M_LightBlueGrey5.msg" "materialInfo61.m";
connectAttr "M_DarkBlueGrey5.oc" "SB_MainStairCase_Stairs_GeoSG35.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG35.msg" "materialInfo62.sg";
connectAttr "M_DarkBlueGrey5.msg" "materialInfo62.m";
connectAttr "M_Teal5.oc" "SB_MainStairCase_Stairs_GeoSG36.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG36.msg" "materialInfo63.sg";
connectAttr "M_Teal5.msg" "materialInfo63.m";
connectAttr "Transparent5.oc" "SB_MainStairCase_Stairs_GeoSG37.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG37.msg" "materialInfo64.sg";
connectAttr "Transparent5.msg" "materialInfo64.m";
connectAttr "M_LightBlue5.oc" "SB_MainStairCase_Stairs_GeoSG38.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG38.msg" "materialInfo65.sg";
connectAttr "M_LightBlue5.msg" "materialInfo65.m";
connectAttr "MaterialFBXASC046012.oc" "SB_MainStairCase_Stairs_GeoSG39.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG39.msg" "materialInfo66.sg";
connectAttr "MaterialFBXASC046012.msg" "materialInfo66.m";
connectAttr "MaterialFBXASC046013.oc" "SB_MiddleFloorBase_GeoSG4.ss";
connectAttr "SB_MiddleFloorBase_GeoSG4.msg" "materialInfo67.sg";
connectAttr "MaterialFBXASC046013.msg" "materialInfo67.m";
connectAttr "WorldGridMaterial6.oc" "SB_MainStairCase_Stairs_GeoSG40.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG40.msg" "materialInfo68.sg";
connectAttr "WorldGridMaterial6.msg" "materialInfo68.m";
connectAttr "M_Grey6.oc" "SB_MainStairCase_Stairs_GeoSG41.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG41.msg" "materialInfo69.sg";
connectAttr "M_Grey6.msg" "materialInfo69.m";
connectAttr "M_BlueGrey6.oc" "SB_MainStairCase_Stairs_GeoSG42.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG42.msg" "materialInfo70.sg";
connectAttr "M_BlueGrey6.msg" "materialInfo70.m";
connectAttr "M_DarkGrey6.oc" "SB_MainStairCase_Stairs_GeoSG43.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG43.msg" "materialInfo71.sg";
connectAttr "M_DarkGrey6.msg" "materialInfo71.m";
connectAttr "M_LightBlueGrey6.oc" "SB_MainStairCase_Stairs_GeoSG44.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG44.msg" "materialInfo72.sg";
connectAttr "M_LightBlueGrey6.msg" "materialInfo72.m";
connectAttr "M_DarkBlueGrey6.oc" "SB_MainStairCase_Stairs_GeoSG45.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG45.msg" "materialInfo73.sg";
connectAttr "M_DarkBlueGrey6.msg" "materialInfo73.m";
connectAttr "M_Teal6.oc" "SB_MainStairCase_Stairs_GeoSG46.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG46.msg" "materialInfo74.sg";
connectAttr "M_Teal6.msg" "materialInfo74.m";
connectAttr "Transparent6.oc" "SB_MainStairCase_Stairs_GeoSG47.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG47.msg" "materialInfo75.sg";
connectAttr "Transparent6.msg" "materialInfo75.m";
connectAttr "M_LightBlue6.oc" "SB_MainStairCase_Stairs_GeoSG48.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG48.msg" "materialInfo76.sg";
connectAttr "M_LightBlue6.msg" "materialInfo76.m";
connectAttr "MaterialFBXASC046014.oc" "SB_MainStairCase_Stairs_GeoSG49.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG49.msg" "materialInfo77.sg";
connectAttr "MaterialFBXASC046014.msg" "materialInfo77.m";
connectAttr "MaterialFBXASC046015.oc" "SB_MiddleFloorBase_GeoSG5.ss";
connectAttr "SB_MiddleFloorBase_GeoSG5.msg" "materialInfo78.sg";
connectAttr "MaterialFBXASC046015.msg" "materialInfo78.m";
connectAttr "WorldGridMaterial7.oc" "SB_MainStairCase_Stairs_GeoSG50.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG50.msg" "materialInfo79.sg";
connectAttr "WorldGridMaterial7.msg" "materialInfo79.m";
connectAttr "M_Grey7.oc" "SB_MainStairCase_Stairs_GeoSG51.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG51.msg" "materialInfo80.sg";
connectAttr "M_Grey7.msg" "materialInfo80.m";
connectAttr "M_BlueGrey7.oc" "SB_MainStairCase_Stairs_GeoSG52.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG52.msg" "materialInfo81.sg";
connectAttr "M_BlueGrey7.msg" "materialInfo81.m";
connectAttr "M_DarkGrey7.oc" "SB_MainStairCase_Stairs_GeoSG53.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG53.msg" "materialInfo82.sg";
connectAttr "M_DarkGrey7.msg" "materialInfo82.m";
connectAttr "M_LightBlueGrey7.oc" "SB_MainStairCase_Stairs_GeoSG54.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG54.msg" "materialInfo83.sg";
connectAttr "M_LightBlueGrey7.msg" "materialInfo83.m";
connectAttr "M_DarkBlueGrey7.oc" "SB_MainStairCase_Stairs_GeoSG55.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG55.msg" "materialInfo84.sg";
connectAttr "M_DarkBlueGrey7.msg" "materialInfo84.m";
connectAttr "M_Teal7.oc" "SB_MainStairCase_Stairs_GeoSG56.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG56.msg" "materialInfo85.sg";
connectAttr "M_Teal7.msg" "materialInfo85.m";
connectAttr "Transparent7.oc" "SB_MainStairCase_Stairs_GeoSG57.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG57.msg" "materialInfo86.sg";
connectAttr "Transparent7.msg" "materialInfo86.m";
connectAttr "M_LightBlue7.oc" "SB_MainStairCase_Stairs_GeoSG58.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG58.msg" "materialInfo87.sg";
connectAttr "M_LightBlue7.msg" "materialInfo87.m";
connectAttr "MaterialFBXASC046016.oc" "SB_MainStairCase_Stairs_GeoSG59.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG59.msg" "materialInfo88.sg";
connectAttr "MaterialFBXASC046016.msg" "materialInfo88.m";
connectAttr "MaterialFBXASC046017.oc" "WorkSG.ss";
connectAttr "WorkSG.msg" "materialInfo89.sg";
connectAttr "MaterialFBXASC046017.msg" "materialInfo89.m";
connectAttr "MaterialFBXASC046018.oc" "SB_MiddleFloorBase_GeoSG6.ss";
connectAttr "SB_MiddleFloorBase_GeoSG6.msg" "materialInfo90.sg";
connectAttr "MaterialFBXASC046018.msg" "materialInfo90.m";
connectAttr "WorldGridMaterial8.oc" "SB_MainStairCase_Stairs_GeoSG60.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG60.msg" "materialInfo91.sg";
connectAttr "WorldGridMaterial8.msg" "materialInfo91.m";
connectAttr "M_Grey8.oc" "SB_MainStairCase_Stairs_GeoSG61.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG61.msg" "materialInfo92.sg";
connectAttr "M_Grey8.msg" "materialInfo92.m";
connectAttr "M_BlueGrey8.oc" "SB_MainStairCase_Stairs_GeoSG62.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG62.msg" "materialInfo93.sg";
connectAttr "M_BlueGrey8.msg" "materialInfo93.m";
connectAttr "M_DarkGrey8.oc" "SB_MainStairCase_Stairs_GeoSG63.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG63.msg" "materialInfo94.sg";
connectAttr "M_DarkGrey8.msg" "materialInfo94.m";
connectAttr "M_LightBlueGrey8.oc" "SB_MainStairCase_Stairs_GeoSG64.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG64.msg" "materialInfo95.sg";
connectAttr "M_LightBlueGrey8.msg" "materialInfo95.m";
connectAttr "M_DarkBlueGrey8.oc" "SB_MainStairCase_Stairs_GeoSG65.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG65.msg" "materialInfo96.sg";
connectAttr "M_DarkBlueGrey8.msg" "materialInfo96.m";
connectAttr "M_Teal8.oc" "SB_MainStairCase_Stairs_GeoSG66.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG66.msg" "materialInfo97.sg";
connectAttr "M_Teal8.msg" "materialInfo97.m";
connectAttr "Transparent8.oc" "SB_MainStairCase_Stairs_GeoSG67.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG67.msg" "materialInfo98.sg";
connectAttr "Transparent8.msg" "materialInfo98.m";
connectAttr "M_LightBlue8.oc" "SB_MainStairCase_Stairs_GeoSG68.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG68.msg" "materialInfo99.sg";
connectAttr "M_LightBlue8.msg" "materialInfo99.m";
connectAttr "MaterialFBXASC046019.oc" "SB_MainStairCase_Stairs_GeoSG69.ss";
connectAttr "SB_MainStairCase_Stairs_GeoSG69.msg" "materialInfo100.sg";
connectAttr "MaterialFBXASC046019.msg" "materialInfo100.m";
connectAttr "lambert2.oc" "lambert2SG.ss";
connectAttr "lambert2SG.msg" "materialInfo101.sg";
connectAttr "lambert2.msg" "materialInfo101.m";
connectAttr "MaterialFBXASC046020.oc" "f2_floor_2SG.ss";
connectAttr "f2_floor_2SG.msg" "materialInfo102.sg";
connectAttr "MaterialFBXASC046020.msg" "materialInfo102.m";
connectAttr "layerManager.dli[1]" "layer1.id";
connectAttr "polySurfaceShape1.o" "polyLayoutUV1.ip";
connectAttr "polySurfaceShape2.o" "polyLayoutUV2.ip";
connectAttr "polySurfaceShape3.o" "polyLayoutUV3.ip";
connectAttr "polySurfaceShape4.o" "polyLayoutUV4.ip";
connectAttr "polySurfaceShape5.o" "polyLayoutUV5.ip";
connectAttr "polySurfaceShape6.o" "polyLayoutUV6.ip";
connectAttr "polySurfaceShape7.o" "polyLayoutUV7.ip";
connectAttr "polySurfaceShape8.o" "polyLayoutUV8.ip";
connectAttr "polySurfaceShape9.o" "polyLayoutUV9.ip";
connectAttr "polySurfaceShape10.o" "polyLayoutUV10.ip";
connectAttr "polySurfaceShape11.o" "polyLayoutUV11.ip";
connectAttr "polySurfaceShape12.o" "polyLayoutUV12.ip";
connectAttr "polySurfaceShape13.o" "polyLayoutUV13.ip";
connectAttr "polySurfaceShape14.o" "polyLayoutUV14.ip";
connectAttr "polySurfaceShape15.o" "polyLayoutUV15.ip";
connectAttr "polyLayoutUV1.out" "polyTweakUV1.ip";
connectAttr "polyLayoutUV2.out" "polyTweakUV2.ip";
connectAttr "polyLayoutUV3.out" "polyTweakUV3.ip";
connectAttr "polyLayoutUV4.out" "polyTweakUV4.ip";
connectAttr "polyLayoutUV5.out" "polyTweakUV5.ip";
connectAttr "polyLayoutUV6.out" "polyTweakUV6.ip";
connectAttr "polyLayoutUV7.out" "polyTweakUV7.ip";
connectAttr "polyLayoutUV8.out" "polyTweakUV8.ip";
connectAttr "polyLayoutUV9.out" "polyTweakUV9.ip";
connectAttr "polyLayoutUV10.out" "polyTweakUV10.ip";
connectAttr "polyLayoutUV11.out" "polyTweakUV11.ip";
connectAttr "polyLayoutUV12.out" "polyTweakUV12.ip";
connectAttr "polyLayoutUV13.out" "polyTweakUV13.ip";
connectAttr "polyLayoutUV14.out" "polyTweakUV14.ip";
connectAttr "polyLayoutUV15.out" "polyTweakUV15.ip";
connectAttr "SB_OuterShellMain_GeoSG.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG1.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG2.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG3.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG4.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG5.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG6.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG7.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG8.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloor_PlatStairs_GeoSG9.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloorBase_GeoSG.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG1.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG2.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG3.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG4.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG5.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG6.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG7.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG8.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG9.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG1.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG2.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG3.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG4.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG5.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG6.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG7.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG8.pa" ":renderPartition.st" -na;
connectAttr "BASE_CAVE_GEO_StaticMeshSG9.pa" ":renderPartition.st" -na;
connectAttr "SB_RailingtoLB_GeoSG.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloorBase_GeoSG1.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG10.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG11.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG12.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG13.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG14.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG15.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG16.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG17.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG18.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG19.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloorBase_GeoSG2.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG20.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG21.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG22.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG23.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG24.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG25.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG26.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG27.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG28.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG29.pa" ":renderPartition.st" -na;
connectAttr "ShellBeveled:Material_001.pa" ":renderPartition.st" -na;
connectAttr "ShellBeveled:WorldGridMaterial.pa" ":renderPartition.st" -na;
connectAttr "ShellBeveled:Material_003.pa" ":renderPartition.st" -na;
connectAttr "ShellBeveled1:Material_002.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloorBase_GeoSG3.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG30.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG31.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG32.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG33.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG34.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG35.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG36.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG37.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG38.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG39.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloorBase_GeoSG4.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG40.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG41.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG42.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG43.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG44.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG45.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG46.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG47.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG48.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG49.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloorBase_GeoSG5.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG50.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG51.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG52.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG53.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG54.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG55.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG56.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG57.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG58.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG59.pa" ":renderPartition.st" -na;
connectAttr "WorkSG.pa" ":renderPartition.st" -na;
connectAttr "SB_MiddleFloorBase_GeoSG6.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG60.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG61.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG62.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG63.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG64.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG65.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG66.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG67.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG68.pa" ":renderPartition.st" -na;
connectAttr "SB_MainStairCase_Stairs_GeoSG69.pa" ":renderPartition.st" -na;
connectAttr "lambert2SG.pa" ":renderPartition.st" -na;
connectAttr "f2_floor_2SG.pa" ":renderPartition.st" -na;
connectAttr "MaterialFBXASC046002.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046001.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046003.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial1.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey1.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey1.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey1.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey1.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey1.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal1.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent1.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue1.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046004.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial2.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey2.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey2.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey2.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey2.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey2.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal2.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent2.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue2.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046005.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046006.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046007.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial3.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey3.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey3.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey3.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey3.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey3.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal3.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent3.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue3.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046008.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046009.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial4.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey4.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey4.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey4.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey4.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey4.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal4.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent4.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue4.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046010.msg" ":defaultShaderList1.s" -na;
connectAttr "ShellBeveled:Material_002.msg" ":defaultShaderList1.s" -na;
connectAttr "ShellBeveled:WorldGridMaterial1.msg" ":defaultShaderList1.s" -na;
connectAttr "ShellBeveled:Material_004.msg" ":defaultShaderList1.s" -na;
connectAttr "ShellBeveled1:Material_003.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046011.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial5.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey5.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey5.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey5.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey5.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey5.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal5.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent5.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue5.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046012.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046013.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial6.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey6.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey6.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey6.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey6.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey6.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal6.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent6.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue6.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046014.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046015.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial7.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey7.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey7.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey7.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey7.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey7.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal7.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent7.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue7.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046016.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046017.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046018.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial8.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Grey8.msg" ":defaultShaderList1.s" -na;
connectAttr "M_BlueGrey8.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey8.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlueGrey8.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkBlueGrey8.msg" ":defaultShaderList1.s" -na;
connectAttr "M_Teal8.msg" ":defaultShaderList1.s" -na;
connectAttr "Transparent8.msg" ":defaultShaderList1.s" -na;
connectAttr "M_LightBlue8.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046019.msg" ":defaultShaderList1.s" -na;
connectAttr "lambert2.msg" ":defaultShaderList1.s" -na;
connectAttr "MaterialFBXASC046020.msg" ":defaultShaderList1.s" -na;
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "Topfloor_PlatformShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Topfloor_dividerShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "topfloor_wallShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Staircase_Platform1Shape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Staircase_PlatformShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "MiddleFloor_WallShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "middlefloor_platformShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "bottomfloor_wallShape1.iog" ":initialShadingGroup.dsm" -na;
connectAttr "bottomfloor_wallShape2.iog" ":initialShadingGroup.dsm" -na;
connectAttr "bottomfloor_floorShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "topfloor_wallShape2.iog" ":initialShadingGroup.dsm" -na;
connectAttr "topfloor_wallShape3.iog" ":initialShadingGroup.dsm" -na;
connectAttr "topfloor_floorShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "middlefloor_floorShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "outershellShape.iog" ":initialShadingGroup.dsm" -na;
// End of SecurityBuilding_01.ma
