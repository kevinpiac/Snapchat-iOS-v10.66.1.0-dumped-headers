//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCBitmojiFetchServices : NSObject
{
    SCLazy *_avatarProvider;
    SCLazy *_imageFetcher;
    SCLazy *_metricsProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *avatarProvider; // @synthesize avatarProvider=_avatarProvider;
@property(readonly, nonatomic) SCLazy *imageFetcher; // @synthesize imageFetcher=_imageFetcher;
- (id)initWithAvatarProvider:(id)arg1 imageFetcher:(id)arg2 metricsProvider:(id)arg3;
@property(readonly, nonatomic) SCLazy *metricsProvider; // @synthesize metricsProvider=_metricsProvider;

@end
