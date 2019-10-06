//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface SCFriendsFeedIcon : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_iconImage_imageName;
    UIImage *_iconImage_image;
    NSString *_emoji_emoji;
    UIColor *_activityIndicator_tintColor;
    _Bool _activityIndicator_isLoading;
}

+ (id)activityIndicatorWithTintColor:(id)arg1 isLoading:(_Bool)arg2;
+ (id)emojiWithEmoji:(id)arg1;
+ (id)iconImageWithImageName:(id)arg1 image:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchIconImage:(CDUnknownBlockType)arg1 emoji:(CDUnknownBlockType)arg2 activityIndicator:(CDUnknownBlockType)arg3;

@end

