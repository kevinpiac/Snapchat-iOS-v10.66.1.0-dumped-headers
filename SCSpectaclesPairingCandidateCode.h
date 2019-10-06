//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SCSpectaclesPairingCandidateCode : NSObject
{
    NSData *_candidateCode;
    NSData *_advertisementCode;
    NSData *_verificationCode;
}

+ (id)allBackupPairingCodes;
+ (id)backupPairingCodeLaguna;
+ (id)backupPairingCodeMalibu;
+ (id)backupPairingCodeNeptune;
+ (id)backupPairingCodeNewport;
+ (id)backupPairingCodeSecureNewport;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *advertisementCode; // @synthesize advertisementCode=_advertisementCode;
@property(readonly, nonatomic) NSData *candidateCode; // @synthesize candidateCode=_candidateCode;
- (id)description;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *verificationCode; // @synthesize verificationCode=_verificationCode;

@end

