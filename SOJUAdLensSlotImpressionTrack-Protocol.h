//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUAdLensSlotImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *camera;
@property(readonly, copy, nonatomic) NSString *filterGeolensId;
@property(readonly, copy, nonatomic) NSNumber *isAudioOn;
@property(readonly, copy, nonatomic) NSString *lensOptionId;
@property(readonly, copy, nonatomic) NSString *lensSessionId;
@property(readonly, copy, nonatomic) NSString *mediaType;
@property(readonly, copy, nonatomic) NSNumber *snapPreviewMillis;
@property(readonly, copy, nonatomic) NSNumber *snapTimeMillis;
@property(readonly, copy, nonatomic) NSNumber *swipedOverCount;
@property(readonly, copy, nonatomic) NSNumber *totalSwipedViewMillis;
@property(readonly, copy, nonatomic) NSNumber *withMemoriesSave;
@property(readonly, copy, nonatomic) NSNumber *withSnapSend;
@property(readonly, copy, nonatomic) NSNumber *withStoryPost;
@end

