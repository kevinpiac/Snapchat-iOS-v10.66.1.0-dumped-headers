//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Helpers)
+ (id)_deepCopyHelper:(id)arg1 mutableCopy:(_Bool)arg2;
+ (_Bool)_needsDeepCopy:(id)arg1;
- (_Bool)allMatch:(CDUnknownBlockType)arg1;
- (_Bool)anyMatch:(CDUnknownBlockType)arg1;
- (id)json;
- (id)mapValues:(CDUnknownBlockType)arg1;
- (id)objectForKey:(id)arg1 withDefault:(id)arg2;
- (id)sc_deepCopy;
- (id)sc_mutableDeepCopy;
- (long long)sizeInBytes;
@end
