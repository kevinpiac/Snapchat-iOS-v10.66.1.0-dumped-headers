//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCPreviewConfigurationListener : NSObject
{
    unsigned long long _keys;
    CDUnknownBlockType _commitBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType commitBlock; // @synthesize commitBlock=_commitBlock;
- (id)initWithKeys:(unsigned long long)arg1 commitBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long keys; // @synthesize keys=_keys;

@end

