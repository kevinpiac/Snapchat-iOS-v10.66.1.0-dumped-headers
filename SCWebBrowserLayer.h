//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, NSURL, SCOperaPage;

@interface SCWebBrowserLayer : NSObject <SCOperaLayer>
{
    _Bool _delayLoadUntilScheduledToTakeOver;
    _Bool _allowPreloading;
    NSURL *_url;
    SCOperaPage *_page;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowPreloading; // @synthesize allowPreloading=_allowPreloading;
@property(readonly, nonatomic) _Bool delayLoadUntilScheduledToTakeOver; // @synthesize delayLoadUntilScheduledToTakeOver=_delayLoadUntilScheduledToTakeOver;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (unsigned long long)type;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
