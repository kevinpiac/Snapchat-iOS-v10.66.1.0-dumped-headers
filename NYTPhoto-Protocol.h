//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSData, UIImage;

@protocol NYTPhoto <NSObject>
@property(readonly, nonatomic) NSAttributedString *attributedCaptionCredit;
@property(readonly, nonatomic) NSAttributedString *attributedCaptionSummary;
@property(readonly, nonatomic) NSAttributedString *attributedCaptionTitle;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) UIImage *placeholderImage;
@end

