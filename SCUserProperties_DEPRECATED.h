//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCUserProperties_DEPRECATED : NSObject
{
    NSString *_username;
}

- (void).cxx_destruct;
- (id)initWithUsername:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (void)removePropertyForKey:(id)arg1 immediate:(_Bool)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2 immediate:(_Bool)arg3;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)userSpecificKeyForKey:(id)arg1;

@end

