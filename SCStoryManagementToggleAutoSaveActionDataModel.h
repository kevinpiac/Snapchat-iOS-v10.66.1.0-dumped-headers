//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoryManagementToggleAutoSaveActionDataModel : NSObject <NSCopying>
{
    long long _toggleStatus;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithToggleStatus:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long toggleStatus; // @synthesize toggleStatus=_toggleStatus;

@end
