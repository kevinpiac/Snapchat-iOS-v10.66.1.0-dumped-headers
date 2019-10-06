//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCAvatarViewModel, SCNetworkImage;

@interface SCUpNextGroupThumbnailViewModel : NSObject
{
    SCNetworkImage *_networkImage;
    SCAvatarViewModel *_avatarViewModel;
    NSString *_displayText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (id)initWithAvatarViewModel:(id)arg1 displayText:(id)arg2;
- (id)initWithNetworkImage:(id)arg1;
@property(readonly, nonatomic) SCNetworkImage *networkImage; // @synthesize networkImage=_networkImage;

@end
