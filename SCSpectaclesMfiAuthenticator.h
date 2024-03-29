//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSpectaclesMfiAuthenticator : NSObject
{
    struct EyewearAuthenticator *_authenticator;
}

@property(nonatomic) struct EyewearAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
- (void)dealloc;
- (id)generateMFIChallenge;
- (id)init;
- (_Bool)setMfiCert:(id)arg1;
- (_Bool)verifyMfiResponse:(id)arg1;
- (_Bool)verifyScCert:(id)arg1 publicKey:(id)arg2 magicVersion:(id)arg3;

@end

