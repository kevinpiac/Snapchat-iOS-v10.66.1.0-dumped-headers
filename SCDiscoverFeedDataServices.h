//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCDiscoverFeedDataServices : NSObject
{
    SCLazy *_lazyDiscoverFeedDataFetcher;
    SCLazy *_lazyDiscoverFeedSectionsCoordinator;
}

- (void).cxx_destruct;
- (id)initWithLazyDiscoverFeedDataFetcher:(id)arg1 lazyDiscoverFeedSectionsCoordinator:(id)arg2;
@property(readonly, nonatomic) SCLazy *lazyDiscoverFeedDataFetcher; // @synthesize lazyDiscoverFeedDataFetcher=_lazyDiscoverFeedDataFetcher;
@property(readonly, nonatomic) SCLazy *lazyDiscoverFeedSectionsCoordinator; // @synthesize lazyDiscoverFeedSectionsCoordinator=_lazyDiscoverFeedSectionsCoordinator;

@end
