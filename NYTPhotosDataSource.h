//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NYTPhotosViewControllerDataSource-Protocol.h"

@class NSArray;

@interface NYTPhotosDataSource : NSObject <NYTPhotosViewControllerDataSource>
{
    NSArray *_photos;
}

- (void).cxx_destruct;
- (_Bool)containsPhoto:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)indexOfPhoto:(id)arg1;
- (id)init;
- (id)initWithPhotos:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfPhotos;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)photoAtIndex:(unsigned long long)arg1;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;

@end

