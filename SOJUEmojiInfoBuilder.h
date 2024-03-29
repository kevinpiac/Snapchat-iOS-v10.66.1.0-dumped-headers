//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUEmojiInfoBuilder : NSObject
{
    NSNumber *_type;
    NSString *_source;
    NSString *_title;
    NSString *_emojiDesc;
    NSString *_emojiPickerDesc;
    NSNumber *_defaultType;
    NSString *_defaultVal;
    NSNumber *_emojiLegendRank;
}

+ (id)withJUEmojiInfo:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDefaultType:(id)arg1;
- (id)setDefaultTypeEnum:(long long)arg1;
- (id)setDefaultTypeValue:(int)arg1;
- (id)setDefaultVal:(id)arg1;
- (id)setEmojiDesc:(id)arg1;
- (id)setEmojiLegendRank:(id)arg1;
- (id)setEmojiLegendRankValue:(int)arg1;
- (id)setEmojiPickerDesc:(id)arg1;
- (id)setSource:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setTypeValue:(int)arg1;

@end

