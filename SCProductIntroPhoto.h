//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NYTPhoto-Protocol.h"

@class NSAttributedString, NSData, NSString, UIImage;

@interface SCProductIntroPhoto : NSObject <NYTPhoto>
{
    UIImage *_image;
    NSData *_imageData;
    UIImage *_placeholderImage;
    NSAttributedString *_attributedCaptionTitle;
    NSAttributedString *_attributedCaptionSummary;
    NSAttributedString *_attributedCaptionCredit;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *attributedCaptionCredit; // @synthesize attributedCaptionCredit=_attributedCaptionCredit;
@property(retain, nonatomic) NSAttributedString *attributedCaptionSummary; // @synthesize attributedCaptionSummary=_attributedCaptionSummary;
@property(retain, nonatomic) NSAttributedString *attributedCaptionTitle; // @synthesize attributedCaptionTitle=_attributedCaptionTitle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

