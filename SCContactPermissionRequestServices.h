//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCContactPermissionRequesting;

@interface SCContactPermissionRequestServices : NSObject
{
    id <SCContactPermissionRequesting> _contactPermissionRequester;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCContactPermissionRequesting> contactPermissionRequester; // @synthesize contactPermissionRequester=_contactPermissionRequester;
- (id)initWithContactPermissionRequester:(id)arg1;

@end
