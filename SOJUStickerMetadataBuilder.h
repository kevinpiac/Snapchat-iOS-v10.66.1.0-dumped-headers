//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUStickerMetadataBuilder : NSObject
{
    NSString *_stickerId;
    NSString *_stickerType;
    NSString *_mediaPath;
    NSNumber *_priority;
    NSNumber *_active;
    NSNumber *_hasAlpha;
    NSArray *_capabilities;
    NSNumber *_isAnimated;
    NSNumber *_uniqueId;
    NSNumber *_order;
    NSString *_contentObject;
    NSString *_boltContentUrl;
}

+ (id)withJUStickerMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setActive:(id)arg1;
- (id)setActiveValue:(_Bool)arg1;
- (id)setBoltContentUrl:(id)arg1;
- (id)setCapabilities:(id)arg1;
- (id)setContentObject:(id)arg1;
- (id)setHasAlpha:(id)arg1;
- (id)setHasAlphaValue:(_Bool)arg1;
- (id)setIsAnimated:(id)arg1;
- (id)setIsAnimatedValue:(_Bool)arg1;
- (id)setMediaPath:(id)arg1;
- (id)setOrder:(id)arg1;
- (id)setOrderValue:(int)arg1;
- (id)setPriority:(id)arg1;
- (id)setPriorityValue:(int)arg1;
- (id)setStickerId:(id)arg1;
- (id)setStickerType:(id)arg1;
- (id)setStickerTypeEnum:(long long)arg1;
- (id)setUniqueId:(id)arg1;
- (id)setUniqueIdValue:(long long)arg1;

@end

