//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUTextShadowParameters;

@protocol SOJUGeofilterDisplayParameters <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *align;
@property(readonly, copy, nonatomic) NSNumber *autoResizeEnabled;
@property(readonly, copy, nonatomic) NSString *calculatedDynamicText;
@property(readonly, copy, nonatomic) NSString *capitalization;
@property(readonly, copy, nonatomic) NSString *color;
@property(readonly, copy, nonatomic) NSString *dynamicText;
@property(readonly, copy, nonatomic) NSString *fallbackMethod;
@property(readonly, copy, nonatomic) NSString *fallbackText;
@property(readonly, copy, nonatomic) NSString *font;
@property(readonly, copy, nonatomic) NSNumber *maxFontSize;
@property(readonly, copy, nonatomic) NSNumber *size;
@property(readonly, copy, nonatomic) NSString *staticText;
@property(readonly, copy, nonatomic) NSString *targetDatetime;
@property(readonly, copy, nonatomic) NSString *targetDatetimeDirection;
@property(readonly, copy, nonatomic) NSNumber *textAlpha;
@property(readonly, copy, nonatomic) SOJUTextShadowParameters *textShadow;
@end

