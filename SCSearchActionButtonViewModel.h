//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCSearchActionButtonViewModelCustomConfig, UIColor, UIImage;

@interface SCSearchActionButtonViewModel : NSObject <NSCopying>
{
    _Bool _isLoading;
    _Bool _showShadow;
    NSString *_title;
    UIImage *_image;
    UIColor *_tintColor;
    long long _buttonStyle;
    long long _buttonImageStyle;
    long long _buttonColorStyle;
    long long _buttonLabelOffsetStyle;
    long long _buttonImageSizeStyle;
    SCActionModel *_model;
    SCSearchActionButtonViewModelCustomConfig *_customConfig;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long buttonColorStyle; // @synthesize buttonColorStyle=_buttonColorStyle;
@property(readonly, nonatomic) long long buttonImageSizeStyle; // @synthesize buttonImageSizeStyle=_buttonImageSizeStyle;
@property(readonly, nonatomic) long long buttonImageStyle; // @synthesize buttonImageStyle=_buttonImageStyle;
@property(readonly, nonatomic) long long buttonLabelOffsetStyle; // @synthesize buttonLabelOffsetStyle=_buttonLabelOffsetStyle;
@property(readonly, nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModelCustomConfig *customConfig; // @synthesize customConfig=_customConfig;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tintColor:(id)arg3 buttonStyle:(long long)arg4 buttonImageStyle:(long long)arg5 buttonColorStyle:(long long)arg6 buttonLabelOffsetStyle:(long long)arg7 buttonImageSizeStyle:(long long)arg8 contentInsets:(struct UIEdgeInsets)arg9 isLoading:(_Bool)arg10 model:(id)arg11 customConfig:(id)arg12 showShadow:(_Bool)arg13;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, copy, nonatomic) SCActionModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) _Bool showShadow; // @synthesize showShadow=_showShadow;
@property(readonly, copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

