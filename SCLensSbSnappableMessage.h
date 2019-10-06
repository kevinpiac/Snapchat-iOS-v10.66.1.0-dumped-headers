//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCLensSbSnap3DData, SCLensSbSnappable;

@interface SCLensSbSnappableMessage : GPBMessage
{
}

+ (id)descriptor;
+ (id)sc_initWithBase64String:(id)arg1 error:(id *)arg2;
- (void)sc_decryptUsingKey:(id)arg1 iv:(id)arg2;
- (void)sc_encryptUsingKey:(id)arg1 iv:(id)arg2;
- (id)sc_prefetchableAssetsWithOrigin:(unsigned long long)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *assetBatchId; // @dynamic assetBatchId;
@property(copy, nonatomic) NSString *effectId; // @dynamic effectId;
@property(nonatomic) float focusPointWidth; // @dynamic focusPointWidth;
@property(nonatomic) float focusPointX; // @dynamic focusPointX;
@property(nonatomic) float focusPointY; // @dynamic focusPointY;
@property(nonatomic) _Bool hasSnap3DData; // @dynamic hasSnap3DData;
@property(nonatomic) _Bool hasSnappable; // @dynamic hasSnappable;
@property(retain, nonatomic) NSMutableArray *mediaArray; // @dynamic mediaArray;
@property(readonly, nonatomic) unsigned long long mediaArray_Count; // @dynamic mediaArray_Count;
@property(nonatomic) int replyType; // @dynamic replyType;
@property(retain, nonatomic) SCLensSbSnap3DData *snap3DData; // @dynamic snap3DData;
@property(retain, nonatomic) SCLensSbSnappable *snappable; // @dynamic snappable;
@property(retain, nonatomic) NSMutableArray *userIdsArray; // @dynamic userIdsArray;
@property(readonly, nonatomic) unsigned long long userIdsArray_Count; // @dynamic userIdsArray_Count;

@end

