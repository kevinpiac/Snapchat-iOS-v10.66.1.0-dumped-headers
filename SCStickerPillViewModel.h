//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface SCStickerPillViewModel : NSObject
{
    NSString *_text;
    NSURL *_iconURL;
    UIImage *_placeholderIcon;
    long long _iconRenderingMode;
}

- (void).cxx_destruct;
- (id)copy;
@property(readonly, nonatomic) long long iconRenderingMode; // @synthesize iconRenderingMode=_iconRenderingMode;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
- (id)initWithText:(id)arg1 iconURL:(id)arg2 placeholderIcon:(id)arg3;
- (id)initWithText:(id)arg1 iconURL:(id)arg2 placeholderIcon:(id)arg3 iconRenderingMode:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) UIImage *placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

@end

