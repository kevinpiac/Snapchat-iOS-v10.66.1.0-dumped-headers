//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCDiscoverFeedPrefetchDebuggerItem : NSObject <NSCopying>
{
    _Bool _isLoaded;
    struct CGRect _frame;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (unsigned long long)hash;
- (id)initWithFrame:(struct CGRect)arg1 isLoaded:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;

@end

