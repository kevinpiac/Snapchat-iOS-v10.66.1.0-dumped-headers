//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SCARBarItem : NSObject
{
    _Bool _labelHidden;
    NSString *_name;
    UIImage *_icon;
    NSString *_accessibilityIdentifier;
}

+ (id)itemWithName:(id)arg1 icon:(id)arg2 accessibilityIdentifier:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)initWithName:(id)arg1 icon:(id)arg2 labelHidden:(_Bool)arg3 accessibilityIdentifier:(id)arg4;
@property(readonly, nonatomic) _Bool labelHidden; // @synthesize labelHidden=_labelHidden;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

@end
