//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSnapConnectEncryption : NSObject
{
}

+ (id)decodeAndDecryptString:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (void)startWithWEncryptionKeyFetch:(id)arg1 fingerprint:(id)arg2 clientId:(id)arg3 scsdkuseragent:(id)arg4 urlSesison:(id)arg5 callbackQueue:(id)arg6 successCallback:(CDUnknownBlockType)arg7 failureCallback:(CDUnknownBlockType)arg8;

@end

