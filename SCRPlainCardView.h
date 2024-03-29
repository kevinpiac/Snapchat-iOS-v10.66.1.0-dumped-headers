//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCRHtml, SCRImage, SCRStoryElementReference;

@interface SCRPlainCardView : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float aspectRatio; // @dynamic aspectRatio;
@property(readonly, nonatomic) int contentOneOfCase; // @dynamic contentOneOfCase;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) SCRHtml *html; // @dynamic html;
@property(retain, nonatomic) SCRImage *image; // @dynamic image;
@property(readonly, nonatomic) int sizingOneOfCase; // @dynamic sizingOneOfCase;
@property(retain, nonatomic) SCRStoryElementReference *storyElement; // @dynamic storyElement;

@end

