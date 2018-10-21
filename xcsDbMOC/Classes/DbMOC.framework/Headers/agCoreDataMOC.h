//
//  agCoreDataMOC.h
//  DbMOC
//
//  Created by Cypress on 2018/10/19.
//  Copyright © 2018 xcs. All rights reserved.
//

#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface agCoreDataMOC : NSManagedObjectContext
@property (nonatomic,readonly) NSManagedObjectModel *MOModel;
@property (nonatomic,readonly) NSPersistentStoreCoordinator *PSC;
@property (nonatomic,readonly) NSPersistentStore* PS;


- (id)initMainQueueMOCWithMOM:(NSManagedObjectModel*)model;
- (id)initMainQueueMOCWithPSC:(NSPersistentStoreCoordinator *)psc;
- (NSError*)setPersistentStoreWithType:(NSString *)storeType
                         configuration:(NSString *)configuration
                                   URL:(NSURL *)storeURL
                               options:(NSDictionary *)options;

+ (id)getPrivateQueueMOCWithMainQueueMOC:(id)moc Error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
