//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUStickerMetadata <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *active;
@property(readonly, copy, nonatomic) NSString *boltContentUrl;
@property(readonly, copy, nonatomic) NSArray *capabilities;
@property(readonly, copy, nonatomic) NSString *contentObject;
@property(readonly, copy, nonatomic) NSNumber *hasAlpha;
@property(readonly, copy, nonatomic) NSNumber *isAnimated;
@property(readonly, copy, nonatomic) NSString *mediaPath;
@property(readonly, copy, nonatomic) NSNumber *order;
@property(readonly, copy, nonatomic) NSNumber *priority;
@property(readonly, copy, nonatomic) NSString *stickerId;
@property(readonly, copy, nonatomic) NSString *stickerType;
@property(readonly, copy, nonatomic) NSNumber *uniqueId;
@end

