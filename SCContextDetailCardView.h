//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCContextCardAction, SCContextDisplayMode, SCContextImage;

@interface SCContextDetailCardView : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *footerText; // @dynamic footerText;
@property(retain, nonatomic) NSMutableArray *footerTextFormattingArray; // @dynamic footerTextFormattingArray;
@property(readonly, nonatomic) unsigned long long footerTextFormattingArray_Count; // @dynamic footerTextFormattingArray_Count;
@property(nonatomic) _Bool hasThumbnailMode; // @dynamic hasThumbnailMode;
@property(nonatomic) _Bool hasThumbnailTapAction; // @dynamic hasThumbnailTapAction;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(retain, nonatomic) NSMutableArray *ratingsArray; // @dynamic ratingsArray;
@property(readonly, nonatomic) unsigned long long ratingsArray_Count; // @dynamic ratingsArray_Count;
@property(retain, nonatomic) SCContextImage *thumbnailImage; // @dynamic thumbnailImage;
@property(retain, nonatomic) SCContextDisplayMode *thumbnailMode; // @dynamic thumbnailMode;
@property(readonly, nonatomic) int thumbnailOneOfCase; // @dynamic thumbnailOneOfCase;
@property(retain, nonatomic) SCContextCardAction *thumbnailTapAction; // @dynamic thumbnailTapAction;

@end

