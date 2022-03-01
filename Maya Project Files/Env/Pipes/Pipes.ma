//Maya ASCII 2022 scene
//Name: Pipes.ma
//Last modified: Mon, Feb 28, 2022 06:56:51 PM
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
fileInfo "UUID" "A07489D1-4040-8868-3C70-FFBF5E4A7667";
createNode transform -s -n "persp";
	rename -uid "F569BF75-41BD-7730-AB7F-4BA8041D7E6A";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -19.49600633321522 18.340677107186846 0.16993321863601651 ;
	setAttr ".r" -type "double3" 314.06164649221478 6389.0000000178179 1.7811106216195694e-13 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "AAB56E1C-42D4-DCFA-8D1C-83A4E4183F9C";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 27.207250382827226;
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
	setAttr ".pv" -type "double2" 0.976065993309021 0.08388807624578476 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.96744478 0.10830134
		 0.97175437 0.1083017 0.97175223 0.13271594 0.96744251 0.13271558 0.97606385 0.10830218
		 0.97606182 0.1327163 0.98037344 0.10830253 0.9803713 0.13271666 0.98468298 0.10830289
		 0.98468101 0.13271701 0.96313524 0.10830104 0.96313304 0.13271523 0.96744907 0.059473276
		 0.97175884 0.059473634 0.97175634 0.083887637 0.96744686 0.083887279 0.9760682 0.059474021
		 0.97606611 0.083888054 0.98037767 0.059474379 0.98037559 0.083888471 0.98468745 0.059474766
		 0.98468518 0.083888829 0.96313953 0.059472859 0.98899484 0.083889186 0.96745121 0.035059139
		 0.97176063 0.035059527 0.97607034 0.035059884 0.98038006 0.035060272 0.98468935 0.035060629
		 0.98899895 0.035061046 0.98899674 0.059475124 0.96313751 0.083886921 0.98899245 0.10830331
		 0.98899043 0.13271737 0.96314168 0.035058782;
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
	setAttr -s 73 ".uvst[0].uvsp[0:72]" -type "float2" 0.27434266 0.054396987
		 0.27495739 0.059802771 0.2732794 0.059800148 0.27090082 0.054247618 0.27502984 0.065204382
		 0.28224394 0.035354316 0.28006026 0.040254176 0.27859503 0.03943646 0.27688193 0.044669747
		 0.27380601 0.043118119 0.27483532 0.049330711 0.27093735 0.04831326 0.28098115 0.056124449
		 0.278373 0.060759306 0.27685148 0.06001997 0.2778427 0.055041432 0.27607396 0.065622807
		 0.28332222 0.035784066 0.28350776 0.041089177 0.28181902 0.040990353 0.28351754 0.0464077
		 0.2802504 0.04581809 0.28266442 0.051374316 0.27881104 0.050368428 0.28394616 0.057653427
		 0.27985609 0.061738253 0.2767522 0.066108942 0.28527993 0.04096055 0.2868517 0.046522975
		 0.28676772 0.05244565 0.28469145 0.058127642 0.91560709 0.03942734 0.91304588 0.034990229
		 0.90792263 0.034989811 0.90536064 0.039426476 0.90792185 0.043863595 0.27253613 0.060030937
		 0.038207412 0.037535608 0.28173041 0.034992754 0.27805942 0.038871825 0.27310959
		 0.042554259 0.27000949 0.048071027 0.91263866 0.043159604 0.91479385 0.03942728 0.91263926
		 0.035694648 0.90832925 0.03569426 0.90617406 0.039426595 0.90832853 0.043159217 0.037502468
		 0.042251885 0.037503004 0.037942171 0.033769846 0.044406176 0.03003785 0.042250872
		 0.030038446 0.037941158 0.033771098 0.035786927 0.033771157 0.034973562 0.27001768
		 0.054399252 0.029334158 0.037534416 0.029333472 0.042657435 0.27384275 0.065208912
		 0.033769786 0.0452196 0.038206637 0.042658508 0.2744675 0.065144539 0.28765053 0.052676201
		 0.91304517 0.043864042 0.28773391 0.046473503 0.28616565 0.040866613 0.27753019 0.066540241
		 0.28559834 0.03563416 0.28470892 0.03562957 0.28058282 0.06225276 0.27561814 0.065296412
		 0.2827639 0.03557688 0.28387934 0.035722315;
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
		 -0.013656015 0.125046 4.6677653e-09 -0.058244705 0.13649714 2.3168267e-09 0.023053832 0.045039944 -0.046308734
		 -0.027462089 0.025930149 -0.046682559 -0.031968813 0.040681239 -0.046920925 0.0067205597 0.077506542 -0.046249293
		 -0.053007346 0.01697856 -1.2312229e-08 -0.05246089 0.022486812 -1.748195e-08 -0.027462119 0.025930114 0.046682552
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
	setAttr -s 21 ".uvst[0].uvsp[0:20]" -type "float2" 0.86246794 0.039602011
		 0.86251903 0.043911219 0.83810669 0.044200838 0.83805567 0.039891571 0.86257005 0.048220456
		 0.83815789 0.048510075 0.86262131 0.052529693 0.83820891 0.052819252 0.86267233 0.05683893
		 0.83826011 0.057128549 0.8624168 0.035292745 0.83800447 0.035582334 0.88688028 0.039312363
		 0.88693142 0.043621629 0.88698244 0.047930866 0.8870337 0.052240133 0.88708484 0.056549311
		 0.88713586 0.060858607 0.86272347 0.061148226 0.83831108 0.061437726 0.88682914 0.035003155;
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
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.16889578 0.052479863
		 0.16889507 0.056789517 0.15929753 0.056787968 0.15929821 0.052478433 0.17262661 0.061099529
		 0.1593008 0.035003543 0.16889769 0.039433002 0.15930012 0.039431453 0.16889703 0.043742418
		 0.15929949 0.043740988 0.17262858 0.048170924 0.15929887 0.048168898 0.7300877 0.045467168
		 0.73439723 0.045463175 0.73440689 0.055922866 0.73009735 0.055926859 0.7128495 0.045483083
		 0.71285915 0.055942833 0.71715909 0.045479119 0.71716881 0.05593878 0.72146857 0.045475125
		 0.72147828 0.055934787 0.72577816 0.045471162 0.72578782 0.055930853 0.73007798 0.035007417
		 0.73438758 0.035003439 0.73869729 0.034999475 0.71714938 0.035019353 0.72145891 0.035015389
		 0.72576845 0.035011411 0.73870683 0.045459211 0.73871648 0.055918932 0.71283984 0.035023347
		 0.17263049 0.035005569 0.15929693 0.061097622;
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
	setAttr -s 44 ".uvst[0].uvsp[0:43]" -type "float2" 0.30134305 0.050054312
		 0.89844477 0.054412425 0.29389882 0.055070519 0.29389858 0.050054669 0.90095264 0.050068527
		 0.29389912 0.06008625 0.89844465 0.045724668 0.29389781 0.03500694 0.8934288 0.045724738
		 0.29389811 0.04002285 0.89092088 0.050068676 0.29389834 0.045038819 0.89378208 0.053800762
		 0.89809179 0.053800702 0.29298902 0.055423737 0.29298872 0.050407767 0.90024632 0.050068527
		 0.29298925 0.060439587 0.89809167 0.046336401 0.292988 0.035360157 0.8937819 0.046336461
		 0.29298824 0.040376067 0.89162731 0.050068647 0.29298848 0.045392156 0.28925699 0.057578564
		 0.28925672 0.052562714 0.28925642 0.047546983 0.28925622 0.042531013 0.28925598 0.037515163
		 0.28925723 0.062594652 0.29298946 0.064749241 0.30134282 0.045038342 0.8934288 0.054412484
		 0.30134255 0.040022492 0.30134383 0.065101862 0.30134231 0.035006583 0.29389936 0.065102339
		 0.30134353 0.060086012 0.30134329 0.055070162 0.29298842 0.044685721 0.29298818 0.039669693
		 0.29298922 0.059733391 0.29298866 0.049701571 0.29298899 0.054717302;
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
	setAttr ".pv" -type "double2" 0.83624258637428284 0.44279097020626068 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.87287343 0.49449873
		 0.87286866 0.46864152 0.90948975 0.46863472 0.90949452 0.49449188 0.87286365 0.44278416
		 0.9094848 0.44277737 0.87285888 0.41692689 0.90947998 0.41692007 0.87285411 0.39106956
		 0.90947521 0.39106271 0.87287831 0.52035606 0.90949929 0.52034914 0.79963136 0.49451256
		 0.79962659 0.46865505 0.83624744 0.46864843 0.83625245 0.49450552 0.79962158 0.44279787
		 0.83624274 0.44279101 0.79961681 0.41694054 0.83623779 0.41693372 0.79961187 0.39108321
		 0.83623302 0.39107639 0.79963601 0.52036977 0.83622801 0.36521906 0.76301003 0.49451923
		 0.76300514 0.46866202 0.76300043 0.44280469 0.7629956 0.41694742 0.76299077 0.39109007
		 0.76298589 0.36523277 0.79960698 0.36522597 0.8362571 0.52036285 0.87284923 0.3652122
		 0.90947044 0.36520538 0.76301491 0.52037656;
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
	setAttr -s 73 ".uvst[0].uvsp[0:72]" -type "float2" 0.88996112 0.13839865
		 0.89319706 0.1671828 0.88426316 0.16715753 0.87163675 0.13757944 0.89354634 0.19594383
		 0.93215811 0.037063837 0.92049861 0.06313765 0.91270286 0.058773994 0.90354645 0.086625099
		 0.88718009 0.078342557 0.89261842 0.11142683 0.87187153 0.10598361 0.92529392 0.14763927
		 0.91137606 0.1723001 0.90328014 0.16835308 0.90859145 0.14185345 0.89910269 0.19817829
		 0.93789637 0.03935957 0.93884826 0.067605615 0.92985737 0.067068696 0.93886447 0.095922947
		 0.92147315 0.092762232 0.93428814 0.12236083 0.91377866 0.116979 0.94106996 0.15580106
		 0.91926587 0.17752051 0.9027102 0.200773 0.94828475 0.066932797 0.95661527 0.096560359
		 0.9561283 0.12809253 0.9450351 0.15833294 0.038995445 0.11768445 0.052633286 0.14130566
		 0.079908729 0.14130554 0.093546271 0.11768422 0.07990855 0.094063036 0.88030446 0.16838205
		 0.10156881 0.058701813 0.92942631 0.03513521 0.90985513 0.0557639 0.88347602 0.07533586
		 0.86693305 0.10468793 0.054798245 0.097813293 0.043325782 0.11768445 0.054798394
		 0.13755548 0.07774353 0.13755539 0.089215994 0.11768425 0.077743292 0.097813174 0.11734243
		 0.038807273 0.10589916 0.058695436 0.14028785 0.038773179 0.15178955 0.058627725
		 0.14034611 0.078515828 0.11740096 0.078549743 0.11524127 0.082302988 0.86693376 0.13838053
		 0.14251679 0.082262754 0.15611994 0.058621317 0.88722587 0.19596124 0.1424475 0.03501977
		 0.11517173 0.035060301 0.8905524 0.19562173 0.96082687 0.12932575 0.052633077 0.094063148
		 0.96131253 0.096302032 0.95300072 0.066439271 0.90684974 0.20307231 0.95001566 0.038576841
		 0.94528031 0.038546622 0.92313159 0.18026662 0.89667785 0.19643807 0.9349249 0.038252532
		 0.94086313 0.039034963;
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
		 -0.12785849 0.53553224 0.24649976 -0.31278238 0.58557951 0.24687581 -0.072707936 0.66597205 2.4852319e-08
		 -0.31010899 0.72694075 1.233535e-08 0.12274422 0.24000037 -0.24655896 -0.14621486 0.13825516 -0.24854933
		 -0.17020974 0.21679355 -0.24981844 0.035781905 0.41286045 -0.24624248 -0.28222406 0.090594709 -6.5553309e-08
		 -0.27931458 0.11992198 -9.3078171e-08 -0.14621501 0.13825497 0.24854928 -0.17020988 0.21679315 0.24981844
		 0.12274421 0.24000037 0.24655896 0.03578189 0.41286045 0.24624252 0.25428998 0.29262006 7.2279573e-09
		 0.13609245 0.51122427 1.8456015e-08 0.14378959 0.048575491 -0.24737418 -0.14294 0.04685257 -0.24790214
		 -0.28615981 0.046762086 -3.6706844e-08 -0.14294018 0.04685257 0.24790214 0.14378959 0.048575491 0.24737418
		 0.28606918 0.049993977 5.721762e-10 0.13965012 6.5329397e-05 -0.24188103 -0.13964999 -6.5334352e-05 -0.24188101
		 -0.27930027 -6.4769083e-05 -3.2230822e-08 -0.13965014 -6.5334352e-05 0.24188103 0.13965012 6.5329397e-05 0.24188104
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
	setAttr -s 21 ".uvst[0].uvsp[0:20]" -type "float2" 0.96170759 0.28229868
		 0.96181327 0.30815566 0.92519248 0.3083055 0.92508668 0.2824485 0.96128434 0.17887038
		 0.92466354 0.1790202 0.96139014 0.20472744 0.92476934 0.20487727 0.96149588 0.23058452
		 0.92487514 0.23073438 0.96160179 0.25644159 0.92498094 0.25659144 0.99832833 0.2821489
		 0.99843407 0.30800587 0.99853981 0.33386302 0.99801099 0.20457759 0.99811673 0.23043476
		 0.99822247 0.25629175 0.96191901 0.33401287 0.92529827 0.33416259 0.99790525 0.17872059;
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
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.73040509 0.44128853
		 0.73065686 0.46714464 0.71412313 0.46730563 0.71387148 0.44144949 0.75330043 0.49278271
		 0.71285117 0.33660439 0.72964317 0.36300993 0.71310955 0.36317086 0.72989488 0.38886601
		 0.7133612 0.38902697 0.75254548 0.41521457 0.71362001 0.4155935 0.92789066 0.75794947
		 0.92789447 0.7838068 0.89629483 0.78381157 0.89629102 0.75795412 0.9278748 0.65451998
		 0.89627552 0.6545248 0.92787862 0.68037736 0.89627934 0.68038207 0.92788243 0.70623469
		 0.89628327 0.70623952 0.92788655 0.73209214 0.89628714 0.73209679 0.95948994 0.7579447
		 0.95949376 0.78380191 0.95949769 0.80965936 0.95947826 0.68037271 0.95948219 0.70622993
		 0.95948613 0.73208737 0.92789829 0.80966413 0.89629877 0.8096689 0.95947456 0.65451533
		 0.75177658 0.33622542 0.7143749 0.49316156;
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
	setAttr -s 414 ".uvst[0].uvsp";
	setAttr ".uvst[0].uvsp[0:249]" -type "float2" 0.76539004 0.045584552 0.76539081
		 0.036757518 0.75767756 0.036756922 0.75767767 0.034991514 0.76539052 0.038522922
		 0.75767744 0.038522325 0.7653904 0.040288329 0.75767732 0.040287733 0.76539028 0.042053707
		 0.75767714 0.042053141 0.76539016 0.043819137 0.75767702 0.043818541 0.76691896 0.044701979
		 0.75614828 0.04293574 0.13266364 0.040272035 0.13266316 0.047985073 0.13089776 0.047984984
		 0.13089818 0.040271908 0.12913233 0.047984865 0.12913278 0.040271819 0.1273669 0.047984745
		 0.12736735 0.040271707 0.1256015 0.047984656 0.13619441 0.040272206 0.13442856 0.047985163
		 0.13442901 0.040272117 0.13531181 0.038743269 0.13354579 0.049514014 0.89268726 0.03649563
		 0.89445275 0.036495719 0.8944521 0.044208765 0.89268678 0.044208638 0.896218 0.036495868
		 0.89621753 0.044208877 0.89798349 0.036495987 0.89798301 0.044208974 0.8997488 0.036496107
		 0.89974833 0.044209093 0.90151423 0.036496196 0.89092135 0.044208519 0.8918047 0.034966704
		 0.90063107 0.045738012 0.81615633 0.03649516 0.81615704 0.044208042 0.81439167 0.044208214
		 0.81439084 0.036495309 0.81262624 0.04420843 0.81262553 0.036495458 0.81086087 0.044208601
		 0.81086016 0.036495637 0.80909544 0.04420875 0.81968707 0.036494803 0.81792241 0.044207893
		 0.81792164 0.036494981 0.8188042 0.03496604 0.81703991 0.045736857 0.2455515 0.045583986
		 0.24555033 0.036756918 0.23783728 0.036757931 0.23783705 0.034992523 0.24555057 0.038522325
		 0.23783752 0.038523369 0.24555081 0.040287733 0.23783776 0.040288776 0.24555102 0.042053141
		 0.237838 0.042054184 0.24555126 0.043818548 0.23783824 0.043819591 0.24708028 0.044701062
		 0.23630923 0.042937111 0.75053513 0.036494855 0.75053596 0.04420802 0.74877053 0.044208199
		 0.7487697 0.036495034 0.74700511 0.044208407 0.74700427 0.036495209 0.74523968 0.044208616
		 0.74523878 0.036495417 0.74347425 0.044208787 0.74347341 0.036495596 0.7417087 0.044209003
		 0.75230056 0.036494646 0.74259049 0.034966812 0.75141889 0.045736805 0.1843273 0.036494531
		 0.17550027 0.036496051 0.17550161 0.044209026 0.17373621 0.044209324 0.17726567 0.036495723
		 0.17726701 0.044208728 0.17903107 0.036495425 0.17903242 0.04420843 0.18079647 0.036495127
		 0.18079782 0.044208102 0.1825619 0.036494829 0.18256319 0.044207804 0.18344426 0.034965787
		 0.18168077 0.045736849 0.25999033 0.042053819 0.25227749 0.042053137 0.25227755 0.040287733
		 0.25999051 0.040288448 0.25227773 0.038522333 0.25999069 0.038523044 0.25227791 0.036756925
		 0.25999081 0.036757648 0.25227809 0.034991525 0.2599901 0.045584656 0.25227726 0.043818541
		 0.25999022 0.043819249 0.26151907 0.04470212 0.2507484 0.042935733 0.83412707 0.036494844
		 0.82530004 0.036495589 0.82530075 0.044208564 0.82353532 0.044208713 0.82706559 0.03649544
		 0.82706618 0.044208415 0.8288309 0.036495291 0.82883155 0.044208236 0.83059633 0.036495142
		 0.83059698 0.044208117 0.83236164 0.036494993 0.83236235 0.044207938 0.83324426 0.034966044
		 0.83147979 0.045736887 0.23111105 0.042053148 0.22339803 0.042054221 0.22339776 0.040288806
		 0.23111081 0.040287733 0.22339752 0.038523391 0.23111057 0.038522318 0.22339728 0.036757946
		 0.23111033 0.036756903 0.22339705 0.034992531 0.23111156 0.045584008 0.22339827 0.043819636
		 0.23111132 0.043818563 0.23264033 0.044701077 0.22186926 0.042937148 0.097687289
		 0.036492188 0.088860214 0.036499597 0.08886674 0.044212647 0.087101325 0.044214115
		 0.090625688 0.036498141 0.09063217 0.044211134 0.092391104 0.036496621 0.092397541
		 0.044209674 0.094156504 0.036495134 0.094162956 0.044208184 0.095921874 0.036493678
		 0.095928371 0.044206671 0.096803278 0.034964059 0.095046997 0.04573632 0.06745711
		 0.048349693 0.05974403 0.048349902 0.059744 0.046584487 0.06745705 0.046584278 0.059743941
		 0.044819102 0.06745699 0.044818863 0.059743881 0.04305369 0.067456931 0.043053422
		 0.059743822 0.041288272 0.067457229 0.05188052 0.05974409 0.050115347 0.067457169
		 0.050115131 0.068986088 0.050997768 0.058215201 0.04923268 0.30418545 0.55732864
		 0.097448051 0.064502038 0.47435832 0.5529483 0.79047626 0.052749768 0.080428272 0.03502889
		 0.4403238 0.55294591 0.046393842 0.035031952 0.40628931 0.55294353 0.029379293 0.064508162
		 0.37225479 0.55294114 0.046399146 0.093981311 0.33822021 0.55293876 0.026883498 0.061884724
		 0.026881233 0.035107523 0.2748273 0.54941171 0.27483019 0.41552603 0.02688995 0.16899335
		 0.27482706 0.52263457 0.026888669 0.14221621 0.27482748 0.49585748 0.026887208 0.11543906
		 0.27482802 0.46908027 0.026885569 0.088661835 0.27482873 0.44230318 0.27710804 0.52263451
		 0.28033319 0.5213179 0.28033337 0.54809499 0.27711275 0.38874903 0.2771084 0.49585754
		 0.28033364 0.4945409 0.27710894 0.46908033 0.28033417 0.46776381 0.28033632 0.41420972
		 0.27711111 0.41552615 0.28033489 0.44098672 0.27710968 0.44230324 0.021375179 0.036424659
		 0.024609819 0.19577056 0.024602503 0.061884873 0.021377474 0.06320177 0.021383911
		 0.17031023 0.024608955 0.16899341 0.0213826 0.14353311 0.024607703 0.14221627 0.02137953
		 0.089978844 0.024604574 0.088661984 0.024606243 0.11543918 0.02138117 0.11675602
		 0.30124354 0.45569247 0.00047114491 0.10205205 0.81366467 0.073396713 0.27483177
		 0.38874891 0.27710828 0.54941171 0.28033483 0.44362 0.30124301 0.48246938 0.3012425
		 0.50924641 0.30124241 0.53602284 0.3012462 0.40213901 0.30124468 0.42891604 0.28033406
		 0.47039714 0.2803362 0.41684294 0.28033784 0.39006585 0.28033358 0.49717417 0.28033319
		 0.52395117 0.76728547 0.073394209 0.79047579 0.060006946 0.76728404 0.10017124 0.79047292
		 0.11356097 0.81366313 0.10017377 0.76100063 0.06976527 0.30418575 0.55293638 0.33821991
		 0.55733103 0.080433547 0.093978226 0.76099885 0.10379952 0.37225443 0.55733347 0.79047245
		 0.12081826 0.40628895 0.55733585 0.81994796 0.10380268 0.4403235 0.55733824 0.2701512
		 0.55293399 0.81994981 0.069768444 0.2701509 0.55732626;
	setAttr ".uvst[0].uvsp[250:413]" 0.47435802 0.55734068 0.090190828 0.064502694
		 0.026890755 0.19577044 0.024600267 0.035107732 0.00046926737 0.075275332 0.0004670918
		 0.04849837 0.00047503412 0.1823827 0.00047402084 0.15560603 0.00047262013 0.128829
		 0.021381021 0.11412272 0.021382481 0.14089981 0.021377265 0.060568422 0.021379322
		 0.0873456 0.021383792 0.16767699 0.021384642 0.19445401 0.050027221 0.087696046 0.07680437
		 0.087693602 0.036636531 0.064507507 0.050023049 0.041316576 0.076800257 0.041314162
		 0.75230139 0.044207811 0.74965346 0.045737043 0.74788797 0.045737222 0.7461226 0.045737401
		 0.74435711 0.045737602 0.74259162 0.045737781 0.74435586 0.034966603 0.74612141 0.034966428
		 0.74788678 0.034966219 0.74965221 0.034966011 0.7514177 0.034965832 0.74170786 0.036495835
		 0.90151376 0.044209175 0.89886558 0.045737922 0.89710015 0.04573781 0.89533478 0.045737654
		 0.89356935 0.045737542 0.89180398 0.045737445 0.89357007 0.034966823 0.89533544 0.034966946
		 0.89710087 0.034967035 0.8988663 0.034967151 0.90063167 0.03496727 0.89092183 0.03649551
		 0.25074857 0.041170329 0.25074881 0.039404929 0.25074893 0.037639495 0.25074911 0.035874099
		 0.25074834 0.044701137 0.25227708 0.045583971 0.26151985 0.035875075 0.26151967 0.037640449
		 0.26151955 0.039405882 0.26151937 0.041171283 0.26151925 0.042936716 0.25999093 0.034992211
		 0.058215111 0.047467269 0.058215052 0.045701854 0.058214992 0.043936439 0.058214962
		 0.042170998 0.058215261 0.050998095 0.059744149 0.051880758 0.06898582 0.0421707
		 0.068985879 0.043936111 0.068985939 0.045701526 0.068985969 0.047466941 0.068986028
		 0.049232353 0.067456901 0.041288033 0.7561484 0.041170329 0.75614858 0.039404925
		 0.7561487 0.037639521 0.75614882 0.035874113 0.75614816 0.044701144 0.7576769 0.045583986
		 0.76691967 0.035874918 0.76691955 0.037640292 0.76691931 0.03940573 0.7669192 0.041171141
		 0.76691908 0.042936541 0.76539093 0.03499211 0.22186899 0.041171707 0.22186875 0.039406292
		 0.22186852 0.037640907 0.22186828 0.035875462 0.2218695 0.04470256 0.22339851 0.045585044
		 0.23263913 0.035873976 0.23263937 0.037639391 0.23263961 0.039404832 0.23263985 0.041170247
		 0.23264009 0.042935662 0.2311101 0.034991492 0.23630899 0.041171677 0.23630877 0.039406266
		 0.23630853 0.037640888 0.23630831 0.035875451 0.23630944 0.044702515 0.23783848 0.045584999
		 0.24707909 0.035874024 0.24707933 0.037639398 0.24707957 0.039404836 0.2470798 0.041170277
		 0.24708004 0.042935681 0.2455501 0.03499151 0.81527454 0.045737013 0.81350911 0.045737162
		 0.81174362 0.045737334 0.80997843 0.045737512 0.81880528 0.045736656 0.81968778 0.044207737
		 0.80997735 0.034966905 0.81174266 0.034966696 0.81350803 0.034966547 0.81527346 0.034966338
		 0.81703889 0.034966189 0.80909473 0.036495846 0.17991537 0.045737147 0.17814994 0.045737445
		 0.17638454 0.045737773 0.1746192 0.045738064 0.18344617 0.045736521 0.18432856 0.044207476
		 0.17461735 0.034967333 0.17638272 0.034967035 0.17814809 0.034966737 0.17991349 0.034966409
		 0.18167889 0.034966111 0.1737349 0.036496349 0.093281552 0.04573784 0.091516137 0.045739301
		 0.089750737 0.045740783 0.087985337 0.045742273 0.096812397 0.04573483 0.097693801
		 0.044205211 0.087976247 0.034971468 0.089741647 0.034969948 0.091507062 0.034968492
		 0.093272507 0.034967002 0.095037907 0.034965515 0.087094843 0.036501117 0.13178033
		 0.049513925 0.13001493 0.049513806 0.12824953 0.049513716 0.12648413 0.049513597
		 0.13531119 0.04951413 0.13619396 0.047985282 0.12648472 0.038742766 0.12825018 0.038742851
		 0.13001558 0.038742971 0.13178098 0.03874306 0.13354638 0.038743179 0.12560192 0.040271617
		 0.8297143 0.045737065 0.82794905 0.045737185 0.82618356 0.045737334 0.82441813 0.045737483
		 0.83324522 0.045736767 0.83412766 0.044207819 0.82441729 0.034966819 0.82618266 0.03496667
		 0.82794809 0.034966521 0.82971346 0.034966342 0.83147883 0.034966193 0.82353473 0.036495738;
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
		mu 0 4 193 192 196 230
		f 4 -408 409 410 411
		mu 0 4 197 196 198 227
		f 4 -405 412 413 414
		mu 0 4 195 229 200 201
		f 4 -414 415 416 417
		mu 0 4 201 228 202 203
		f 4 -411 418 -417 419
		mu 0 4 199 198 203 221
		f 4 420 421 422 423
		mu 0 4 204 253 206 261
		f 4 -421 424 425 426
		mu 0 4 205 264 208 209
		f 4 -426 427 428 429
		mu 0 4 209 263 210 211
		f 4 430 431 432 433
		mu 0 4 212 213 214 259
		f 4 -431 434 -423 435
		mu 0 4 213 262 207 206
		f 4 -429 436 -433 437
		mu 0 4 211 260 215 214
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
		mu 0 4 185 187 196 192
		f 4 366 452 -415 453
		mu 0 4 183 219 195 201
		f 4 369 454 -410 -451
		mu 0 4 187 189 198 196
		f 4 370 455 -419 -455
		mu 0 4 189 191 203 198
		f 4 371 -454 -418 -456
		mu 0 4 191 183 201 203
		f 4 367 -452 -406 -453
		mu 0 4 182 185 192 220
		f 4 -362 456 -427 457
		mu 0 4 184 252 205 209
		f 4 -366 458 -436 459
		mu 0 4 180 190 213 206
		f 4 -364 460 -438 461
		mu 0 4 188 186 211 214
		f 4 -363 -458 -430 -461
		mu 0 4 186 184 209 211
		f 4 -361 -460 -422 -457
		mu 0 4 181 180 206 253
		f 4 -365 -462 -432 -459
		mu 0 4 190 188 214 213;
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
	setAttr ".pv" -type "double2" 0.61330121755599976 0.29396386444568634 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.56448692 0.12157802
		 0.56448007 0.20776901 0.51565188 0.20776504 0.51565886 0.12157415 0.56447309 0.29395995
		 0.51564497 0.29395601 0.56446624 0.38015091 0.51563811 0.38014701 0.56445926 0.46634188
		 0.51563114 0.46633795 0.56449378 0.035387129 0.51566577 0.035383195 0.66214317 0.12158585
		 0.66213626 0.2077768 0.61330819 0.20777291 0.61331505 0.12158196 0.6621294 0.29396775
		 0.61330134 0.29396382 0.66212249 0.38015872 0.61329442 0.38015479 0.66211563 0.46634972
		 0.61328751 0.46634579 0.66215008 0.035394937 0.61328065 0.55253667 0.7109713 0.12158975
		 0.71096438 0.20778072 0.71095747 0.29397169 0.71095055 0.38016263 0.7109437 0.4663536
		 0.71093678 0.55254453 0.56445241 0.55253279 0.51562423 0.55252898 0.66210872 0.55254066
		 0.6133219 0.035391003 0.71097821 0.035398841;
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
	setAttr ".pv" -type "double2" 0.45152457058429718 0.30477263033390045 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 73 ".uvst[0].uvsp[0:72]" -type "float2" 0.075221643 0.36737385
		 0.08615689 0.45961261 0.057508357 0.45970464 0.016445607 0.36510265 0.087834962 0.55183327
		 0.20856774 0.041606903 0.1716857 0.12544346 0.14660232 0.1116019 0.1177811 0.20108852
		 0.065138929 0.1748471 0.083219327 0.28083199 0.016585529 0.26378006 0.18870211 0.3963204
		 0.14455073 0.47566962 0.1185129 0.46316966 0.13503055 0.37809068 0.1056958 0.5588901
		 0.22701275 0.048857316 0.23061371 0.13941462 0.20177251 0.13786735 0.23121515 0.23021913
		 0.17538527 0.22042108 0.21705312 0.31508556 0.15118147 0.29822534 0.23944941 0.42218593
		 0.16995192 0.49225622 0.11731474 0.567141 0.2608602 0.13707404 0.28814855 0.23191813
		 0.28719896 0.33304155 0.25221327 0.43022758 0.77111864 0.21027997 0.7273953 0.28603211
		 0.771137 0.36177367 0.85860193 0.36176294 0.90232515 0.28601083 0.044837713 0.46370831
		 0.78868026 0.035111338 0.19977057 0.035475165 0.13741198 0.1020046 0.053202756 0.16527769
		 0.00072398782 0.25972107 0.85164183 0.22229597 0.77806318 0.22230494 0.74128151 0.28603047
		 0.77807868 0.34974688 0.85165739 0.349738 0.888439 0.2860125 0.85240686 0.085780978
		 0.78868163 0.048997566 0.85241508 0.1593608 0.78869617 0.19615608 0.72497094 0.15937209
		 0.72496355 0.085792959 0.71293712 0.078851029 0.0013799071 0.36776245 0.7129457 0.16631633
		 0.78869748 0.2100423 0.067567803 0.55201137 0.86444175 0.1663028 0.8644321 0.078836665
		 0.078228489 0.5508579 0.30228966 0.33690462 0.85858345 0.21026927 0.30320632 0.23099874
		 0.27597362 0.13539986 0.13063335 0.57443392 0.26586056 0.04611209 0.25067544 0.046106994
		 0.18240151 0.50098681 0.09788686 0.55335778 0.21746328 0.045365006 0.23652029 0.047758788;
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
		 0.3936086 0.76961845 0.79065025 0.11474319 1.32393551 0.78963542 0.81544149 0.93835616 2.3178172e-08
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
	setAttr -s 21 ".uvst[0].uvsp[0:20]" -type "float2" 0.62433624 0.73174798
		 0.5381453 0.73175102 0.53814358 0.68292284 0.62433457 0.68291992 0.45195439 0.73175389
		 0.4519527 0.68292582 0.36576349 0.73175693 0.36576176 0.68292886 0.27957249 0.73175985
		 0.27957082 0.68293178 0.71052718 0.73174506 0.71052545 0.68291688 0.62433803 0.78057611
		 0.53814703 0.78057921 0.45195609 0.78058207 0.36576512 0.78058493 0.27957422 0.78058803
		 0.19338325 0.78059101 0.19338158 0.73176289 0.19337985 0.68293482 0.71052885 0.78057313;
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
	setAttr -s 35 ".uvst[0].uvsp[0:34]" -type "float2" 0.35035804 0.62760979
		 0.4365491 0.62762147 0.43654168 0.68273646 0.35035062 0.68272471 0.5227499 0.5529896
		 0.00085008144 0.68267667 0.089416876 0.62757438 0.089409411 0.68268919 0.17560789
		 0.62758619 0.17560044 0.68270087 0.26417738 0.55295461 0.2641598 0.68271238 0.40918428
		 0.20776716 0.40918258 0.12157622 0.51451397 0.12157416 0.5145157 0.20776507 0.40919104
		 0.552531 0.51452243 0.5525291 0.40918937 0.46634007 0.51452076 0.46633798 0.40918767
		 0.38014907 0.51451904 0.38014701 0.40918598 0.29395813 0.51451737 0.29395601 0.30385292
		 0.20776924 0.30385125 0.12157831 0.30384946 0.035387345 0.30385798 0.46634212 0.30385625
		 0.38015115 0.30385455 0.29396018 0.40918088 0.035385251 0.5145123 0.035383165 0.30385965
		 0.55253315 0.00086763501 0.55291897 0.52273244 0.68274736;
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
	setAttr -s 414 ".uvst[0].uvsp";
	setAttr ".uvst[0].uvsp[0:249]" -type "float2" 0.84292948 0.11234796 0.84873003
		 0.11234397 0.8139441 0.13771042 0.84294689 0.13769051 0.81972718 0.11236382 0.81974453
		 0.13770646 0.82552773 0.11235985 0.82554507 0.13770249 0.83132827 0.11235586 0.83134568
		 0.13769847 0.83712888 0.11235191 0.83714628 0.13769451 0.84002566 0.10732643 0.83424944
		 0.14271995 0.75048733 0.10868205 0.75080156 0.13402236 0.74500149 0.1340943 0.74468738
		 0.10875398 0.73920137 0.1341662 0.73888719 0.10882592 0.73340136 0.13423814 0.73308712
		 0.10889785 0.72760129 0.13431007 0.76208746 0.10853818 0.75660163 0.1339504 0.7562874
		 0.10861014 0.75912517 0.10355123 0.75376391 0.13900939 0.88230038 0.20822677 0.8881011
		 0.20822597 0.88810444 0.23356861 0.88230395 0.23356938 0.89390147 0.20822519 0.8939051
		 0.2335678 0.89970231 0.20822442 0.89970571 0.23356703 0.9055028 0.20822358 0.90550625
		 0.23356622 0.91130352 0.20822284 0.87650329 0.23357017 0.87939966 0.20320368 0.90840727
		 0.23858929 0.7851705 0.26645494 0.7851693 0.29179698 0.77936882 0.29179674 0.77937001
		 0.26645464 0.77356839 0.29179645 0.77356958 0.2664544 0.76776791 0.29179621 0.7677691
		 0.2664541 0.76196742 0.29179588 0.76196861 0.26645386 0.75616693 0.29179564 0.79097092
		 0.26645517 0.75906861 0.26143032 0.78806925 0.29682052 0.81022328 0.12586541 0.78122056
		 0.12587151 0.78122604 0.15121385 0.77542549 0.15121505 0.78702128 0.12587032 0.78702652
		 0.15121263 0.79282171 0.12586907 0.79282707 0.15121138 0.79862225 0.12586786 0.7986275
		 0.15121019 0.80442268 0.12586664 0.8044281 0.15120894 0.80732197 0.12084262 0.80152893
		 0.15623298 0.99214733 0.1378355 0.99214292 0.16317821 0.98634219 0.16317725 0.98634648
		 0.13783461 0.98054171 0.1631763 0.98054612 0.1378336 0.97474098 0.16317528 0.97474539
		 0.13783252 0.96894038 0.16317427 0.96894467 0.13783157 0.96313971 0.16317332 0.99794793
		 0.13783658 0.96604538 0.13280758 0.99504232 0.16820228 0.74764967 0.19085571 0.71864742
		 0.19086039 0.71865159 0.21620241 0.71285123 0.21620333 0.72444797 0.19085947 0.72445208
		 0.21620148 0.73024833 0.19085854 0.73025244 0.21620053 0.73604882 0.19085759 0.73605293
		 0.21619958 0.7418493 0.19085664 0.7418533 0.21619865 0.74474865 0.18583286 0.73895389
		 0.22122248 0.80578709 0.24979386 0.78044468 0.24979165 0.78044516 0.24399114 0.80578768
		 0.24399331 0.78044569 0.23819058 0.80578804 0.23819277 0.78044617 0.23239002 0.80578858
		 0.23239225 0.78044665 0.22658947 0.80578601 0.26139495 0.78044415 0.25559223 0.80578649
		 0.25559437 0.81080973 0.25849515 0.77542102 0.25269148 0.84872997 0.22723594 0.81972724
		 0.22723952 0.8197304 0.25258201 0.81392968 0.25258273 0.82552773 0.22723886 0.82553089
		 0.2525813 0.83132833 0.22723812 0.83133155 0.25258058 0.83712882 0.22723743 0.83713198
		 0.25257984 0.84292954 0.22723669 0.84293264 0.25257912 0.84582919 0.22221293 0.84003294
		 0.2576029 0.8250401 0.3162128 0.79969752 0.31621179 0.79969788 0.31041121 0.82504034
		 0.31041229 0.799698 0.30461064 0.8250407 0.30461165 0.79969835 0.29881006 0.82504082
		 0.29881108 0.79969859 0.29300943 0.82503963 0.32781407 0.7996974 0.32201242 0.82503986
		 0.32201344 0.83006334 0.32491395 0.79467392 0.31911194 0.85835642 0.26260826 0.82935399
		 0.26261067 0.82935601 0.28795284 0.82355565 0.28795332 0.83515453 0.2626102 0.83515656
		 0.28795236 0.84095496 0.26260972 0.84095711 0.28795186 0.8467555 0.26260924 0.84675759
		 0.28795138 0.85255605 0.26260874 0.85255814 0.28795096 0.85545582 0.25758517 0.84965825
		 0.29297462 0.91649354 0.33741587 0.89115101 0.33741656 0.89115077 0.33161595 0.91649342
		 0.33161533 0.89115065 0.32581541 0.91649324 0.32581472 0.89115053 0.32001483 0.91649306
		 0.32001415 0.89115041 0.31421426 0.91649389 0.34901705 0.89115113 0.34321713 0.91649371
		 0.34321645 0.92151737 0.34611663 0.88612747 0.34031695 0.13222158 0.92433 0.74110162
		 0.52295017 0.6913451 0.90989381 0.7352165 0.93591976 0.68519455 0.6197964 0.57952029
		 0.90989476 0.74111235 0.71663642 0.46769559 0.90989578 0.85293704 0.71663022 0.35587081
		 0.90989667 0.90884411 0.619784 0.24404606 0.90989769 0.088836297 0.78071916 0.0008559525
		 0.78070778 0.57205796 0.88781428 0.13215566 0.88785791 0.44075787 0.78077316 0.48407745
		 0.88782573 0.35277748 0.7807585 0.39609706 0.88783491 0.26479709 0.78074455 0.30811656
		 0.88784385 0.17681669 0.78073114 0.22013617 0.88785195 0.48407662 0.88033116 0.47974932
		 0.869735 0.56772923 0.86972368 0.04417482 0.88036871 0.39609635 0.88034046 0.39176893
		 0.86974418 0.3081159 0.88034928 0.3037889 0.86975288 0.12782857 0.86976695 0.13215512
		 0.88036323 0.21580881 0.86976105 0.22013545 0.88035738 0.0051797032 0.79879951 0.52873695
		 0.78828365 0.088835284 0.78821361 0.093159854 0.7988109 0.44508076 0.79886508 0.44075644
		 0.78826761 0.35710049 0.79885042 0.35277623 0.78825301 0.18114007 0.798823 0.17681555
		 0.78822577 0.26479593 0.78823912 0.2691204 0.79883641 0.26411831 0.80105662 0.22079362
		 0.86752915 0.57205701 0.88031983 0.2244606 0.86976039 0.35209799 0.80104792 0.44007826
		 0.80103886 0.52805626 0.80102861 0.088160217 0.80106902 0.17614007 0.80106354 0.31244099
		 0.86975217 0.13648057 0.86976641 0.04850015 0.86977166 0.40042126 0.86974329 0.48840117
		 0.86973393 0.99794364 0.16317916 0.98924184 0.16820121 0.98344111 0.16820019 0.97764051
		 0.1681993 0.97183979 0.16819823 0.96603942 0.16819727 0.97184587 0.13280863 0.97764647
		 0.13280958 0.98344731 0.13281059 0.98924774 0.13281155 0.99504852 0.13281262 0.96314406
		 0.13783056 0.91130686 0.23356542 0.90260667 0.23859009 0.89680612 0.23859087 0.89100552
		 0.23859169 0.88520497 0.23859246 0.87940437 0.23859327 0.88520008 0.2032029 0.89100075
		 0.20320213;
	setAttr ".uvst[0].uvsp[250:413]" 0.89680123 0.20320132 0.90260184 0.20320055
		 0.90840256 0.20319974 0.87649989 0.20822757 0.7754215 0.24689101 0.77542198 0.24109042
		 0.77542251 0.23528986 0.77542305 0.22948933 0.77542055 0.25849205 0.78044367 0.26139274
		 0.81081212 0.2294924 0.81081176 0.23529293 0.81081128 0.24109346 0.81081092 0.24689405
		 0.81081009 0.25269455 0.80578905 0.22659168 0.88612741 0.33451641 0.88612729 0.32871577
		 0.88612717 0.32291526 0.88612705 0.31711462 0.88612777 0.34611756 0.89115131 0.34901771
		 0.9215163 0.31711373 0.9215166 0.32291436 0.92151678 0.32871485 0.9215169 0.33451545
		 0.92151707 0.34031606 0.91649294 0.31421354 0.82844877 0.14272395 0.82264823 0.14272788
		 0.81684768 0.14273185 0.84585083 0.14271203 0.8400501 0.14271602 0.84874761 0.13768658
		 0.84582639 0.10732248 0.8168233 0.10734236 0.82262397 0.10733837 0.82842457 0.10733438
		 0.83422506 0.10733043 0.81392658 0.11236781 0.79467416 0.31331134 0.7946744 0.30751076
		 0.79467463 0.30171016 0.79467487 0.29590955 0.79467368 0.32491255 0.79969698 0.327813
		 0.83006454 0.29591095 0.83006418 0.30171159 0.83006406 0.30751216 0.8300637 0.31331277
		 0.83006346 0.31911331 0.82504106 0.2930105 0.79572839 0.15623417 0.7899279 0.1562354
		 0.7841273 0.15623665 0.77832681 0.15623787 0.80732942 0.15623173 0.81022865 0.15120775
		 0.77831936 0.12084872 0.78411984 0.12084749 0.78992039 0.12084627 0.79572088 0.12084505
		 0.80152142 0.12084383 0.77542013 0.12587276 0.79096973 0.29179728 0.78226888 0.29682028
		 0.77646834 0.29681998 0.77066785 0.29681975 0.76486742 0.29681945 0.75906694 0.29681915
		 0.76486909 0.26143056 0.77066952 0.26143086 0.77647001 0.26143116 0.78227055 0.26143146
		 0.78807104 0.26143169 0.75616813 0.26645356 0.73315352 0.22122343 0.72735304 0.22122435
		 0.72155261 0.22122528 0.71575212 0.22122619 0.74475431 0.22122152 0.74765396 0.21619773
		 0.71574646 0.18583752 0.72154683 0.1858366 0.72734731 0.18583564 0.7331478 0.18583472
		 0.73894817 0.18583377 0.71284705 0.19086134 0.84385771 0.29297504 0.83805722 0.29297549
		 0.83225679 0.29297596 0.82645625 0.2929765 0.85545868 0.29297411 0.85835856 0.28795052
		 0.82645333 0.25758752 0.83225381 0.25758705 0.83805442 0.25758657 0.84385484 0.25758606
		 0.84965533 0.25758559 0.8235535 0.26261115 0.74796385 0.13908128 0.74216378 0.13915324
		 0.73636371 0.13922516 0.73056358 0.1392971 0.75956398 0.13893744 0.76240176 0.13387851
		 0.73012477 0.1039108 0.73592484 0.10383888 0.74172491 0.10376696 0.74752498 0.10369504
		 0.75332505 0.10362309 0.72728705 0.10896976 0.83423245 0.25760365 0.82843184 0.25760436
		 0.82263124 0.25760508 0.81683075 0.25760579 0.84583354 0.25760224 0.84873307 0.25257844
		 0.81682634 0.22221649 0.82262683 0.22221574 0.82842749 0.22221506 0.83422804 0.22221434
		 0.84002858 0.22221363 0.8139267 0.22724026 0.84704167 0.93591464 0.13222137 0.9098984
		 0.24404624 0.92432916 0.85292631 0.52294403 0.90294987 0.83906853 0.35587096 0.92432809
		 0.84703285 0.74222744 0.46769568 0.92432719 0.73520768 0.74223256 0.57952046 0.92432654
		 0.02039668 0.90989929 0.67929941 0.83907866 0.020396769 0.92433083 0.69134527 0.92432559
		 0.00085499883 0.78820223 0.13281469 0.8675164 0.044834957 0.86750484 0.48473227 0.86757267
		 0.39675319 0.86755729 0.30877334 0.86754298 0.26046833 0.7988351 0.34844846 0.79884899
		 0.084507734 0.79880989 0.17248803 0.79882181 0.43642867 0.79886365 0.52440882 0.79887962
		 0.83511829 0.91526496 0.7471379 0.9152689 0.87910509 0.8390696 0.83511132 0.7628783
		 0.74713087 0.76288223 0.70314407 0.83907759 0.044175267 0.88786304 0.88499939 0.61978525
		 0.84100515 0.54359484 0.84101355 0.69598079 0.75303346 0.69598567 0.70903921 0.61979508
		 0.75302505 0.54359972 0.52873826 0.78078908;
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
		mu 0 4 193 192 196 228
		f 4 -408 409 410 411
		mu 0 4 197 196 198 225
		f 4 -405 412 413 414
		mu 0 4 195 227 200 201
		f 4 -414 415 416 417
		mu 0 4 201 226 202 203
		f 4 -411 418 -417 419
		mu 0 4 199 198 203 219
		f 4 420 421 422 423
		mu 0 4 204 388 206 396
		f 4 -421 424 425 426
		mu 0 4 205 399 208 209
		f 4 -426 427 428 429
		mu 0 4 209 398 210 211
		f 4 430 431 432 433
		mu 0 4 212 213 214 394
		f 4 -431 434 -423 435
		mu 0 4 213 397 207 206
		f 4 -429 436 -433 437
		mu 0 4 211 395 215 214
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
		mu 0 4 185 187 196 192
		f 4 366 452 -415 453
		mu 0 4 183 406 195 201
		f 4 369 454 -410 -451
		mu 0 4 187 189 198 196
		f 4 370 455 -419 -455
		mu 0 4 189 191 203 198
		f 4 371 -454 -418 -456
		mu 0 4 191 183 201 203
		f 4 367 -452 -406 -453
		mu 0 4 182 185 192 218
		f 4 -362 456 -427 457
		mu 0 4 184 413 205 209
		f 4 -366 458 -436 459
		mu 0 4 180 190 213 206
		f 4 -364 460 -438 461
		mu 0 4 188 186 211 214
		f 4 -363 -458 -430 -461
		mu 0 4 186 184 209 211
		f 4 -361 -460 -422 -457
		mu 0 4 181 180 206 388
		f 4 -365 -462 -432 -459
		mu 0 4 190 188 214 213;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "9AA4F0EF-4BEF-6B10-7135-D588845E5E17";
	setAttr -s 2 ".lnk";
	setAttr -s 2 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "C9F62751-4BC2-D192-8748-338F3A96385A";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "8150C2F4-47E7-BF38-042C-4988CED3BF0D";
createNode displayLayerManager -n "layerManager";
	rename -uid "6E354B7B-424E-DB17-03B5-04AF73634986";
createNode displayLayer -n "defaultLayer";
	rename -uid "972FB830-4598-1C36-9621-118B166372AE";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "0442B15D-4EA3-24E2-33FA-01A9B771A83F";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "E61E724D-4F6E-01F8-EA3F-818E7712227A";
	setAttr ".g" yes;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "4E804083-4002-8B37-2C34-159E19206598";
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
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
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
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1118\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1118\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
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
createNode groupId -n "groupId18";
	rename -uid "DE0DB13E-45DC-2ABF-F37B-CCA4620ED677";
	setAttr ".ihi" 0;
createNode groupId -n "groupId19";
	rename -uid "E233486F-4554-B6A8-D164-49A967FF598E";
	setAttr ".ihi" 0;
createNode groupId -n "groupId20";
	rename -uid "C2F98AE5-4369-F54F-7FFE-CCA31D772F44";
	setAttr ".ihi" 0;
createNode groupId -n "groupId22";
	rename -uid "2F78609D-4C1C-A694-A4D7-F18791BB1019";
	setAttr ".ihi" 0;
createNode groupId -n "groupId23";
	rename -uid "974CAF64-4433-1A93-FA92-089D587CCC6E";
	setAttr ".ihi" 0;
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
	setAttr -s 15 ".dsm";
	setAttr ".ro" yes;
	setAttr -s 5 ".gn";
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
connectAttr "groupId18.id" "Small_TShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Small_TShape.iog.og[0].gco";
connectAttr "groupId19.id" "Medium_TShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Medium_TShape.iog.og[0].gco";
connectAttr "groupId20.id" "Medium_CapShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Medium_CapShape.iog.og[0].gco";
connectAttr "groupId22.id" "Large_TShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Large_TShape.iog.og[0].gco";
connectAttr "groupId23.id" "Large_CapShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Large_CapShape.iog.og[0].gco";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "Small_SingleShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Medium_SingleShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Large_SingleShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Small_CornerShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Medium_CornerShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Large_CornerShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Small_HalfShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Medium_HalfShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Large_HalfShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Small_EndCapShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "Small_TShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "Medium_TShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "Medium_CapShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "Large_TShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "Large_CapShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId18.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId19.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId20.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId22.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId23.msg" ":initialShadingGroup.gn" -na;
// End of Pipes.ma
