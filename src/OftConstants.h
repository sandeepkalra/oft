/* Copyright (C) : SandeepKalra */
#ifndef _OFT_CONSTANTS_H_
#define _OFT_CONSTANTS_H_


#define OFTSOM '\001'

/*Tags */
enum oftTags {
		// ============= BASIC ==============
		oftBeginString					= 8,	/* Mandatory */	
		oftBodyLengh			        = 9,	/* Mandatory */
		oftMsgType				        = 35,	/* Mandatory */
		oftSenderCompId			        = 49,	/* Mandatory */
		oftTargetCompId			        = 56,	/* Mandatory */
                                                                
		oftApplVerId			        = 1128, /* Optional */
		oftApplExtId			        = 1156, /* Optional */
		oftCstmApplVerId		        = 1129, /* Optional */
		oftOnBehalfOfCompId		        = 115,  /* Optional */
		oftDeliverToCompId		        = 128,  /* Optional */
		oftSecureDataLen		        = 90,	/* Optional */
		oftSecureData			        = 91,	/* Optional */
		oftMsgSeqNum			        = 34,	/* Mandatory */
		oftSenderSubId			        = 50,	/* Optional */
		oftSenderLocationID		        = 142,	/* Optional */
		oftTargetSubID			        = 57,	/* Optional */
		oftTargetLocationID		        = 143,	/* Optional */
		oftOnBehalfOfSubID		        = 116,	/* Optional */
		oftOnBehalfOfLocationID         = 144,	/* Optional */
		oftDeliverToSubID		        = 129,	/* Optional */
		oftDeliverToLocationID 	        = 145,	/* Optional */
		oftPossDupFlag			        = 43,	/* Optional */
		oftPossResend			        = 97,	/* Optional */
		oftSendingTime			        = 52,	/* Mandatory */
		oftOrigSendingTime		        = 122,	/* Optional */
		oftXmlDataLen			        = 212,	/* Optional */
		oftXmlData				        = 213,	/* Optional */
		oftMessageEncoding		        = 347,	/* Optional  */
		oftLastMsgSeqNumProcessed 		= 369,/* Optional */
		oftOnBehalfOfSendingTime 		= 370, /* Optional */
		// ============= TRAILER ==============
		oftSignatureLength				= 93,	/* Mandatory */	
		oftSignature		           	= 89,	/* Mandatory */
		oftChecksum			           	= 10,	/* Mandatory */
		// =============== HOPGRP ===============
		oftNoHops						= 627,	
		oftHopCompId			        = 628,
		oftHopSendingTime		        = 629,
		oftHopRefId				        = 630,
		// === TestRequest  & HeartBeat ==========
		oftTestReqID					= 112, /* Optional */
		// ============== Logon ==================
		oftEncrypMethod					= 98, /* Mandatory */	
		oftHeartBtInt			        = 108, 
		oftRawDataLength		        = 95,
		oftRawData				        = 96,
		oftResetSeqNumFlag		        = 141,
		oftNextExpectedMsgSeqNum        = 789,
		oftMaxMessageSize	 	        = 383,
		// ======== Logon: MsgTypeGrp ============
		oftTestMessageIndicator			= 464, 
		oftUserName				        = 553,
		oftPassword				        = 554,
		oftNewPassword			        = 925,
		oftEncyptedPasswordMethod 		= 1400,
		oftEncryptedPasswordLen 		= 1401,
		oftEncryptedPassword 			= 1402,
		oftEncryptedNewPasswordLen 		= 1403,
		oftEncryptedNewPassword 		= 1404,
		oftSessionStatus		        = 1409,
		oftDefaultApplVerID		        = 1137,
		oftDefaultApplExtId		        = 1407,
		oftDefaultCstmApplVerID         = 1408,
		oftText					        = 58,
		oftEncodedTextLen		        = 354,
		oftEncodedText			        = 355,
		oftNoMsgTypes					= 384,
		oftRefMsgType			        = 372,
		oftMsgDirection			        = 385,
		oftRefApplVerID			        = 1130,
		oftRefApplExtID			        = 1406,
		oftRefCstmApplVerID 	        = 1131,
		oftDefaultVerIndicator 	        = 1410,
		// ============= RESEND ==============
		oftBeginSeqNo					= 7, 	
		oftEndSeqNo				        = 16,
		// ============= REJECT ==============
		oftRefSeqNum					= 45,
		oftRefTagID				        = 371,
		oftSessionRejectReason 	        = 373,
		oftGapFillFlag			        = 123,
		oftNewSeqNo				        = 36,
};

enum oftRejectReasons {
		oftInvalidTag 					= 0,  	
		oftRequiredTagMissing			= 1,  	
		oftTagNotDefined				= 2,  	
		oftUndefinedTag					= 3,  	
		oftTagSpecifiedWithoutValue		= 4,  	
		oftInvalidValue					= 5,  	
		oftIncorrectDataFormat			= 6,  	
		oftDecryptionProblem			= 7,  	
		oftSignatureProblem				= 8,  	
		oftCompIDProblem				= 9,  	
		oftSendingTimeAccuracyProblem	= 10, 	
		oftInvalidMsgType				= 11, 	
		oftXMLValidationErr				= 12, 	
		oftTagAppearsMoreThanOnce		= 13, 	
		oftSpecifiedTagIsOutOfOrder		= 14, 	
		oftRepeatingGrpFieldsOutOfOrder	= 15, 	
		oftIncorrectNumInGrp			= 16, 	
		oftNonDataValueIncluded			= 17, 	
		oftOthersReasons				= 99  	
};


enum oftSessionMsgType {
		oftLogon						= 0,
		oftLogout,
		oftHeartBeat,
		oftTestRequest,
		oftResetRequest,
		oftReject,
};
enum oftApplicationMsgTypes {
		oftNewOrder,
		// ....
};

#endif
