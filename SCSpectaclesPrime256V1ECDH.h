//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSpectaclesECDH.h"

@interface SCSpectaclesPrime256V1ECDH : SCSpectaclesECDH
{
    struct ECDH *_ecdh;
}

- (void)dealloc;
@property(nonatomic) struct ECDH *ecdh; // @synthesize ecdh=_ecdh;
- (id)generateEncryptionKey:(id)arg1;
- (id)generatePublicKey;
- (id)generateSharedSecret:(id)arg1;
- (id)init;

@end

