//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLRUCache;

@interface SCConfigLRUCache : NSObject
{
    SCLRUCache *_configsLRUCache;
}

- (void).cxx_destruct;
- (id)allConfigKeys;
- (void)batchSetFromDict:(id)arg1;
- (id)configRulesForConfigKey:(id)arg1;
- (id)initWithSizeLimit:(unsigned long long)arg1;
- (void)setConfigRules:(id)arg1 forConfigKey:(id)arg2;
- (unsigned long long)size;

@end

