//
//  agTagObject.h
//  DbMOC
//
//  Created by Cypress on 2018/10/19.
//  Copyright © 2018 xcs. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface agTagObject : NSObject
-(NSUInteger)NewTag;
-(void)pushRecord:(NSInteger)tag record:(id)datas;
-(id)popRecord:(NSInteger)tag;

@end

#define TagObjectMakgTagString(intV) [NSString stringWithFormat:@"%32ld",(long) intV]

#define kTagObjectGeneralBlock  @"callbackBlock"
#define kTagObjectWebServiceObj  @"WebServiceObj"
#define kTagObjectArgs          @"Arguments"

NS_ASSUME_NONNULL_END
