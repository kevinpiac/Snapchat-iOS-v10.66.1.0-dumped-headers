//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCNavigationServices : NSObject
{
    SCLazy *_navigationDelegate;
    SCLazy *_navigationController;
}

- (void).cxx_destruct;
- (id)initWithNavigationDelegate:(id)arg1 navigationController:(id)arg2;
@property(readonly, nonatomic) SCLazy *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SCLazy *navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;

@end

