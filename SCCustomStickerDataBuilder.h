//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCCustomStickerDataBuilder : NSObject
{
    NSString *_objectID;
    NSDate *_creationTime;
    NSString *_encIv;
    NSString *_encKey;
    _Bool _isSynced;
    NSDate *_lastInteractionTime;
    int _numSyncFailed;
    NSString *_originalSnapId;
    NSString *_packId;
    NSString *_stickerId;
    int _type;
}

+ (id)withCustomStickerData:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCreationTime:(id)arg1;
- (id)setEncIv:(id)arg1;
- (id)setEncKey:(id)arg1;
- (id)setIsSynced:(_Bool)arg1;
- (id)setLastInteractionTime:(id)arg1;
- (id)setNumSyncFailed:(int)arg1;
- (id)setObjectID:(id)arg1;
- (id)setOriginalSnapId:(id)arg1;
- (id)setPackId:(id)arg1;
- (id)setStickerId:(id)arg1;
- (id)setType:(int)arg1;

@end

