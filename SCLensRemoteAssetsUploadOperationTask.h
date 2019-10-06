//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString, SCLensUploadAssetInfo;

@interface SCLensRemoteAssetsUploadOperationTask : NSObject <NSCoding>
{
    unsigned long long _state;
    SCLensUploadAssetInfo *_assetInfo;
    NSData *_encryptionKey;
    NSData *_encryptionIv;
    NSString *_effectId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLensUploadAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
@property(readonly, nonatomic) NSString *effectId; // @synthesize effectId=_effectId;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *encryptionIv; // @synthesize encryptionIv=_encryptionIv;
@property(readonly, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (unsigned long long)hash;
- (id)initAssetWithAssetInfo:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3 effectId:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;

@end
