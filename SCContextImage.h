//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCContextImage_EncryptedImage, SCContextImage_ImageReference, SCContextImage_InlineImage;

@interface SCContextImage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int contentOneOfCase; // @dynamic contentOneOfCase;
@property(retain, nonatomic) SCContextImage_EncryptedImage *encryptedImage; // @dynamic encryptedImage;
@property(retain, nonatomic) SCContextImage_ImageReference *imageReference; // @dynamic imageReference;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) SCContextImage_InlineImage *inlineImage; // @dynamic inlineImage;
@property(nonatomic) float scaleFactor; // @dynamic scaleFactor;

@end

