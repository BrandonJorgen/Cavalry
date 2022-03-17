//Maya ASCII 2022 scene
//Name: FacilityShield.ma
//Last modified: Wed, Mar 16, 2022 12:09:05 PM
//Codeset: 1252
file -rdi 1 -ns "launch_facility" -rfn "launch_facilityRN" -op "v=0;" -typ "mayaAscii"
		 "F:/Cavalry/Maya Project Files/Env/Facility/launch_facility.ma";
file -r -ns "launch_facility" -dr 1 -rfn "launch_facilityRN" -op "v=0;" -typ "mayaAscii"
		 "F:/Cavalry/Maya Project Files/Env/Facility/launch_facility.ma";
requires maya "2022";
requires "stereoCamera" "10.0";
requires "mtoa" "4.2.1";
currentUnit -l centimeter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2022";
fileInfo "version" "2022";
fileInfo "cutIdentifier" "202102181415-29bfc1879c";
fileInfo "osv" "Windows 10 Home v2009 (Build: 22000)";
fileInfo "UUID" "0ED3DC00-4380-7CC4-852B-D7BFA21FDF23";
createNode transform -s -n "persp";
	rename -uid "70A6925B-463D-2E82-141C-57B1923B55C9";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 981.92383980424768 5412.9953856201773 12763.788465872498 ;
	setAttr ".r" -type "double3" -9.33835272952828 364.19999999996429 0 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "C19414CC-498F-6F6C-F1DC-1899890AF5B2";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 1;
	setAttr ".fcp" 1000000;
	setAttr ".coi" 13655.581778171583;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".tp" -type "double3" -2.9802322387695312e-05 1985.9890360579157 356.54970228672028 ;
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "DB5AC379-4AEC-3F23-ABC2-82925396B84E";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 1000.1 0 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "9479EC27-405D-8685-2DA6-6C91B8390DD8";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".fcp" 1000000;
	setAttr ".coi" 1000.1;
	setAttr ".ow" 30;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "E726D81C-4AC8-FB4F-63AD-0AA7A70BD44B";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 1000.1 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "A4FFC8E7-4997-0BC9-B172-42A4825FD70C";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".fcp" 1000000;
	setAttr ".coi" 1000.1;
	setAttr ".ow" 30;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "side";
	rename -uid "12CFC5AB-4405-E85B-9BD9-D8936B263150";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 1000.1 0 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "8669C34C-46D5-A8D0-DC5E-D98A6F1D9607";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".fcp" 1000000;
	setAttr ".coi" 1000.1;
	setAttr ".ow" 30;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -n "shield_mesh";
	rename -uid "2C9CBAC2-457B-BB0B-FCA6-0FBCCAAE2294";
	setAttr ".rp" -type "double3" 0 1937.6478580797557 125.97489356994629 ;
	setAttr ".sp" -type "double3" 0 1937.6478580797557 125.97489356994629 ;
createNode mesh -n "shield_meshShape" -p "shield_mesh";
	rename -uid "AB5EAB4E-4C71-880B-5FB3-CCACA188542B";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.61696955561637878 0.62143039703369141 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode fosterParent -n "launch_facilityRNfosterParent1";
	rename -uid "2D329730-4B34-725C-CF80-13A643B001F5";
createNode transform -n "transform1" -p "launch_facilityRNfosterParent1";
	rename -uid "4CC1476C-4166-4701-481D-5D8C2563CD4A";
	setAttr ".v" no;
createNode transform -n "polySurface1" -p "launch_facilityRNfosterParent1";
	rename -uid "CDD89075-4DF7-8CA9-FCC7-F99A3B0C5905";
	setAttr ".t" -type "double3" 0 0 1.1368683772161603e-16 ;
createNode mesh -n "polySurfaceShape1" -p "polySurface1";
	rename -uid "163B402E-4DC1-9985-9165-A1AD8EF0A39E";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "launch_facility:polySurfaceShape22" -p "launch_facilityRNfosterParent1";
	rename -uid "0913976F-473C-0E8F-9B3B-D39B4746BC43";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 14 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[36]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottom";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 2 "f[8:15]" "f[37]";
	setAttr ".gtag[2].gtagnm" -type "string" "bottomRing";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "e[0:7]";
	setAttr ".gtag[3].gtagnm" -type "string" "cylBottomCap";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 2 "vtx[0:7]" "vtx[16]";
	setAttr ".gtag[4].gtagnm" -type "string" "cylBottomRing";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "vtx[0:7]";
	setAttr ".gtag[5].gtagnm" -type "string" "cylSides";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 1 "vtx[0:15]";
	setAttr ".gtag[6].gtagnm" -type "string" "cylTopCap";
	setAttr ".gtag[6].gtagcmp" -type "componentList" 2 "vtx[8:15]" "vtx[17]";
	setAttr ".gtag[7].gtagnm" -type "string" "cylTopRing";
	setAttr ".gtag[7].gtagcmp" -type "componentList" 1 "vtx[8:15]";
	setAttr ".gtag[8].gtagnm" -type "string" "front";
	setAttr ".gtag[8].gtagcmp" -type "componentList" 1 "f[34]";
	setAttr ".gtag[9].gtagnm" -type "string" "left";
	setAttr ".gtag[9].gtagcmp" -type "componentList" 1 "f[39]";
	setAttr ".gtag[10].gtagnm" -type "string" "right";
	setAttr ".gtag[10].gtagcmp" -type "componentList" 1 "f[38]";
	setAttr ".gtag[11].gtagnm" -type "string" "sides";
	setAttr ".gtag[11].gtagcmp" -type "componentList" 1 "f[0:7]";
	setAttr ".gtag[12].gtagnm" -type "string" "top";
	setAttr ".gtag[12].gtagcmp" -type "componentList" 2 "f[16:23]" "f[35]";
	setAttr ".gtag[13].gtagnm" -type "string" "topRing";
	setAttr ".gtag[13].gtagcmp" -type "componentList" 1 "e[8:15]";
	setAttr ".pv" -type "double2" 0.58982560038566589 0.77512046694755554 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 126 ".uvst[0].uvsp[0:125]" -type "float2" 0.625 0.19400728
		 0.37569019 0.19400728 0.37569019 0.24188493 0.625 0.24188493 0.625 0.50811505 0.37517193
		 0.50811505 0.3751719 0.55599272 0.625 0.55599272 0.375 0.3125 0.375 0.68843985 0.390625
		 0.68843985 0.390625 0.3125 0.875 0.19400728 0.875 0.24188493 0.5625 0.3125 0.5625
		 0.68843985 0.59375 0.68843985 0.59375 0.3125 0.52314174 0.096749023 0.54628354 0.10633466
		 0.61048543 0.04576458 0.55524272 0.022882298 0.54628354 0.88640171 0.52314174 0.89598739
		 0.55524272 0.97711772 0.61048543 0.95423543 0.375 0.3125 0.375 0.68843985 0.56545484
		 0.1526182 0.54628348 0.19890174 0.61048543 0.26673543 0.65625 0.15625 0.54628348
		 0.79383457 0.56545484 0.84011817 0.65625 0.84375 0.61048543 0.73326457 0.59375 0.3125
		 0.625 0.3125 0.625 0.68843985 0.59375 0.68843985 0.61048543 0.04576458 0.54628354
		 0.10633466 0.54628354 0.88640171 0.61048543 0.95423543 0.5546875 0.68843985 0.5546875
		 0.3125 0.5625 0.3125 0.5625 0.68843985 0.53471261 0.20369455 0.58286405 0.27817658
		 0.54628354 0.10633466 0.64886802 0.13842833 0.62458783 0.14736862 0.59657294 0.079875179
		 0.62090361 0.07091631 0.53471261 0.78904176 0.58286405 0.72182345 0.5546875 0.68843985
		 0.5546875 0.3125 0.54628354 0.88640171 0.62090361 0.9290837 0.59657294 0.91784364
		 0.62458789 0.85035491 0.64886802 0.86157167 0.59375 0.3125 0.59375 0.68843985 0.625
		 0.68843985 0.625 0.3125 0.59375 0.3125 0.625 0.3125 0.625 0.68843985 0.59375 0.68843985
		 0.375 0.3125 0.37499997 0.31249997 0.390625 0.3125 0.390625 0.68843985 0.37499997
		 0.68843979 0.375 0.68843985 0.5625 0.3125 0.5625 0.68843985 0.5546875 0.3125 0.5546875
		 0.68843985 0.65625 0.15625 0.56545484 0.1526182 0.54628354 0.10633466 0.65625 0.84375
		 0.54628354 0.88640171 0.56545484 0.84011817 0.61048543 0.26673543 0.54628348 0.19890174
		 0.54628348 0.79383457 0.61048543 0.73326457 0.375 0.3125 0.375 0.68843985 0.37499997
		 0.68843979 0.37499997 0.31249997 0.58286405 0.27817658 0.53471261 0.20369455 0.5625
		 0.3125 0.5625 0.68843985 0.5546875 0.3125 0.58286405 0.72182345 0.53471261 0.78904176
		 0.5546875 0.68843985 0.61788601 0.68843985 0.625 0.68843985 0.625 0.3125 0.61788601
		 0.3125 0.59879076 0.68843985 0.59879076 0.3125 0.578125 0.68843985 0.63336772 0.78850728
		 0.55586916 0.81697637 0.578125 0.68843985 0.55586916 0.17575997 0.578125 0.3125 0.578125
		 0.3125 0.63336772 0.21149272 0.578125 0.68843985 0.55586916 0.81697637 0.63336772
		 0.78850728 0.578125 0.68843985 0.63336772 0.21149272 0.578125 0.3125 0.578125 0.3125
		 0.55586916 0.17575997;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 16 ".pt";
	setAttr ".pt[22]" -type "float3" 0.020682685 0 0 ;
	setAttr ".pt[23]" -type "float3" 0.0026256137 0 0 ;
	setAttr ".pt[24]" -type "float3" 0.0026256137 0 0 ;
	setAttr ".pt[25]" -type "float3" 0.020682685 0 0 ;
	setAttr ".pt[32]" -type "float3" -0.0058784252 0 0.00091722334 ;
	setAttr ".pt[33]" -type "float3" -0.0058784252 0 0.00091722334 ;
	setAttr ".pt[34]" -type "float3" -0.020682722 0 0 ;
	setAttr ".pt[35]" -type "float3" -0.020682722 0 0 ;
	setAttr ".pt[40]" -type "float3" -0.0026256656 0 7.0874013e-09 ;
	setAttr ".pt[41]" -type "float3" -0.0026256656 0 7.0874013e-09 ;
	setAttr ".pt[42]" -type "float3" 0.0058783609 0 0.00091727637 ;
	setAttr ".pt[43]" -type "float3" 0.0058783609 0 0.00091727637 ;
	setAttr ".pt[49]" -type "float3" -0.083571196 0 0 ;
	setAttr ".pt[50]" -type "float3" -0.083571196 0 0 ;
	setAttr ".pt[52]" -type "float3" 0.083571136 0 0 ;
	setAttr ".pt[55]" -type "float3" 0.083571136 0 0 ;
	setAttr -s 56 ".vt[0:55]"  -1.38077068 2.26329899 -0.67512965 -1.60948265 2.26329899 -0.90418404
		 -1.60948265 2.31329918 -0.90418404 -1.38077068 2.31329918 -0.67512965 -0.74407387 2.31329918 -1.31087458
		 -0.97326136 2.31329918 -1.54040515 -0.97326136 2.26329899 -1.54040515 -0.74407387 2.26329899 -1.31087458
		 -0.73623586 2.26329899 -1.77743065 -0.73623586 2.31329918 -1.77743065 -7.6039645e-18 2.31329918 -1.77743065
		 0 2.26329899 -1.77743065 -1.77743077 2.26329899 0.73623592 -1.77743077 2.31329918 0.73623592
		 -1.77743077 2.31329918 -0.73623592 -1.77743077 2.26329899 -0.73623592 6.9388939e-18 2.26329899 -0.74458492
		 -0.30841717 2.26329899 -0.74458492 -0.30841717 2.31329918 -0.74458492 -9.1023451e-19 2.31329918 -0.74458492
		 0.73623586 2.26329899 -1.77743065 0.73623586 2.31329918 -1.77743065 -0.74458498 2.26329899 -0.3084172
		 -0.99277997 2.26329899 0.30841717 -0.99277997 2.31329918 0.30841717 -0.74458498 2.31329918 -0.3084172
		 -0.3084172 2.26329899 -0.74458492 -0.3084172 2.31329918 -0.74458492 0.30841717 2.26329899 -0.74458492
		 0.30841717 2.31329918 -0.74458492 -1.51713204 2.31329918 0.99653465 -1.51713204 2.26329899 0.99653465
		 -0.9792068 2.26329899 0.64394087 -0.9792068 2.31329918 0.64394087 0.74458498 2.26329899 -0.3084172
		 0.74458498 2.31329918 -0.3084172 0.3084172 2.31329918 -0.74458492 0.3084172 2.26329899 -0.74458492
		 1.77743077 2.26329899 -0.73623592 1.77743077 2.31329918 -0.73623592 0.99277997 2.26329899 0.30841717
		 0.99277997 2.31329918 0.30841717 0.9792068 2.26329899 0.64394087 0.9792068 2.31329918 0.64394087
		 1.77743077 2.26329899 0.73623592 1.77743077 2.31329918 0.73623592 1.51713204 2.26329899 0.99653465
		 1.51713204 2.31329918 0.99653465 -1.77743077 2.31329918 0 -0.86868244 2.31329918 -1.4901161e-08
		 -0.86868244 2.26329899 -1.4901161e-08 -1.77743077 2.26329899 0 0.86868244 2.31329918 -1.4901161e-08
		 1.77743077 2.31329918 0 1.77743077 2.26329899 0 0.86868244 2.26329899 -1.4901161e-08;
	setAttr -s 100 ".ed[0:99]"  0 1 0 1 2 0 2 3 0 3 0 0 4 5 0 5 6 0 6 7 0
		 7 4 0 8 9 0 9 10 0 10 11 1 11 8 0 7 0 0 3 4 0 12 13 0 13 48 0 14 15 0 15 51 0 16 17 0
		 17 8 1 11 16 1 18 19 0 19 10 1 9 18 1 20 11 0 10 21 0 21 20 0 22 50 0 23 12 1 15 22 1
		 24 49 0 25 14 1 13 24 1 22 26 0 26 27 0 27 25 0 25 22 0 20 28 1 28 16 0 29 21 1 19 29 0
		 30 13 0 12 31 0 31 30 0 24 23 0 23 32 0 32 31 0 17 26 0 15 1 0 6 8 0 33 24 0 30 33 0
		 32 33 0 27 18 0 9 5 0 2 14 0 34 35 0 35 36 0 36 37 0 37 34 0 38 20 0 21 39 0 39 38 0
		 16 19 1 40 41 0 41 52 0 34 55 0 42 43 0 43 41 0 40 42 0 38 34 1 37 28 0 29 36 0 35 39 1
		 38 54 0 44 40 1 41 45 1 45 53 0 44 46 0 46 42 0 45 44 0 46 47 0 47 43 0 47 45 0 48 14 0
		 49 25 0 50 23 0 51 12 0 48 49 1 49 50 1 50 51 1 51 48 1 52 35 0 53 39 0 54 44 0 55 40 0
		 52 53 1 53 54 1 54 55 1 55 52 1;
	setAttr -s 46 -ch 200 ".fc[0:45]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 0 1 2 3
		f 4 4 5 6 7
		mu 0 4 4 5 6 7
		f 4 8 9 10 11
		mu 0 4 8 9 10 11
		f 4 12 -4 13 -8
		mu 0 4 12 0 3 13
		f 4 91 84 16 17
		mu 0 4 116 110 16 17
		f 4 18 19 -12 20
		mu 0 4 18 19 20 21
		f 4 21 22 -10 23
		mu 0 4 22 23 24 25
		f 4 24 -11 25 26
		mu 0 4 26 11 10 27
		f 4 27 90 -18 29
		mu 0 4 28 114 117 31
		f 4 88 85 31 -85
		mu 0 4 111 112 33 34
		f 4 33 34 35 36
		mu 0 4 36 37 38 39
		f 4 -21 -25 37 38
		mu 0 4 18 21 40 41
		f 4 39 -26 -23 40
		mu 0 4 42 43 24 23
		f 4 41 -15 42 43
		mu 0 4 44 15 14 45
		f 4 89 -28 -37 -86
		mu 0 4 113 115 36 39
		f 4 45 46 -43 -29
		mu 0 4 29 48 49 30
		f 9 -20 47 -34 -30 48 -1 -13 -7 49
		mu 0 9 20 19 50 28 31 51 52 53 54
		f 4 50 -33 -42 51
		mu 0 4 55 32 35 56
		f 4 -47 52 -52 -44
		mu 0 4 45 48 57 56
		f 4 -46 -45 -51 -53
		mu 0 4 58 46 47 57
		f 9 -32 -36 53 -24 54 -5 -14 -3 55
		mu 0 9 34 33 59 22 25 60 61 62 63
		f 4 56 57 58 59
		mu 0 4 64 65 66 67
		f 4 60 -27 61 62
		mu 0 4 68 69 70 71
		f 6 -48 -19 63 -22 -54 -35
		mu 0 6 72 73 74 75 76 77
		f 4 99 92 -57 66
		mu 0 4 124 118 65 64
		f 4 67 68 -65 69
		mu 0 4 80 81 79 78
		f 5 -61 70 -60 71 -38
		mu 0 5 40 82 83 84 41
		f 5 -62 -40 72 -58 73
		mu 0 5 85 43 42 86 87
		f 4 -71 74 98 -67
		mu 0 4 83 82 122 125
		f 4 96 93 -74 -93
		mu 0 4 119 120 85 87
		f 6 -59 -73 -41 -64 -39 -72
		mu 0 6 92 93 94 75 74 95
		f 4 -76 78 79 -70
		mu 0 4 89 88 96 97
		f 4 97 -75 -63 -94
		mu 0 4 121 123 68 71
		f 4 81 82 -68 -80
		mu 0 4 100 101 81 97
		f 4 -83 83 -77 -69
		mu 0 4 102 101 91 90
		f 4 -82 -79 -81 -84
		mu 0 4 103 100 98 99
		f 4 -55 -9 -50 -6
		mu 0 4 104 105 106 107
		f 4 -17 -56 -2 -49
		mu 0 4 17 16 108 109
		f 4 30 -89 -16 32
		mu 0 4 32 112 111 35
		f 4 -87 -90 -31 44
		mu 0 4 46 115 113 47
		f 4 -91 86 28 -88
		mu 0 4 117 114 29 30
		f 4 14 15 -92 87
		mu 0 4 14 15 110 116
		f 4 76 77 -97 -66
		mu 0 4 90 91 120 119
		f 4 -95 -98 -78 80
		mu 0 4 98 123 121 99
		f 4 -99 94 75 -96
		mu 0 4 125 122 88 89
		f 4 64 65 -100 95
		mu 0 4 78 79 118 124;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "transform2" -p "launch_facilityRNfosterParent1";
	rename -uid "653B00E7-4008-47BD-6FF6-098F4C9626BE";
	setAttr ".v" no;
createNode transform -n "polySurface2" -p "launch_facilityRNfosterParent1";
	rename -uid "762AE1E2-4FAA-EEDE-863A-A6A570B2465F";
createNode mesh -n "polySurfaceShape2" -p "polySurface2";
	rename -uid "B2258A74-4F28-09FC-631B-35B9704AC768";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "7F1743EC-4869-CB37-F58C-E6A8932851BE";
	setAttr -s 11 ".lnk";
	setAttr -s 11 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "4A50C39D-46F8-E8CC-1874-04BC596BB519";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "F6DA1729-4993-41C8-48E7-6AB72D7AE608";
createNode displayLayerManager -n "layerManager";
	rename -uid "904DD9C6-455A-7D53-31FE-33898E2DEB0C";
createNode displayLayer -n "defaultLayer";
	rename -uid "24641E0B-4509-854A-FEBD-D89A0B78BE63";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "D387CD39-47B0-1E6B-218E-2AB2C98E7083";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "4089B151-4AAC-0577-2C66-0DBD118EBC76";
	setAttr ".g" yes;
createNode reference -n "launch_facilityRN";
	rename -uid "B268B399-427B-5168-352E-B08FF0BE3C34";
	setAttr -s 17 ".phl";
	setAttr ".phl[1]" 0;
	setAttr ".phl[2]" 0;
	setAttr ".phl[3]" 0;
	setAttr ".phl[4]" 0;
	setAttr ".phl[5]" 0;
	setAttr ".phl[6]" 0;
	setAttr ".phl[7]" 0;
	setAttr ".phl[8]" 0;
	setAttr ".phl[9]" 0;
	setAttr ".phl[10]" 0;
	setAttr ".phl[11]" 0;
	setAttr ".phl[12]" 0;
	setAttr ".phl[13]" 0;
	setAttr ".phl[14]" 0;
	setAttr ".phl[15]" 0;
	setAttr ".phl[16]" 0;
	setAttr ".phl[17]" 0;
	setAttr ".ed" -type "dataReferenceEdits" 
		"launch_facilityRN"
		"launch_facilityRN" 0
		"launch_facilityRN" 34
		0 "|launch_facility:facility_floor_noHole_geoShape" "|launch_facilityRNfosterParent1|transform2" 
		"-s -r "
		0 "|launch_facility:facility_floor_hole_geo1Shape" "|launch_facilityRNfosterParent1|transform1" 
		"-s -r "
		0 "|launch_facilityRNfosterParent1|polySurface2" "|launch_facility:facility_grp|launch_facility:facility_floor_noHole_geo" 
		"-s -r "
		0 "|launch_facilityRNfosterParent1|transform2" "|launch_facility:facility_grp|launch_facility:facility_floor_noHole_geo" 
		"-s -r "
		0 "|launch_facilityRNfosterParent1|launch_facility:polySurfaceShape22" "|launch_facility:visionary|launch_facility:facility_floor_hole_geo1" 
		"-s -r "
		0 "|launch_facilityRNfosterParent1|polySurface1" "|launch_facility:visionary|launch_facility:facility_floor_hole_geo1" 
		"-s -r "
		0 "|launch_facilityRNfosterParent1|transform1" "|launch_facility:visionary|launch_facility:facility_floor_hole_geo1" 
		"-s -r "
		2 "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape" 
		"intermediateObject" " 1"
		2 "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape" 
		"instObjGroups.objectGroups" " -s 2"
		2 "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape" 
		"uvPivot" " -type \"double2\" 0.57985630631446838 0.46275900304317474"
		2 "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape" 
		"uvSet[0].uvSetName" " -type \"string\" \"map1\""
		2 "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape" 
		"intermediateObject" " 1"
		2 "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape" 
		"instObjGroups.objectGroups" " -s 2"
		2 "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape" 
		"uvSet[0].uvSetName" " -type \"string\" \"map1\""
		3 "launch_facility:polySubdFace2.output" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.inMesh" 
		""
		3 "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.instObjGroups" 
		":initialShadingGroup.dagSetMembers" "-na"
		3 "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.instObjGroups" 
		":initialShadingGroup.dagSetMembers" "-na"
		5 3 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.instObjGroups.objectGroups[0]" 
		"launch_facilityRN.placeHolderList[1]" ""
		5 4 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.instObjGroups.objectGroups[0].objectGroupId" 
		"launch_facilityRN.placeHolderList[2]" ""
		5 4 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.instObjGroups.objectGroups[0].objectGrpColor" 
		"launch_facilityRN.placeHolderList[3]" ""
		5 3 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.outMesh" 
		"launch_facilityRN.placeHolderList[4]" ""
		5 4 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.inMesh" 
		"launch_facilityRN.placeHolderList[5]" ""
		5 3 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.worldMatrix" 
		"launch_facilityRN.placeHolderList[6]" ""
		5 3 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.compInstObjGroups.compObjectGroups[0]" 
		"launch_facilityRN.placeHolderList[7]" ""
		5 4 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform1|launch_facility:facility_floor_hole_geo1Shape.compInstObjGroups.compObjectGroups[0].compObjectGroupId" 
		"launch_facilityRN.placeHolderList[8]" ""
		5 4 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.inMesh" 
		"launch_facilityRN.placeHolderList[9]" ""
		5 3 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.instObjGroups.objectGroups[0]" 
		"launch_facilityRN.placeHolderList[10]" ""
		5 4 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.instObjGroups.objectGroups[0].objectGroupId" 
		"launch_facilityRN.placeHolderList[11]" ""
		5 4 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.instObjGroups.objectGroups[0].objectGrpColor" 
		"launch_facilityRN.placeHolderList[12]" ""
		5 3 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.outMesh" 
		"launch_facilityRN.placeHolderList[13]" ""
		5 3 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.worldMatrix" 
		"launch_facilityRN.placeHolderList[14]" ""
		5 3 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.compInstObjGroups.compObjectGroups[0]" 
		"launch_facilityRN.placeHolderList[15]" ""
		5 4 "launch_facilityRN" "|launch_facilityRNfosterParent1|transform2|launch_facility:facility_floor_noHole_geoShape.compInstObjGroups.compObjectGroups[0].compObjectGroupId" 
		"launch_facilityRN.placeHolderList[16]" ""
		5 3 "launch_facilityRN" "launch_facility:polySubdFace2.output" "launch_facilityRN.placeHolderList[17]" 
		"launch_facility:facility_floor_noHole_geoShape.i";
	setAttr ".ptag" -type "string" "";
lockNode -l 1 ;
createNode polyChipOff -n "polyChipOff1";
	rename -uid "AA271986-41DE-2B96-4F23-1B9BCB504A21";
	setAttr ".ics" -type "componentList" 8 "f[10]" "f[14]" "f[19]" "f[21]" "f[23:25]" "f[30]" "f[39]" "f[45]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 1000 0 0 0 0 1000 0 0 -2286.6142338578506 390.05752623081207 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0 -2286.6143 390.05753 ;
	setAttr ".rs" 63800;
createNode polySeparate -n "polySeparate1";
	rename -uid "74ED273C-4386-2633-DD0A-33A4BDB66286";
	setAttr ".ic" 2;
createNode groupId -n "groupId1";
	rename -uid "638215D3-4AB7-602E-730B-729826728819";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts1";
	rename -uid "28F710A0-4B20-6350-D4D1-4C84622AE5B4";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:55]";
createNode groupId -n "groupId2";
	rename -uid "0B70FDD2-4AA7-2A2A-74EC-D3980E79EAA9";
	setAttr ".ihi" 0;
createNode groupId -n "groupId3";
	rename -uid "28C632A2-4CF7-9239-02EF-349F91826200";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts2";
	rename -uid "A6F08363-4D0A-FBA0-4ABB-8DAD59009D13";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 46 "f[0]" "f[1]" "f[2]" "f[3]" "f[4]" "f[5]" "f[6]" "f[7]" "f[8]" "f[9]" "f[10]" "f[11]" "f[12]" "f[13]" "f[14]" "f[15]" "f[16]" "f[17]" "f[18]" "f[19]" "f[20]" "f[21]" "f[22]" "f[23]" "f[24]" "f[25]" "f[26]" "f[27]" "f[28]" "f[29]" "f[30]" "f[31]" "f[32]" "f[33]" "f[34]" "f[35]" "f[36]" "f[37]" "f[38]" "f[39]" "f[40]" "f[41]" "f[42]" "f[43]" "f[44]" "f[45]";
createNode polyDelEdge -n "polyDelEdge1";
	rename -uid "66A5D969-4361-0F78-80CC-EBAD077A4817";
	setAttr ".ics" -type "componentList" 43 "e[92]" "e[94]" "e[101]" "e[103]" "e[107]" "e[109]" "e[140]" "e[142]" "e[155]" "e[157]" "e[168]" "e[170]" "e[181]" "e[184]" "e[195]" "e[197:198]" "e[200]" "e[207]" "e[209]" "e[214]" "e[216]" "e[221]" "e[223]" "e[254]" "e[256]" "e[270]" "e[272]" "e[283]" "e[285]" "e[295]" "e[298]" "e[304]" "e[306]" "e[309]" "e[311]" "e[320]" "e[322]" "e[328]" "e[330]" "e[335]" "e[337]" "e[344]" "e[346]";
	setAttr ".cv" yes;
createNode deleteComponent -n "deleteComponent1";
	rename -uid "74A0B97C-4A51-FC38-47C0-F6A8C4D397E0";
	setAttr ".dc" -type "componentList" 4 "e[148]" "e[151]" "e[227]" "e[230]";
createNode polyDelEdge -n "polyDelEdge2";
	rename -uid "43954168-421B-3FEE-4B92-76AA4CECE47A";
	setAttr ".ics" -type "componentList" 2 "e[101]" "e[184]";
	setAttr ".cv" yes;
createNode polyChipOff -n "polyChipOff2";
	rename -uid "5383E7F9-4F88-C0F9-0246-90949174BBCB";
	setAttr ".ics" -type "componentList" 15 "f[0:1]" "f[10]" "f[13]" "f[15]" "f[28]" "f[32]" "f[35]" "f[57]" "f[61:62]" "f[68:70]" "f[72]" "f[95:96]" "f[100:101]" "f[106:107]" "f[116:118]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 1000 0 0 0 0 1000 0 0 0 0 1;
	setAttr ".ws" yes;
	setAttr ".rs" 43409;
createNode polySeparate -n "polySeparate2";
	rename -uid "ECE59319-4097-4D95-C274-D89D44FCADCC";
	setAttr ".ic" 2;
	setAttr -s 2 ".out";
createNode groupId -n "groupId4";
	rename -uid "740E8C3C-4B2D-7DF0-E291-6EB53BCC740C";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts3";
	rename -uid "84801460-4F3C-5509-0653-44AC2AD7D699";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 1 "f[0:149]";
createNode groupId -n "groupId5";
	rename -uid "1B8DAF90-4646-FA11-8820-619331CCD990";
	setAttr ".ihi" 0;
createNode groupId -n "groupId6";
	rename -uid "4E41C8B4-461B-B64C-66C3-6398D4293D05";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts4";
	rename -uid "6E9A8594-4515-8EE1-82B2-7DB9CD1FB918";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 126 "f[0]" "f[1]" "f[2]" "f[3]" "f[4]" "f[5]" "f[6]" "f[7]" "f[8]" "f[9]" "f[10]" "f[11]" "f[12]" "f[13]" "f[14]" "f[15]" "f[16]" "f[17]" "f[18]" "f[19]" "f[20]" "f[21]" "f[22]" "f[23]" "f[24]" "f[25]" "f[26]" "f[27]" "f[28]" "f[29]" "f[30]" "f[31]" "f[32]" "f[33]" "f[34]" "f[35]" "f[36]" "f[37]" "f[38]" "f[39]" "f[40]" "f[41]" "f[42]" "f[43]" "f[44]" "f[45]" "f[46]" "f[47]" "f[48]" "f[49]" "f[50]" "f[51]" "f[52]" "f[53]" "f[54]" "f[55]" "f[56]" "f[57]" "f[58]" "f[59]" "f[60]" "f[61]" "f[62]" "f[63]" "f[64]" "f[65]" "f[66]" "f[67]" "f[68]" "f[69]" "f[70]" "f[71]" "f[72]" "f[73]" "f[74]" "f[75]" "f[76]" "f[77]" "f[78]" "f[79]" "f[80]" "f[81]" "f[82]" "f[83]" "f[84]" "f[85]" "f[86]" "f[87]" "f[88]" "f[89]" "f[90]" "f[91]" "f[92]" "f[93]" "f[94]" "f[95]" "f[96]" "f[97]" "f[98]" "f[99]" "f[100]" "f[101]" "f[102]" "f[103]" "f[104]" "f[105]" "f[106]" "f[107]" "f[108]" "f[109]" "f[110]" "f[111]" "f[112]" "f[113]" "f[114]" "f[115]" "f[116]" "f[117]" "f[118]" "f[119]" "f[120]" "f[121]" "f[122]" "f[123]" "f[124]" "f[125]";
createNode groupId -n "groupId7";
	rename -uid "1E0CCBB5-419D-C6CF-34B6-EA97F646F308";
	setAttr ".ihi" 0;
createNode groupParts -n "groupParts5";
	rename -uid "E366EDD3-45D4-1389-E36F-5B9A469CD6EC";
	setAttr ".ihi" 0;
	setAttr ".ic" -type "componentList" 24 "f[0]" "f[1]" "f[2]" "f[3]" "f[4]" "f[5]" "f[6]" "f[7]" "f[8]" "f[9]" "f[10]" "f[11]" "f[12]" "f[13]" "f[14]" "f[15]" "f[16]" "f[17]" "f[18]" "f[19]" "f[20]" "f[21]" "f[22]" "f[23]";
createNode polySplit -n "polySplit1";
	rename -uid "FD199DAB-482E-7F1E-EE33-39BA252731E9";
	setAttr -s 11 ".e[0:10]"  0.107883 0.107883 0.89211702 0.107883 0.107883
		 0.107883 0.89211702 0.107883 0.107883 0.107883 0.89211702;
	setAttr -s 11 ".d[0:10]"  -2147483604 -2147483602 -2147483600 -2147483632 -2147483630 -2147483570 
		-2147483595 -2147483593 -2147483591 -2147483578 -2147483576;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit2";
	rename -uid "C905BDD7-4322-1F1A-9EAA-1EBF64C2C0FF";
	setAttr -s 11 ".e[0:10]"  0.109094 0.89090598 0.89090598 0.89090598
		 0.89090598 0.89090598 0.89090598 0.89090598 0.109094 0.89090598 0.89090598;
	setAttr -s 11 ".d[0:10]"  -2147483623 -2147483648 -2147483646 -2147483644 -2147483642 -2147483628 
		-2147483626 -2147483640 -2147483638 -2147483636 -2147483634;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit3";
	rename -uid "EA78220C-421B-0E0A-CBAB-40A1BED677C5";
	setAttr -s 11 ".e[0:10]"  0.187627 0.81237298 0.81237298 0.81237298
		 0.81237298 0.81237298 0.81237298 0.81237298 0.187627 0.81237298 0.81237298;
	setAttr -s 11 ".d[0:10]"  -2147483546 -2147483648 -2147483646 -2147483644 -2147483642 -2147483628 
		-2147483626 -2147483640 -2147483538 -2147483636 -2147483634;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit4";
	rename -uid "EA3C83CC-41EB-3A1A-086F-B78F31052879";
	setAttr -s 11 ".e[0:10]"  0.81160903 0.188391 0.188391 0.188391 0.81160903
		 0.188391 0.188391 0.188391 0.81160903 0.188391 0.188391;
	setAttr -s 11 ".d[0:10]"  -2147483576 -2147483558 -2147483559 -2147483560 -2147483595 -2147483562 
		-2147483563 -2147483564 -2147483600 -2147483566 -2147483567;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit5";
	rename -uid "39B39FC4-44D6-F88C-EC79-0985D9DC1121";
	setAttr -s 4 ".e[0:3]"  0.52255702 0.47744301 0.52255702 0.47744301;
	setAttr -s 4 ".d[0:3]"  -2147483605 -2147483484 -2147483556 -2147483603;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit6";
	rename -uid "C8FB233E-4B0A-F879-814D-87AD08835652";
	setAttr -s 4 ".e[0:3]"  0.494661 0.50533903 0.50533903 0.50533903;
	setAttr -s 4 ".d[0:3]"  -2147483624 -2147483535 -2147483514 -2147483622;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit7";
	rename -uid "EB7BA1B0-4041-2AB6-272A-68AD2AD43777";
	setAttr -s 5 ".e[0:4]"  1 0.21636599 0.89151299 0.217581 0;
	setAttr -s 5 ".d[0:4]"  -2147483604 -2147483586 -2147483615 -2147483617 -2147483546;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polySplit -n "polySplit8";
	rename -uid "18297BD6-443F-CF8B-8E81-3BAFB993A64F";
	setAttr -s 5 ".e[0:4]"  1 0.42836401 0.811993 0.42786601 0;
	setAttr -s 5 ".d[0:4]"  -2147483567 -2147483469 -2147483615 -2147483467 -2147483525;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode deleteComponent -n "deleteComponent2";
	rename -uid "0F639312-4865-319F-9D08-7D951A0C9B32";
	setAttr ".dc" -type "componentList" 3 "f[65]" "f[68]" "f[70:73]";
createNode polyExtrudeEdge -n "polyExtrudeEdge1";
	rename -uid "0BBC0CDA-444B-320C-B6DF-78A7D1B79CAB";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[132]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 360.90738 2809.9836 -689.48181 ;
	setAttr ".rs" 44467;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" 308.41723084449768 2809.9835808429925 -744.58491802215576 ;
	setAttr ".cbx" -type "double3" 413.39755058288574 2809.9835808429925 -634.37867164611816 ;
createNode polyMergeVert -n "polyMergeVert1";
	rename -uid "7AB9BFAA-4B39-B096-EB77-C7B107611EFB";
	setAttr ".ics" -type "componentList" 2 "vtx[80]" "vtx[116]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".am" yes;
createNode polyTweak -n "polyTweak1";
	rename -uid "C4460ADC-44D1-F2DD-D62A-72828C2886D1";
	setAttr ".uopa" yes;
	setAttr -s 3 ".tk";
	setAttr ".tk[117]" -type "float3" 0 0.0013442039 0 ;
createNode polySplit -n "polySplit9";
	rename -uid "36D47D9E-4DA5-C8F5-8A7E-BF806E277FC1";
	setAttr -s 11 ".e[0:10]"  0.165381 0.165381 0.83461899 0.165381 0.165381
		 0.165381 0.165381 0.165381 0.165381 0.165381 0.83461899;
	setAttr -s 11 ".d[0:10]"  -2147483517 -2147483518 -2147483540 -2147483520 -2147483521 -2147483522 
		-2147483523 -2147483524 -2147483525 -2147483526 -2147483473;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyMergeVert -n "polyMergeVert2";
	rename -uid "2039BCF7-4538-B367-E0C0-1F85110D0A7F";
	setAttr ".ics" -type "componentList" 2 "vtx[116]" "vtx[127]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".am" yes;
createNode polyExtrudeEdge -n "polyExtrudeEdge2";
	rename -uid "153C5AE3-462A-B327-C649-F5AFE68A83C2";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 1 "e[164]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" -362.69589 2811.1821 -687.60431 ;
	setAttr ".rs" 37779;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -416.9745147228241 2811.1820831766527 -744.58491802215576 ;
	setAttr ".cbx" -type "double3" -308.41726064682007 2811.1820831766527 -630.62375783920288 ;
createNode polyTweak -n "polyTweak2";
	rename -uid "D9B65AE6-41EC-73C0-EAB0-44AB17814DD2";
	setAttr ".uopa" yes;
	setAttr -s 5 ".tk";
	setAttr ".tk[127]" -type "float3" 0 0.0015075207 0 ;
createNode polySplit -n "polySplit10";
	rename -uid "A8C7C15D-49BD-414B-BC5A-FA9A4E4A780E";
	setAttr -s 11 ".e[0:10]"  0.18612 0.81388003 0.18612 0.81388003 0.81388003
		 0.81388003 0.18612 0.81388003 0.81388003 0.81388003 0.18612;
	setAttr -s 11 ".d[0:10]"  -2147483480 -2147483567 -2147483498 -2147483565 -2147483564 -2147483563 
		-2147483502 -2147483561 -2147483560 -2147483559 -2147483506;
	setAttr ".sma" 180;
	setAttr ".m2015" yes;
createNode polyMergeVert -n "polyMergeVert3";
	rename -uid "0796565D-4A8D-0AC9-A203-72BE1739613A";
	setAttr ".ics" -type "componentList" 2 "vtx[127]" "vtx[129]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".am" yes;
createNode polyMergeVert -n "polyMergeVert4";
	rename -uid "45A96EF8-4E9C-8A2C-3C12-5CBEF5EF9AFC";
	setAttr ".ics" -type "componentList" 2 "vtx[101]" "vtx[128]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".am" yes;
createNode deleteComponent -n "deleteComponent3";
	rename -uid "E3E3E406-401B-3165-89D1-8EABBD13790D";
	setAttr ".dc" -type "componentList" 2 "vtx[26]" "vtx[46]";
createNode polyMergeVert -n "polyMergeVert5";
	rename -uid "28CEEC8C-4C6D-861E-E738-4F81194D5DD0";
	setAttr ".ics" -type "componentList" 1 "vtx[0:135]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".d" 0.0010000002011656753;
	setAttr ".am" yes;
createNode polySplitRing -n "polySplitRing1";
	rename -uid "11F86A99-4171-CB46-F797-4A82175180BB";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 21 "e[0]" "e[2]" "e[4]" "e[6]" "e[8]" "e[12]" "e[14]" "e[20]" "e[22]" "e[33]" "e[44]" "e[49]" "e[64]" "e[113]" "e[121]" "e[135:137]" "e[139:141]" "e[143:144]" "e[159]" "e[167]" "e[173:174]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".wt" 0.79579120874404907;
	setAttr ".dr" no;
	setAttr ".re" 33;
	setAttr ".sma" 29.999999999999996;
	setAttr ".stp" 2;
	setAttr ".div" 14;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing2";
	rename -uid "A9E16ECD-496C-C6CC-E0A1-BFBF4FB7DEB1";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 4 "e[100]" "e[166]" "e[181:182]" "e[184:190]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".wt" 0.65727978944778442;
	setAttr ".dr" no;
	setAttr ".re" 189;
	setAttr ".sma" 29.999999999999996;
	setAttr ".stp" 2;
	setAttr ".div" 3;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing3";
	rename -uid "36FB69BD-42D5-DEFA-4F58-A79A35A08F05";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 20 "e[10]" "e[16]" "e[18]" "e[25]" "e[31]" "e[40]" "e[42]" "e[51]" "e[53]" "e[57]" "e[62]" "e[70]" "e[74]" "e[78]" "e[82]" "e[93:99]" "e[101:102]" "e[160]" "e[165]" "e[168]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".wt" 0.6162373423576355;
	setAttr ".dr" no;
	setAttr ".re" 94;
	setAttr ".sma" 29.999999999999996;
	setAttr ".stp" 2;
	setAttr ".div" 3;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polySplitRing -n "polySplitRing4";
	rename -uid "81ACC2ED-4C3E-9FB5-670E-84A1124E3A44";
	setAttr ".uopa" yes;
	setAttr ".ics" -type "componentList" 7 "e[73]" "e[75:77]" "e[79:81]" "e[203]" "e[205]" "e[209]" "e[213]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".wt" 0.82242786884307861;
	setAttr ".dr" no;
	setAttr ".re" 205;
	setAttr ".sma" 29.999999999999996;
	setAttr ".stp" 2;
	setAttr ".div" 3;
	setAttr ".p[0]"  0 0 1;
	setAttr ".fq" yes;
createNode polyExtrudeFace -n "polyExtrudeFace1";
	rename -uid "60045E45-43C7-DCFF-621B-96A80FBBBA5F";
	setAttr ".ics" -type "componentList" 1 "f[0:595]";
	setAttr ".ix" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
	setAttr ".ws" yes;
	setAttr ".pvt" -type "float3" 0 1937.6575 125.97495 ;
	setAttr ".rs" 40531;
	setAttr ".lt" -type "double3" 7.1054273576010019e-15 0 40.078231605913722 ;
	setAttr ".c[0]"  0 1 1;
	setAttr ".cbn" -type "double3" -1517.1324014663696 -11.7355183098407 -744.58491802215576 ;
	setAttr ".cbx" -type "double3" 1517.1324014663696 3887.0505651521671 996.53482437133789 ;
createNode polyTweak -n "polyTweak3";
	rename -uid "63AE59CB-4E1D-0C5C-ABBF-EAA9C2EA8F71";
	setAttr ".uopa" yes;
	setAttr -s 10 ".tk";
	setAttr ".tk[680]" -type "float3" 0.025572777 0 0.00062149763 ;
	setAttr ".tk[689]" -type "float3" -0.025572777 0 0.00062137842 ;
	setAttr ".tk[709]" -type "float3" -0.025572777 0 0.00062137842 ;
	setAttr ".tk[732]" -type "float3" 0.025572777 0 0.00062149763 ;
	setAttr ".tk[818]" -type "float3" 0.025572777 0 0.00062149763 ;
	setAttr ".tk[820]" -type "float3" -0.025572777 0 0.00062137842 ;
	setAttr ".tk[1195]" -type "float3" 0.025572777 0 0.00062149763 ;
	setAttr ".tk[1206]" -type "float3" 0.025572777 0 0.00062149763 ;
	setAttr ".tk[1288]" -type "float3" -0.025572777 0 0.00062137842 ;
	setAttr ".tk[1299]" -type "float3" -0.025572777 0 0.00062137842 ;
createNode transformGeometry -n "transformGeometry1";
	rename -uid "83AD140D-430B-061D-E904-60B1F59D9DF1";
	setAttr ".txf" -type "matrix" 1000 0 0 0 0 81078.760195197159 0 0 0 0 1000 0 0 -223988.56686896799 0 1;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "7C5C1DE5-4695-7B14-FD54-A6BAE7075D9E";
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
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1943\n            -height 777\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 1\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1943\n            -height 777\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
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
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 1\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1943\\n    -height 777\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 1\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1943\\n    -height 777\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "63F84AE6-4D37-A0AF-0975-6BB06C5722B7";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
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
	setAttr -s 11 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 14 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderingList1;
	setAttr -s 2 ".r";
select -ne :initialShadingGroup;
	setAttr -s 31 ".dsm";
	setAttr ".ro" yes;
	setAttr -s 14 ".gn";
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
connectAttr "launch_facilityRN.phl[1]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId1.id" "launch_facilityRN.phl[2]";
connectAttr ":initialShadingGroup.mwc" "launch_facilityRN.phl[3]";
connectAttr "launch_facilityRN.phl[4]" "polySeparate1.ip";
connectAttr "groupParts1.og" "launch_facilityRN.phl[5]";
connectAttr "launch_facilityRN.phl[6]" "polyChipOff1.mp";
connectAttr "launch_facilityRN.phl[7]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId2.id" "launch_facilityRN.phl[8]";
connectAttr "groupParts3.og" "launch_facilityRN.phl[9]";
connectAttr "launch_facilityRN.phl[10]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId4.id" "launch_facilityRN.phl[11]";
connectAttr ":initialShadingGroup.mwc" "launch_facilityRN.phl[12]";
connectAttr "launch_facilityRN.phl[13]" "polySeparate2.ip";
connectAttr "launch_facilityRN.phl[14]" "polyChipOff2.mp";
connectAttr "launch_facilityRN.phl[15]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId5.id" "launch_facilityRN.phl[16]";
connectAttr "launch_facilityRN.phl[17]" "polyDelEdge1.ip";
connectAttr "transformGeometry1.og" "shield_meshShape.i";
connectAttr "groupId7.id" "shield_meshShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "shield_meshShape.iog.og[0].gco";
connectAttr "groupParts2.og" "polySurfaceShape1.i";
connectAttr "groupId3.id" "polySurfaceShape1.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape1.iog.og[0].gco";
connectAttr "groupParts4.og" "polySurfaceShape2.i";
connectAttr "groupId6.id" "polySurfaceShape2.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape2.iog.og[0].gco";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "launch_facilityRNfosterParent1.msg" "launch_facilityRN.fp";
connectAttr "launch_facility:polySurfaceShape22.o" "polyChipOff1.ip";
connectAttr "polyChipOff1.out" "groupParts1.ig";
connectAttr "groupId1.id" "groupParts1.gi";
connectAttr "polySeparate1.out[0]" "groupParts2.ig";
connectAttr "groupId3.id" "groupParts2.gi";
connectAttr "polyDelEdge1.out" "deleteComponent1.ig";
connectAttr "deleteComponent1.og" "polyDelEdge2.ip";
connectAttr "polyDelEdge2.out" "polyChipOff2.ip";
connectAttr "polyChipOff2.out" "groupParts3.ig";
connectAttr "groupId4.id" "groupParts3.gi";
connectAttr "polySeparate2.out[0]" "groupParts4.ig";
connectAttr "groupId6.id" "groupParts4.gi";
connectAttr "polySeparate2.out[1]" "groupParts5.ig";
connectAttr "groupId7.id" "groupParts5.gi";
connectAttr "groupParts5.og" "polySplit1.ip";
connectAttr "polySplit1.out" "polySplit2.ip";
connectAttr "polySplit2.out" "polySplit3.ip";
connectAttr "polySplit3.out" "polySplit4.ip";
connectAttr "polySplit4.out" "polySplit5.ip";
connectAttr "polySplit5.out" "polySplit6.ip";
connectAttr "polySplit6.out" "polySplit7.ip";
connectAttr "polySplit7.out" "polySplit8.ip";
connectAttr "polySplit8.out" "deleteComponent2.ig";
connectAttr "deleteComponent2.og" "polyExtrudeEdge1.ip";
connectAttr "shield_meshShape.wm" "polyExtrudeEdge1.mp";
connectAttr "polyTweak1.out" "polyMergeVert1.ip";
connectAttr "shield_meshShape.wm" "polyMergeVert1.mp";
connectAttr "polyExtrudeEdge1.out" "polyTweak1.ip";
connectAttr "polyMergeVert1.out" "polySplit9.ip";
connectAttr "polySplit9.out" "polyMergeVert2.ip";
connectAttr "shield_meshShape.wm" "polyMergeVert2.mp";
connectAttr "polyMergeVert2.out" "polyExtrudeEdge2.ip";
connectAttr "shield_meshShape.wm" "polyExtrudeEdge2.mp";
connectAttr "polyExtrudeEdge2.out" "polyTweak2.ip";
connectAttr "polyTweak2.out" "polySplit10.ip";
connectAttr "polySplit10.out" "polyMergeVert3.ip";
connectAttr "shield_meshShape.wm" "polyMergeVert3.mp";
connectAttr "polyMergeVert3.out" "polyMergeVert4.ip";
connectAttr "shield_meshShape.wm" "polyMergeVert4.mp";
connectAttr "polyMergeVert4.out" "deleteComponent3.ig";
connectAttr "deleteComponent3.og" "polyMergeVert5.ip";
connectAttr "shield_meshShape.wm" "polyMergeVert5.mp";
connectAttr "polyMergeVert5.out" "polySplitRing1.ip";
connectAttr "shield_meshShape.wm" "polySplitRing1.mp";
connectAttr "polySplitRing1.out" "polySplitRing2.ip";
connectAttr "shield_meshShape.wm" "polySplitRing2.mp";
connectAttr "polySplitRing2.out" "polySplitRing3.ip";
connectAttr "shield_meshShape.wm" "polySplitRing3.mp";
connectAttr "polySplitRing3.out" "polySplitRing4.ip";
connectAttr "shield_meshShape.wm" "polySplitRing4.mp";
connectAttr "polySplitRing4.out" "polyExtrudeFace1.ip";
connectAttr "shield_meshShape.wm" "polyExtrudeFace1.mp";
connectAttr "polyExtrudeFace1.out" "polyTweak3.ip";
connectAttr "polyTweak3.out" "transformGeometry1.ig";
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "polySurfaceShape1.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape2.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "shield_meshShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId1.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId2.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId3.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId4.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId5.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId6.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId7.msg" ":initialShadingGroup.gn" -na;
// End of FacilityShield.ma
