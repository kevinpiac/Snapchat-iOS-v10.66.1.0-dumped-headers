//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCloudFSFileAttributes;

@interface SCCloudFSLRUItem : NSObject
{
    NSString *_hashString;
    SCCloudFSFileAttributes *_fileAttributes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) SCCloudFSFileAttributes *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
- (id)initWithHashString:(id)arg1 fileAttributes:(id)arg2;

@end

