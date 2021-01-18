//
// Created by lucas on 01/16/2021.
//

#include "BeginnerProblemsList.h"

#include "Problem1001.h"
#include "Problem1002.h"
#include "Problem1003.h"
#include "Problem1005.h"
#include "Problem1006.h"
#include "Problem1004.h"
#include "Problem1008.h"
#include "Problem1007.h"
#include "Problem1009.h"
#include "Problem1010.h"
#include "Problem1011.h"
#include "Problem1012.h"
#include "Problem1013.h"
#include "Problem1014.h"
#include "Problem1015.h"
#include "Problem1016.h"
#include "Problem1017.h"
#include "Problem1018.h"
#include "Problem1019.h"
#include "Problem1020.h"
#include "Problem1021.h"
#include "Problem1035.h"
#include "Problem1036.h"
#include "Problem1037.h"
#include "Problem1040.h"
#include "Problem1038.h"
#include "Problem1041.h"
#include "Problem1044.h"
#include "Problem1043.h"
#include "Problem1042.h"
#include "Problem1045.h"
#include "Problem1050.h"
#include "Problem1051.h"
#include "Problem1052.h"
#include "Problem1046.h"
#include "Problem1047.h"
#include "Problem1048.h"
#include "Problem1049.h"
#include "Problem1059.h"
#include "Problem1061.h"
#include "Problem1060.h"
#include "Problem1064.h"
#include "Problem1065.h"
#include "Problem1066.h"
#include "Problem1067.h"
#include "Problem1070.h"
#include "Problem1071.h"
#include "Problem1072.h"
#include "Problem1073.h"
#include "Problem1094.h"
#include "Problem1098.h"
#include "Problem1115.h"
#include "Problem1143.h"
#include "Problem1144.h"
#include "Problem1074.h"
#include "Problem1075.h"
#include "Problem1078.h"
#include "Problem1079.h"
#include "Problem1080.h"
#include "Problem1095.h"
#include "Problem1096.h"
#include "Problem1097.h"
#include "Problem1099.h"
#include "Problem1101.h"
#include "Problem1113.h"
#include "Problem1114.h"
#include "Problem1116.h"
#include "Problem1117.h"
#include "Problem1118.h"
#include "Problem1131.h"
#include "Problem1132.h"
#include "Problem1133.h"
#include "Problem1134.h"
#include "Problem1142.h"
#include "Problem1146.h"
#include "Problem1145.h"
#include "Problem1150.h"
#include "Problem1149.h"
#include "Problem1151.h"
#include "Problem1154.h"
#include "Problem1153.h"
#include "Problem1156.h"
#include "Problem1155.h"
#include "Problem1157.h"
#include "Problem1158.h"
#include "Problem1159.h"
#include "Problem1160.h"
#include "Problem1164.h"
#include "Problem1165.h"
#include "Problem1180.h"
#include "Problem1181.h"
#include "Problem1172.h"
#include "Problem1173.h"
#include "Problem1174.h"
#include "Problem1175.h"
#include "Problem1176.h"
#include "Problem1177.h"
#include "Problem1178.h"
#include "Problem1179.h"
#include "Problem1866.h"
#include "Problem1914.h"
#include "Problem1924.h"
#include "Problem1929.h"
#include "Problem1930.h"
#include "Problem1183.h"
#include "Problem1184.h"
#include "Problem1182.h"
#include "Problem1185.h"
#include "Problem1186.h"
#include "Problem1187.h"
#include "Problem1188.h"
#include "Problem1189.h"
#include "Problem1190.h"
#include "Problem1435.h"
#include "Problem1478.h"
#include "Problem1534.h"
#include "Problem1541.h"
#include "Problem1557.h"
#include "Problem1564.h"
#include "Problem1589.h"
#include "Problem1759.h"
#include "Problem1789.h"
#include "Problem1827.h"
#include "Problem1828.h"
#include "Problem1837.h"
#include "Problem1847.h"
#include "Problem1848.h"
#include "Problem1858.h"
#include "Problem1864.h"
#include "Problem1865.h"

map<int, Problem *> BeginnerProblemsList::list() {
    return map<int, Problem *>{
            {1001, new Problem1001()},
            {1002, new Problem1002()},
            {1003, new Problem1003()},
            {1004, new Problem1004()},
            {1005, new Problem1005()},
            {1006, new Problem1006()},
            {1007, new Problem1007()},
            {1008, new Problem1008()},
            {1009, new Problem1009()},
            {1010, new Problem1010()},
            {1011, new Problem1011()},
            {1012, new Problem1012()},
            {1013, new Problem1013()},
            {1014, new Problem1014()},
            {1015, new Problem1015()},
            {1016, new Problem1016()},
            {1017, new Problem1017()},
            {1018, new Problem1018()},
            {1019, new Problem1019()},
            {1020, new Problem1020()},
            {1021, new Problem1021()},
            {1035, new Problem1035()},
            {1036, new Problem1036()},
            {1037, new Problem1037()},
            {1038, new Problem1038()},
            {1040, new Problem1040()},
            {1041, new Problem1041()},
            {1042, new Problem1042()},
            {1043, new Problem1043()},
            {1044, new Problem1044()},
            {1045, new Problem1045()},
            {1046, new Problem1046()},
            {1047, new Problem1047()},
            {1048, new Problem1048()},
            {1049, new Problem1049()},
            {1050, new Problem1050()},
            {1051, new Problem1051()},
            {1052, new Problem1052()},
            {1059, new Problem1059()},
            {1060, new Problem1060()},
//            {1061, new Problem1061()}, // java
            {1064, new Problem1064()},
            {1065, new Problem1065()},
            {1066, new Problem1066()},
            {1067, new Problem1067()},
            {1070, new Problem1070()},
            {1071, new Problem1071()},
            {1072, new Problem1072()},
            {1073, new Problem1073()},
            {1074, new Problem1074()},
            {1075, new Problem1075()},
            {1078, new Problem1078()},
            {1079, new Problem1079()},
            {1080, new Problem1080()},
            {1094, new Problem1094()},
            {1095, new Problem1095()},
            {1096, new Problem1096()},
            {1097, new Problem1097()},
            {1098, new Problem1098()},
            {1099, new Problem1099()},
            {1101, new Problem1101()},
            {1113, new Problem1113()},
            {1114, new Problem1114()},
            {1115, new Problem1115()},
            {1116, new Problem1116()},
            {1117, new Problem1117()},
            {1118, new Problem1118()},
            {1131, new Problem1131()},
            {1132, new Problem1132()},
            {1133, new Problem1133()},
            {1134, new Problem1134()},
            {1142, new Problem1142()},
            {1143, new Problem1143()},
            {1144, new Problem1144()},
            {1145, new Problem1145()},
            {1146, new Problem1146()},
            {1149, new Problem1149()},
            {1150, new Problem1150()},
            {1151, new Problem1151()},
            {1153, new Problem1153()},
            {1154, new Problem1154()},
            {1155, new Problem1155()},
            {1156, new Problem1156()},
            {1157, new Problem1157()},
            {1158, new Problem1158()},
            {1159, new Problem1159()},
            {1160, new Problem1160()},
            {1164, new Problem1164()},
            {1165, new Problem1165()},
            {1172, new Problem1172()},
            {1173, new Problem1173()},
            {1174, new Problem1174()},
            {1175, new Problem1175()},
            {1176, new Problem1176()},
            {1177, new Problem1177()},
            {1178, new Problem1178()},
            {1179, new Problem1179()},
            {1180, new Problem1180()},
            {1181, new Problem1181()},
            {1182, new Problem1182()},
            {1183, new Problem1183()},
            {1184, new Problem1184()},
            {1185, new Problem1185()},
            {1186, new Problem1186()},
            {1187, new Problem1187()},
            {1188, new Problem1188()},
            {1189, new Problem1189()},
            {1190, new Problem1190()},
            {1435, new Problem1435()},
            {1478, new Problem1478()},
            {1534, new Problem1534()},
            {1541, new Problem1541()},
            {1557, new Problem1557()},
            {1564, new Problem1564()},
            {1589, new Problem1589()},
            {1759, new Problem1759()},
            {1789, new Problem1789()},
            {1827, new Problem1827()},
            {1828, new Problem1828()},
            {1837, new Problem1837()},
            {1847, new Problem1847()},
            {1848, new Problem1848()},
            {1858, new Problem1858()},
            {1864, new Problem1864()},
            {1865, new Problem1865()},
            {1866, new Problem1866()},
            {1914, new Problem1914()},
            {1924, new Problem1924()},
            {1929, new Problem1929()},
            {1930, new Problem1930()},
    };
}