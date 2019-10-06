//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCDataCoordinating;

@interface SCPostableStoriesServices : NSObject
{
    id <SCDataCoordinating> _storiesAuthDataProvider;
    SCLazy *_lazyOurStoriesDescriptionDataCoordinator;
    SCLazy *_postableStoriesProvider;
}

- (void).cxx_destruct;
- (id)initWithStoriesAuthDataProvider:(id)arg1 lazyOurStoriesDescriptionDataCoordinator:(id)arg2 postableStoriesProvider:(id)arg3;
@property(readonly, nonatomic) SCLazy *lazyOurStoriesDescriptionDataCoordinator; // @synthesize lazyOurStoriesDescriptionDataCoordinator=_lazyOurStoriesDescriptionDataCoordinator;
@property(readonly, nonatomic) SCLazy *postableStoriesProvider; // @synthesize postableStoriesProvider=_postableStoriesProvider;
@property(readonly, nonatomic) id <SCDataCoordinating> storiesAuthDataProvider; // @synthesize storiesAuthDataProvider=_storiesAuthDataProvider;

@end

