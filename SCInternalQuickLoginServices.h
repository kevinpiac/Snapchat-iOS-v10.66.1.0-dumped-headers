//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCInternalQuickLoginProviding;

@interface SCInternalQuickLoginServices : NSObject
{
    id <SCInternalQuickLoginProviding> _quickLoginServices;
}

- (void).cxx_destruct;
- (id)initWithQuickLoginServices:(id)arg1;
@property(readonly, nonatomic) id <SCInternalQuickLoginProviding> quickLoginServices; // @synthesize quickLoginServices=_quickLoginServices;

@end
