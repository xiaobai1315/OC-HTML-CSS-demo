//
//  SecConDeInte.h
//  FTSTDDemo
//
//  Created by ID on 17/5/15.
//  Copyright © 2017年 ID. All rights reserved.
//

#ifndef SecConDeInte_h
#define SecConDeInte_h

//open debugger check
//open define

#define DEBUGCHECK_
#define FTDEFINE_


#ifdef FTDEFINE_

//
#define           FTBLEConnectVC         ______ft_a3
#define   FTUkeyManageController         ______ft_a4
#define   FTdoSignViewController         ______ft_a5
#define    FTDownloadCertificate         ______ft_a6
#define           FTDeciceListen         ______ft_a7
#define           FTSafeKeyBoard         ______ft_a8
#define        initializeKeyInfo         ______ft_a9
#define                 FTdoSign        ______ft_a10
#define               SignResult        ______ft_a11
#define                   SignDN        ______ft_a12

#define                 DeviceSN        ______ft_a15
#define              beginDoSign        ______ft_a16
#define               oneKeyInit        ______ft_a17
#define             downloadCert        ______ft_a18
#define       FTInitAndGetPubKey        ______ft_a19

#define              FTWriteCert        ______ft_a25
#define             FT_HandShake        ______ft_a26
#define      FT_VerifyPairedCode        ______ft_a27
#define            FT_GetDevInfo        ______ft_a28
#define               FT_SendMsg        ______ft_a29
#define             FT_RemoveDev        ______ft_a30
#define             bleHandShake        ______ft_a31
#define              FT_getuuid_        ______ft_a32
#define      getPairedKeyDEVHash        ______ft_a33
#define      savePairedKeyUDUUID        ______ft_a34
#define       getPairedKeyUDUUID        ______ft_a35
#define    userDefaultKeyDEVHash        ______ft_a36
#define    getKeychainIdentifier        ______ft_a37
#define          getKeychainHash        ______ft_a38
#define      keychainHashConnect        ______ft_a39
#define       initWithInputField        ______ft_a40
#define               getTheText        ______ft_a41
#define                VerifyPIN        ______ft_a42
#define                ChangePIN        ______ft_a43
#define         cmdChangeUserPIN        ______ft_a44
#define                 XuShiPwd        ______ft_a45
#define              PINInfoInit        ______ft_a46
#define        GetDeviceID_Multi        ______ft_a47
#define              ReadMulCert        ______ft_a48
#define         im_BuildSafeAPDU        ______ft_a49
#define             im_SendToCOS        ______ft_a50
#define          im_TransmitAPDU        ______ft_a51
#define        WaitingForKeyDown        ______ft_a52
#define           parseMultiAPDU        ______ft_a53
#define             transmitThis        ______ft_a54

#define             randMemAlloc        ______ft_a55
#define             randCover           ______ft_a56
#define             getRandom           ______ft_a57
//Tiny_midwareF
#define            ModInitialize        ______ft_a58
#define              ModFinalize        ______ft_a59
#define          ScanDeviceStart        ______ft_a60
#define           ScanDeviceStop        ______ft_a61
#define            ConnectDevice        ______ft_a62
#define         DisConnectDevice        ______ft_a63
#define              GetCertList        ______ft_a64
#define             GetCertValue        ______ft_a65
#define             GetTokenInfo        ______ft_a66
#define             GetPINRetrys        ______ft_a67

#define         GenerateKeyPairs        ______ft_a70
#define               ImportCert        ______ft_a71
#define               GetKeyInfo        ______ft_a72
#define             GetSignature        ______ft_a73
#define              GetLanguage        ______ft_a74
#define              SetLanguage        ______ft_a75
#define             LowLeverInit        ______ft_a76
//--Tiny_midwareF
//#define        isDeviceJailBreak        ______ft_a77
#define            debuggerCheck        ______ft_a78
#define          detectionDCTime        ______ft_a79


#define FTPinCacheViewController        ______ft_a80
#define          FTPublicMethods        ______ft_a81
#define              MyAlertView        ______ft_a82
#define FTCertInfoViewController        ______ft_a83
#define    FTKeychainItemWrapper        ______ft_a84
#define           PsdUITextField        ______ft_a85
#define           FTDrowListView        ______ft_a86
#define     FTCheckDownloadCerts        ______ft_a87
#define       FTExceptionHandler        ______ft_a88
#define FTPasswordViewController        ______ft_a89
//Tiny_midwareF
#define         FT_ModInitialize        ______ft_a90
#define           FT_ModFinalize        ______ft_a91
#define          FT_GetTokenInfo        ______ft_a92
#define       FT_EnumCertificate        ______ft_a93
#define        FT_GetCertificate        ______ft_a94
#define             FT_VerifyPIN        ______ft_a95
#define             FT_ChangePIN        ______ft_a96
#define          FT_GetSignature        ______ft_a97
#define       FT_VerifySignature        ______ft_a98
#define               FT_EncData        ______ft_a99
#define               FT_DecData       ______ft_a100
#define             FT_Pkcs7Pack       ______ft_a101
#define       FT_VerifyPkcs7Pack       ______ft_a102
#define        FT_GetScreenState       ______ft_a103
#define            FT_OneKeyInit       ______ft_a104
#define    FT_DownloadCertFinish       ______ft_a105
#define           FT_GenKeyPairs       ______ft_a106
#define              FT_KeysSign       ______ft_a107
#define               FT_KeySign       ______ft_a108
#define       FT_ImpoCertForKeys       ______ft_a109
#define              FT_GetBCert       ______ft_a110
#define            FT_GetIDSigns       ______ft_a111
#define         FT_GetX509PubKey       ______ft_a112
#define       FT_IsNewCosVersion       ______ft_a113
#define                 FT_GetSN       ______ft_a114


#define           IsTokenPresent       ______ft_a115
#define                  RSASign       ______ft_a116
#define                VerifySig       ______ft_a117
#define                  EncData       ______ft_a118
#define                  DecData       ______ft_a119
#define           GetScreenState       ______ft_a120
#define           SetScreenState       ______ft_a121
#define               GetCharset       ______ft_a122
#define               SetCharset       ______ft_a123
#define          GetLanguageType       ______ft_a124
#define          SetLanguageType       ______ft_a125
#define               OneKeyInit       ______ft_a126
#define       DownloadCertFinish       ______ft_a127
#define              GenKeyPairs       ______ft_a128
#define               GenKeyPair       ______ft_a129
#define                  KeySign       ______ft_a130
#define                 KeysSign       ______ft_a131
#define          ImpoCertForKeys       ______ft_a132
#define                 GetBCert       ______ft_a133
#define               GetIDSigns       ______ft_a134
#define            GetX509PubKey       ______ft_a135
#define          cmdSM2VerifySig       ______ft_a136
#define             cmdVerifyPIN       ______ft_a137
#define             cmdChangePIN       ______ft_a138
#define            FT_CTokenYXYC       ______ft_a139
#define              getSignData       ______ft_a140
#define      getRSAPlainHashData       ______ft_a141
#define getRSAHashDataFromSignature    ______ft_a142
#define            getRSAEncData       ______ft_a143
#define            getSM2EncData       ______ft_a144
#define            getRSADecData       ______ft_a145
#define            getSM2DecData       ______ft_a146
#define              getX509Cert       ______ft_a147
#define            checkCertAlgo       ______ft_a148
#define             SMCertToCert       ______ft_a149
#define         cmdGetPowerState       ______ft_a150
#define            getSessionKey       ______ft_a151
#define              cmdSelectDF       ______ft_a152
#define            cmdSelectFile       ______ft_a153
#define            cmdReadBinary       ______ft_a154
#define           cmdWriteBinary       ______ft_a155
#define        cmdGetSMTokenInfo       ______ft_a156
#define       cmdUpdateTokenInfo       ______ft_a157
#define   cmdReadBuddyFileSystem       ______ft_a158
#define           cmdGetCertInfo       ______ft_a159
#define              getCertInfo       ______ft_a160
#define           changeCertInfo       ______ft_a161
#define    getDataValueFromBuddy       ______ft_a162
#define cmdGetCertDataValueByBuddy     ______ft_a163
#define      cmdGetCertDataValue       ______ft_a164
#define          cmdGetPinRetrys       ______ft_a165
#define             GetPinRetrys       ______ft_a166
#define             cmdGetRandom       ______ft_a167
#define          cmdGetPinPubKey       ______ft_a168
#define                 waitType       ______ft_a169
#define                GetEncPin       ______ft_a170
#define              IsSameToken       ______ft_a171
#define              checkSMAlgo       ______ft_a172
#define            checkSignAlgo       ______ft_a173
#define        checkCertIterator       ______ft_a174
#define                  cmdHash       ______ft_a175
#define                cmdSetMSE       ______ft_a176
#define                  cmdSign       ______ft_a177
#define                addPubKey       ______ft_a178
#define                addPrvKey       ______ft_a179
#define                  addCert       ______ft_a180
#define             addContainer       ______ft_a181
#define                   getMod       ______ft_a182
#define                   addTLV       ______ft_a183
#define              addContName       ______ft_a184
//--Tiny_midwareF

#endif //FTDEFINE_
/*不要开启下面内容
//#define JAILBREAK_
//#define                FTABCBank         ______ft_a1
//#define               SecCodeImp         ______ft_a2
//#define                  SignAlg        ______ft_a13
//#define                  HashAlg        ______ft_a14
//#define                   random        ______ft_a20
//#define                       dn        ______ft_a21
//#define                birthCert        ______ft_a22
//#define                   idSign        ______ft_a23
//#define                      P10        ______ft_a24
//#define                VerifyPIN        ______ft_a68
//#define                ChangePIN        ______ft_a69
*/
namespace FT_MY {

void * randMemAlloc(unsigned int len);
void randCover(unsigned char * dataT , unsigned int dataTLen);
void debuggerCheck();
//0 if successful
bool getRandom(unsigned char *output, int output_len);
}

#endif /* SecConDeInte_h */
